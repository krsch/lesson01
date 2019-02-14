#include <iostream>
#include <vector>

int main(int, char**) {
    std::vector vec {1,2,3};
    std::vector vec2{vec,vec};
    std::cout << "Hello, world!\n";
}
