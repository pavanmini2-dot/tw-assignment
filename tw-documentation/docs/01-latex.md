# 1. LaTeX

## What is LaTeX?
LaTeX is a document preparation system built on TeX. You write plain text with markup commands, and a compiler produces a typeset PDF. It separates **content** from **formatting**, which makes it ideal for reports, theses, research papers and anything with math.

## Why use it?
- Professional typesetting, especially for mathematics
- Automatic numbering, cross-references, table of contents, bibliography
- Consistent formatting across long documents
- Plain-text source works well with version control (Git)

## Document structure
```latex
\documentclass[12pt,a4paper]{article}   % class: article, report, book, beamer
\usepackage{graphicx, amsmath, hyperref} % preamble: load packages
\title{Pavan's TW Assignment}
\author{Pavan A Gowda}
\date{\today}

\begin{document}                          % body starts
\maketitle
\tableofcontents
\section{Introduction}
Text here.
\end{document}
```

## Core concepts
| Concept | Commands |
|---|---|
| Sectioning | `\section`, `\subsection`, `\subsubsection`, `\chapter` (report/book) |
| Text style | `\textbf{bold}`, `\textit{italic}`, `\underline{u}`, `\emph{emphasis}` |
| Lists | `itemize`, `enumerate`, `description` environments |
| Math | Inline `$x^2$`, display `\[ ... \]`, `equation`, `align` environments |
| Figures | `figure` environment + `\includegraphics`, `\caption`, `\label` |
| Tables | `tabular` inside `table`, with `\hline` |
| Cross-references | `\label{key}` and `\ref{key}` |
| Citations | BibTeX/BibLaTeX: `\cite{key}` and a `.bib` file |
| Code listings | `listings` or `minted` packages |

## Math examples
```latex
Inline: $E = mc^2$

\begin{equation}
  \int_0^\infty e^{-x^2}\,dx = \frac{\sqrt{\pi}}{2}
  \label{eq:gauss}
\end{equation}
```

## Bibliography workflow
1. Add entries to `references.bib`.
2. Cite with `\cite{key}` in the text.
3. Add `\bibliographystyle{ieeetran}` and `\bibliography{references}`.
4. Compile: `pdflatex` → `bibtex` → `pdflatex` → `pdflatex`.

## Compiling
- Command line: `pdflatex file.tex` (run twice for references/TOC)
- `latexmk -pdf file.tex` automates multiple passes
- Online: Overleaf; Local editors: TeXstudio, VS Code + LaTeX Workshop

## Common errors
- **Missing `$ inserted`**: math symbol used outside math mode.
- **Undefined control sequence**: typo or missing package.
- **File not found**: wrong path for an image or `.bib`.
- Special characters must be escaped: `\% \& \_ \# \$ \{ \}`.

## What I learned
- LaTeX is "what you mean" rather than "what you see" authoring.
- Labels and references remove manual numbering errors.
- Good structure (sections, packages in the preamble) keeps large documents manageable.

See the working example: [`examples/latex/sample-report.tex`](../examples/latex/sample-report.tex).
