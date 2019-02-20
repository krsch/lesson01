[![Build Status on Linux](https://travis-ci.org/krsch/lesson01.svg?branch=master)](https://travis-ci.org/krsch/lesson01)
[![Build Status on Windows](https://ci.appveyor.com/api/projects/status/github/krsch/lesson01?svg=true)](https://ci.appveyor.com/project/krsch/lesson01)
Установка
---------

1. Для начала нужно клонирвать репозиторий
   ```sh
   git clone --recurse-submodules https://github.com/krsch/lesson01.git
   ```
2. После этого нужно запустить сборку
   ```sh
   cd lesson01/build
   cmake ..
   cmake --build .
   ```
   Под windows во второй строке можно ещё указать `-A x64`
3. После этого можно запускать
   ```sh
   ./lesson01
   ```

Зависимости
-----------

1. CMake https://cmake.org/download/
2. git https://git-scm.com/downloads
3. Текстовый редактор. Я рекоммендую Visual Studio Code https://code.visualstudio.com/Download и его расширения:
   1. CMake
   2. CMake Tools
   3. CodeLLDB
   4. vscode-clangd или C/C++. Первый лучше, но требует тонкой настройки
4. Visual Studio 2017 и 2019 тоже должны работать
5. В любом случае стоит установить [LLVM](http://releases.llvm.org/)

Важные типы
-----------

Во всех случаях в документации есть много примеров.

1. [gsl::span](https://en.cppreference.com/w/cpp/container/span)
2. [std::array](https://en.cppreference.com/w/cpp/container/array)
3. [std::vector](https://en.cppreference.com/w/cpp/container/vector)
4. [std::string](https://en.cppreference.com/w/cpp/string/basic_string)
5. [std::string_view](https://en.cppreference.com/w/cpp/string/basic_string_view)
6. [fmt](http://fmtlib.net/latest/index.html)