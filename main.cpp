#include <fmt/core.h>
#include <fstream>
#include <gsl/gsl>
#include <vector>
#include <string_view>
#include <string>
#include <cstdint>

auto fun(gsl::span<int> sp) {
    sp[0] = 5;
    for (int e : sp)
        fmt::print("{} ", e);
    fmt::print("\n");
}

void start(std::string_view appname, gsl::span<std::string> args)
{
    std::vector<int> v(4);
    std::vector v2{{1,2,3}}, v3{4}, v4{v};
    std::array a{4,5,6};
    for (int idx=0; idx<v2.size(); ++idx)
        fmt::print("{} ", v2[idx]);
    fmt::print("\n");
    fun(v2);
}