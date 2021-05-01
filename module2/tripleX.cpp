#include <iostream>

int main()
{
    std::cout << "Try solving this little puzzle, little fella\n";
    std::cout << "  or are you too smol brain for it? ...";

    int a = 4;
    int b = 3;
    int c = 2;

    int sum = a + b + c;
    int product = a * b * c;

    std::cout << std::endl;
    std::cout << sum << '\n'
              << product;

    return 0;
}