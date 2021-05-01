#include <iostream>

int main()
{
    //Print welcome messages to the terminal
    std::cout << "Try solving this little puzzle, little fella\n";
    std::cout << "  or are you too smol brain for it? ...";

    // Declare variables
    int VarA = 4;
    int VarB = 3;
    int VarC = 2;
    int GuessA = 0;
    int GuessB = 0;
    int GuessC = 0;

    // Set up the game logic
    int Sum = VarA + VarB + VarC;
    int Product = VarA * VarB * VarC;

    // Show the numbers logic
    std::cout << std::endl;
    std::cout << "There are 3 numbers in the code" << std::endl;
    std::cout << "The sum of these 3 numbers are: " << Sum << std::endl;
    std::cout << "The product of these 3 numbers are: " << Product << std::endl;

    // Get the player's guess
    std::cin >> GuessA >> GuessB >> GuessC;
    std::cout << "Your guess is: " << GuessA << " " << GuessB << " " << GuessC << std::endl;

    // Set up the sum and product of the player's guesses
    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    //Show player's sum and product
    // std::cout <<

    return 0;
}