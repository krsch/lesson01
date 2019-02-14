#include <fmt/core.h>
#include <fstream>
#include <gsl/gsl>
#include <vector>

// int main(int, char**)
void start(char const* appname, gsl::span<char const* const> args)
{
    std::vector vec{1, 2, 3};
    std::vector vec2{vec, vec};
    fmt::print("Hello, world!\n");
    std::string s{fmt::format("{} {}", 1, 2)};
    fmt::print("My name is {}\n", appname);
    if (!args.empty()) {
        std::ifstream file{args[0]};
        if (int a; file >> a)
            fmt::print("read {}\n", a);
        for (std::string s; file >> s;)
            fmt::print("{}\n", s);
    }
}