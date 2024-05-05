# codebook-cpp
 Just a set of example C++ programms, a learning path from 0 to hero.

## env setup - vscode (running on windows machine)

1. install [c/c++ ext.](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools) - ms-vscode.cpptools (optionally add c/c++ extension pack and theme)
2. install [msys2](https://www.msys2.org/) - 'a collection of tools and libraries providing you with an easy-to-use environment for building, installing and running native Windows software'
3. install [MinGW-w64](https://www.msys2.org/wiki/History/#mingw-w64) through msys2 from prev step - devtools, in particular containing the compiler for our programms (GCC - GNU Compiler Collection)
4. extend your System's Path variable with new location to `{somewhere}\msys2\ucrt64\bin`
5. check the compiler via `g++ --version`

> NOTE: most AV softoware might block the executables, so configure local system path exceptions at your own will (and risk...)
