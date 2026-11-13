# 6. GitHub

## What is GitHub?
GitHub is a cloud platform that hosts Git repositories and adds collaboration tools: pull requests, issues, code review, project boards, automation and hosting for documentation sites.

## Git vs GitHub
| Git | GitHub |
|---|---|
| Version control software on your computer | Online service hosting Git repos |
| Works offline | Needs internet |
| Commits, branches, merges | Pull requests, issues, Actions, Pages |

## Creating and publishing a repository
1. Create an account and a new repository (add README, `.gitignore`, license).
2. Clone it: `git clone https://github.com/<user>/<repo>.git`
3. Add files, then `git add .`, `git commit -m "..."`, `git push`.
4. Or push an existing project:
```bash
git remote add origin https://github.com/<user>/<repo>.git
git branch -M main
git push -u origin main
```
Authenticate with a Personal Access Token or SSH key (HTTPS passwords are no longer accepted).

## Collaboration workflow
**Fork → Clone → Branch → Commit → Push → Pull Request → Review → Merge**
1. *Fork* copies someone's repo to your account (or just branch if you have write access).
2. Create a feature branch and commit.
3. Push the branch and open a **Pull Request (PR)** describing the change.
4. Reviewers comment; you push fixes to the same branch.
5. Maintainer merges; delete the branch.

## Key features
| Feature | Purpose |
|---|---|
| README.md | Front page of the repo, written in Markdown |
| Issues | Track bugs, tasks and ideas; labels, assignees, milestones |
| Pull requests | Propose and review changes |
| Projects | Kanban-style planning boards |
| Actions | CI/CD automation (e.g., build LaTeX or Doxygen on every push) |
| Pages | Free static site hosting (e.g., publish Doxygen HTML) |
| Releases | Tag versions and attach files |
| Wiki | Extra documentation pages |
| Branch protection | Require reviews/checks before merging |

## Markdown basics (used in README and docs)
```markdown
# Heading 1
## Heading 2
**bold**, *italic*, `inline code`
- bullet list
1. numbered list
[link text](https://example.com)
![alt text](image.png)
| Col A | Col B |
|-------|-------|
| 1     | 2     |
```

## Example: publish Doxygen docs with GitHub Pages
1. Generate docs with `doxygen Doxyfile`.
2. Push the HTML folder (e.g., to a `docs/` folder or `gh-pages` branch).
3. Settings → Pages → choose the branch/folder.
4. Site appears at `https://<user>.github.io/<repo>/`.

## What I learned
- GitHub turns Git history into a collaboration space with review and tracking.
- A good README, issues and PR templates make a project easy to understand.
- Automation (Actions, Pages) can build and publish documentation automatically.
