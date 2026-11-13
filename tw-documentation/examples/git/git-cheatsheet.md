# Git Cheat Sheet

| Task | Command |
|---|---|
| Configure name | `git config --global user.name "Name"` |
| Start repo | `git init` |
| Clone | `git clone <url>` |
| Status | `git status` |
| Stage all | `git add .` |
| Commit | `git commit -m "message"` |
| History | `git log --oneline --graph --all` |
| New branch | `git switch -c <branch>` |
| Switch branch | `git switch <branch>` |
| Merge | `git merge <branch>` |
| Add remote | `git remote add origin <url>` |
| Push | `git push -u origin <branch>` |
| Pull | `git pull` |
| Unstage | `git restore --staged <file>` |
| Discard changes | `git restore <file>` |
| Stash | `git stash` / `git stash pop` |
| Tag a release | `git tag -a v1.0 -m "Version 1.0"` |
