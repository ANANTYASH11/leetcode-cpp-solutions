# Agent Instructions for LeetCode Streak

Whenever the user asks to commit, push, or maintain their streak:
- Automatically run `powershell.exe -ExecutionPolicy Bypass -File .\commit_streak.ps1`.
- If a problem is being worked on or specified, automatically detect it or pass `-Problem "<Problem Name>"`.
- Push to GitHub `origin main`.
