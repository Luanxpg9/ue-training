#include <iostream>

int main()
{
    //Print welcome messages to the terminal
    std::cout << "Try solving this little puzzle, little fella\n";
    std::cout << "  or are you too smol brain for it? ...";

    // Declare variables
    int a = 4;
    int b = 3;
    int c = 2;

    // Set up the game logic
    int sum = a + b + c;
    int product = a * b * c;

    // Show the numbers logic
    std::cout << std::endl;
    std::cout << sum << '\n'
              << product << std::endl;

    return 0;
}