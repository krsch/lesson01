#include <gsl/gsl>

void start(char const*, gsl::span<char const* const>);

int main(int argc, char **argv)
{
    start(*argv, gsl::span<char const* const>{
                     static_cast<char const* const*>(argv) + 1, argc});
    return 0;
}