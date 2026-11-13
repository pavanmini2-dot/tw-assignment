# 5. Git

## What is Git?
Git is a distributed version control system. It tracks changes to files over time, lets many people work in parallel using branches, and lets you revert to earlier states. Every clone holds the full history.

## Three areas
```
Working directory --git add--> Staging area --git commit--> Local repository --git push--> Remote
```

## Setup
```bash
git config --global user.name "Your Name"
git config --global user.email "you@example.com"
git config --global init.defaultBranch main
```

## Everyday workflow
```bash
git init                       # create a repo
git clone <url>                # copy an existing repo
git status                     # see changes
git add file.txt               # stage a file (or: git add .)
git commit -m "Add intro"      # save a snapshot
git log --oneline --graph      # view history
git diff                       # unstaged changes
git diff --staged              # staged changes
```

## Branching and merging
```bash
git branch                     # list branches
git switch -c feature/x        # create + switch (older: git checkout -b)
git switch main
git merge feature/x            # merge into current branch
git branch -d feature/x        # delete merged branch
```

## Working with remotes
```bash
git remote add origin <url>
git push -u origin main
git pull                       # fetch + merge
git fetch                      # download without merging
```

## Undoing things
| Goal | Command |
|---|---|
| Unstage a file | `git restore --staged file` |
| Discard local edits | `git restore file` |
| Amend last commit | `git commit --amend` |
| Revert a commit safely | `git revert <hash>` |
| Move branch back (careful) | `git reset --hard <hash>` |
| Temporarily save work | `git stash` / `git stash pop` |

## Merge conflicts
When two branches edit the same lines, Git marks the file:
```
<<<<<<< HEAD
your version
=======
their version
>>>>>>> feature/x
```
Edit the file to the correct result, remove the markers, then `git add file` and `git commit`.

## Good commit habits
- Small, focused commits
- Imperative message: "Add login form", not "added stuff"
- Use `.gitignore` for build files and secrets
- Never commit passwords or API keys

## What I learned
- Git records history so mistakes are recoverable.
- Branches isolate work, merges combine it.
- A clean commit history is part of good technical communication.

Cheat sheet: [`examples/git/git-cheatsheet.md`](../examples/git/git-cheatsheet.md).
