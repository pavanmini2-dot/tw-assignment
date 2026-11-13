# 3. Doxygen

## What is Doxygen?
Doxygen is a documentation generator. It reads specially formatted comments in source code (C, C++, Java, Python, etc.) and produces HTML, PDF (via LaTeX), man pages and more, including call graphs and class diagrams (with Graphviz).

## Workflow
1. Write documentation comments in the source code.
2. Generate a config file: `doxygen -g Doxyfile`
3. Edit key settings in the `Doxyfile`.
4. Run `doxygen Doxyfile`.
5. Open `html/index.html` in a browser.

## Comment styles
```c
/**
 * @brief  Adds two integers.
 * @param  a First operand.
 * @param  b Second operand.
 * @return The sum of a and b.
 * @note   No overflow checking is done.
 */
int add(int a, int b);

int x; ///< Inline comment documenting a member
```
Both `/** ... */` and `///` styles work. Commands can start with `@` or `\`.

## Common commands
| Command | Purpose |
|---|---|
| `@file` | Describes the file |
| `@brief` | One-line summary |
| `@param` | Documents a parameter |
| `@return` | Documents the return value |
| `@author`, `@date`, `@version` | Metadata |
| `@see` | Cross-reference |
| `@code ... @endcode` | Code block |
| `@todo`, `@bug`, `@warning`, `@note` | Annotations |
| `@mainpage`, `@section` | Hand-written pages |

## Important Doxyfile settings
| Setting | Example value |
|---|---|
| `PROJECT_NAME` | `"Calculator"` |
| `INPUT` | `src` |
| `OUTPUT_DIRECTORY` | `docs` |
| `RECURSIVE` | `YES` |
| `EXTRACT_ALL` | `YES` (document undocumented items too) |
| `GENERATE_HTML` / `GENERATE_LATEX` | `YES` / `NO` |
| `HAVE_DOT` | `YES` (needs Graphviz, enables graphs) |
| `USE_MDFILE_AS_MAINPAGE` | `README.md` |

## What I learned
- Documentation lives next to the code, so it stays current.
- Consistent tags (`@brief`, `@param`, `@return`) make API docs readable.
- Graphs show relationships between files, classes and calls.

See: [`examples/doxygen`](../examples/doxygen).
