param(
    [string]$Problem = "",
    [string]$Message = "",
    [switch]$NoPush,
    [switch]$ForceStreak
)

$repoRoot = $PSScriptRoot
Set-Location $repoRoot

$today = (Get-Date).ToString("yyyy-MM-dd")
$now = (Get-Date).ToString("yyyy-MM-dd HH:mm:ss")

Write-Host "==========================================" -ForegroundColor Cyan
Write-Host "LeetCode GitHub Streak Committer" -ForegroundColor Green
Write-Host ("User: ANANTYASH11 | Time: " + $now) -ForegroundColor Yellow
Write-Host "==========================================" -ForegroundColor Cyan

# 1. Inspect git status
$statusLines = @(git status --porcelain)
$modifiedCpp = @()

foreach ($line in $statusLines) {
    if ([string]::IsNullOrWhiteSpace($line)) { continue }
    $trimmed = $line.Substring(2).Trim()
    $trimmed = $trimmed.Trim('"')
    if ($trimmed.EndsWith(".cpp")) {
        $modifiedCpp += $trimmed
    }
}

# 2. Identify Problem Title
$detectedProblem = ""
if ($Problem) {
    $detectedProblem = $Problem
} elseif ($modifiedCpp.Count -gt 0) {
    $firstCpp = Join-Path $repoRoot $modifiedCpp[0]
    if (Test-Path $firstCpp) {
        $headLines = Get-Content -Path $firstCpp -TotalCount 5
        foreach ($h in $headLines) {
            if ($h -match "//\s*Problem:\s*(.*)") {
                $detectedProblem = $matches[1].Trim()
                break
            }
        }
    }
    if (-not $detectedProblem) {
        $base = [System.IO.Path]::GetFileNameWithoutExtension($modifiedCpp[0])
        $detectedProblem = $base.Replace("_", " ")
    }
}

if (-not $detectedProblem) {
    $detectedProblem = "383. Ransom Note"
}

# 3. Update STREAK.md log
$streakFile = Join-Path $repoRoot "STREAK.md"
if (Test-Path $streakFile) {
    $entry = "| " + $today + " | " + $detectedProblem + " | Solved | " + $now + " |"
    $existing = Get-Content -Path $streakFile -Raw -Encoding UTF8
    if (-not $existing.Contains($detectedProblem) -or $ForceStreak -or ($statusLines.Count -eq 0)) {
        Add-Content -Path $streakFile -Value $entry -Encoding UTF8
        Write-Host ("Updated STREAK.md for: " + $detectedProblem) -ForegroundColor Green
    }
}

# 4. Stage and commit
git add .
$pending = @(git status --porcelain)
if ($pending.Count -eq 0) {
    Write-Host "Working tree clean and up to date." -ForegroundColor Yellow
} else {
    if ($Message) {
        $commitMsg = $Message
    } else {
        $commitMsg = "Solved: " + $detectedProblem + " | Streak " + $today
    }

    Write-Host ("Creating Commit: " + $commitMsg) -ForegroundColor Green
    git commit -m $commitMsg
}

# 5. Remote Push
$remotes = @(git remote)
if (($remotes -contains "origin") -and (-not $NoPush)) {
    $currentBranch = (git rev-parse --abbrev-ref HEAD).Trim()
    Write-Host ("Pushing to origin/" + $currentBranch + "...") -ForegroundColor Cyan
    git push origin $currentBranch
    if ($LASTEXITCODE -eq 0) {
        Write-Host "Pushed successfully! GitHub streak maintained green!" -ForegroundColor Green
    } else {
        Write-Host ("Git push exited with code " + $LASTEXITCODE + ". Please check credentials or network.") -ForegroundColor Red
    }
} else {
    Write-Host ""
    Write-Host "Note: No remote origin configured yet." -ForegroundColor Yellow
    Write-Host "Link your GitHub repository with:" -ForegroundColor White
    Write-Host "  git remote add origin https://ANANTYASH11@github.com/ANANTYASH11/<repo-name>.git" -ForegroundColor Cyan
    Write-Host "  git push -u origin main" -ForegroundColor Cyan
    Write-Host "Commit was recorded locally." -ForegroundColor Green
}

Write-Host "==========================================" -ForegroundColor Cyan
