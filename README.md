# codebook-cpp
 Just a set of example C++ programms, a learning path from 0 to hero.

## env setup - vscode (running on windows machine)

1. install [c/c++ ext.](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools) - ms-vscode.cpptools (optionally add c/c++ extension pack and theme)
2. install [msys2](https://www.msys2.org/) - 'a collection of tools and libraries providing you with an easy-to-use environment for building, installing and running native Windows software'
3. install [MinGW-w64](https://www.msys2.org/wiki/History/#mingw-w64) through msys2 from prev step - devtools, in particular containing the compiler for our programms (GCC - GNU Compiler Collection)
4. extend your System's Path variable with new location to `{somewhere}\msys2\ucrt64\bin`
5. check the compiler via `g++ --version`

> NOTE: most AV softoware might block the executables, so configure local system path exceptions at your own will (and risk...)

## compiler configuration - vscode
1. disable extensions via `-pedantic-errors` added to your build task's args (above ${file})
2. set your workspace `Files:Insert Final Newline` setting to true (as new line is pedantically required by c++)
3. increase warning level by adding more args (above ${file})

```json
...
    "args": [
        ...
        "-Wall",
        "-Weffc++",
        "-Wextra",
        "-Wconversion",
        "-Wsign-conversion",
        // or if you preffer to threat warnings as errors:
        "-Werror",
        
        "${file}",
        ...
    ],
...
```

> NOTE: the build task is automatically generated once you Run your first project and VSCode asks you how to build that (select g++ from the options)

## code examples

1. [Hello World](./src/001-hellow-world/main.cpp)
2. [Variables](./src/002-variables/main.cpp)
3. [I/O Streams Lib](./src/003-iostream/main.cpp)

## credits

[www.learncpp.com](https://www.learncpp.com/) for amazing compilation of details around the above topcis.
