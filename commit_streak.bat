@echo off
title LeetCode Streak Committer
powershell.exe -ExecutionPolicy Bypass -NoProfile -File "%~dp0commit_streak.ps1" %*
pause
