# Technical Writing (TW) – Learning Documentation

**Author:** Pavan A Gowda | **Roll No:** 2025UCP1937 | **Course:** Technical Writing, NIT Jaipur, Sem 3

This repository documents what I learned in my Technical Writing class about six tools used to write, present, document and version technical work.

## Contents

| # | Topic | Documentation | Example files |
|---|-------|---------------|---------------|
| 1 | LaTeX | [docs/01-latex.md](docs/01-latex.md) | [examples/latex](examples/latex) |
| 2 | Beamer | [docs/02-beamer.md](docs/02-beamer.md) | [examples/beamer](examples/beamer) |
| 3 | Doxygen | [docs/03-doxygen.md](docs/03-doxygen.md) | [examples/doxygen](examples/doxygen) |
| 4 | Google Docs | [docs/04-google-docs.md](docs/04-google-docs.md) | – |
| 5 | Git | [docs/05-git.md](docs/05-git.md) | [examples/git](examples/git) |
| 6 | GitHub | [docs/06-github.md](docs/06-github.md) | – |

## Repository structure

```
tw-documentation/
├── README.md
├── LICENSE
├── .gitignore
├── docs/                 # One documentation page per tool
├── examples/
│   ├── latex/            # sample-report.tex
│   ├── beamer/           # sample-presentation.tex
│   ├── doxygen/          # Doxyfile + documented C source
│   └── git/              # command cheat sheet
└── .github/
    └── pull_request_template.md
```

## How to build the examples

```bash
# LaTeX report
cd examples/latex && pdflatex sample-report.tex && pdflatex sample-report.tex

# Beamer slides
cd examples/beamer && pdflatex sample-presentation.tex

# Doxygen docs (output in examples/doxygen/docs/html)
cd examples/doxygen && doxygen Doxyfile
```

Requirements: a TeX distribution (TeX Live / MiKTeX), Doxygen, and optionally Graphviz.
