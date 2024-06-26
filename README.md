# codebook-cpp

Just a set of example C++ programms, a fast track learning path from 0 to hero with simple notes and code examples.

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
4. to debug code via attaching to the process and stepping through use `"stopAtEntry": true,` inside your launch settings

```
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
4. [Operators](./src/004-operators/main.cpp)
5. [Expressions](./src/005-expressions/main.cpp)
6. [Functions](./src/006-functions/main.cpp)
7. [Multi File Solution](./src/007-multi-files/main.cpp)
8. [Namespaces](./src/008-namespaces/main.cpp)
9. [Preprocessor](./src/009-preprocessor/main.cpp)
10. [Header Files](./src/010-header-files/main.cpp)
11. [Fundamental Types](./src/011-fundamental-types/main.cpp)
12. [Conditions](./src/012-conditions/main.cpp)
13. [Chars](./src/013-characters/main.cpp)
14. [Casting](./src/014-casting/main.cpp)
15. [Constants](./src/015-constants/main.cpp)
16. [Literals](./src/016-literals/main.cpp)
17. [Numerics](./src/017-numerics/main.cpp)
18. [Strings](./src/018-strings/main.cpp)
19. [Bitwise Operations](./src/019-bitwise-operations/main.cpp)
20. [Scope](./src/020-scope/main.cpp)
21. [Control Flow](./src/021-control-flow/main.cpp)
22. [Generics](./src/022-generics/main.cpp)
23. [Values](./src/023-values/main.cpp)
24. [Enums](./src/024-enums/main.cpp)
25. [Structs](./src/025-structs/main.cpp)
26. [Classes](./src/026-classes/main.cpp)

MORE TO ADD...

## credits

[www.learncpp.com](https://www.learncpp.com/) for amazing compilation of details around the above topics.
