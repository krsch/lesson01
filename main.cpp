#include <vector>
#include <fmt/core.h>

int main(int, char**) {
    std::vector vec {1,2,3};
    std::vector vec2{vec,vec};
    fmt::print("Hello, world!\n");
    std::string s{fmt::format("{} {}", 1, 2)};
    return 0;
}
