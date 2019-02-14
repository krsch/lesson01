#include <fmt/core.h>
#include <fstream>
#include <gsl/gsl>
#include <vector>
#include <string_view>
#include <string>

void start(std::string_view appname, gsl::span<std::string> args)
{
    std::vector vec{1, 2, 3};
    std::vector vec2{vec, vec};
    fmt::print("Hello, world!\n");
    std::string s{fmt::format("\"{}\"", appname)};
    fmt::print("My name is {}\n", s);
    if (!args.empty()) {
        std::ifstream file{args[0]};
        if (int a; file >> a)
            fmt::print("read {}\n", a);
        for (std::string s; file >> s;)
            fmt::print("{}\n", s);
    }
}