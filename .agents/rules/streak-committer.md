# LeetCode Streak Committer Rule

Whenever the user instructs to "commit streak", "commit", "push", "update streak", "push to github", or mentions that they solved a problem (or worked on a LeetCode problem):

1. **Immediate Execution**: Do not ask for confirmation or debate what to do. Immediately stage the files, commit, and push.
2. **Execute Script**: Run `powershell.exe -ExecutionPolicy Bypass -File .\commit_streak.ps1` in `c:\Leetcode content`.
3. **If a specific problem is mentioned**: Pass `-Problem "<Problem Name>"` to the script or use a custom message.
4. **Report Result**: Display the commit hash, problem committed, and push status to the user concisely.
