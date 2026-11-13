# 2. Beamer

## What is Beamer?
Beamer is a LaTeX document class for creating presentation slides. It gives LaTeX's typesetting quality (math, code, references) in slide form and outputs a PDF.

## Basic skeleton
```latex
\documentclass{beamer}
\usetheme{Madrid}
\usecolortheme{beaver}

\title{Pavan's Presentation}
\author{Pavan Gowda}
\date{\today}

\begin{document}
\frame{\titlepage}

\begin{frame}{Outline}
  \tableofcontents
\end{frame}

\section{Introduction}
\begin{frame}{Slide Title}
  \begin{itemize}
    \item<1-> First point
    \item<2-> Second point appears on click 2
  \end{itemize}
\end{frame}
\end{document}
```

## Key features
| Feature | How |
|---|---|
| Frames (slides) | `\begin{frame}{Title} ... \end{frame}` |
| Themes | `\usetheme{Madrid}`, `Berlin`, `Warsaw`, `metropolis` etc. |
| Color/font themes | `\usecolortheme{...}`, `\usefonttheme{...}` |
| Overlays / animation | `\pause`, `\item<2->`, `\only<2>{}`, `\uncover<3->{}` |
| Blocks | `block`, `alertblock`, `exampleblock` environments |
| Columns | `columns` environment with `\column{0.5\textwidth}` |
| Images | `\includegraphics[width=\textwidth]{file}` |
| Code | `\begin{frame}[fragile]` with `verbatim` or `lstlisting` |
| Notes | `\note{...}` with `\setbeameroption{show notes}` |
| Handouts | `\documentclass[handout]{beamer}` removes overlays |

## Tips for good slides
- One idea per slide; keep text short.
- Use visuals (figures, diagrams) over paragraphs.
- Use consistent theme and font sizes.
- Use `[fragile]` for any frame containing verbatim code.
- Check overlays by compiling the PDF and paging through.

## What I learned
- Beamer reuses everything I know from LaTeX, so equations and references are easy.
- Themes let me change the whole look with one line.
- Overlays give control of how content is revealed.

See: [`examples/beamer/sample-presentation.tex`](../examples/beamer/sample-presentation.tex).
