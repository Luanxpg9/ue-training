#include <iostream>

void PrintIntroduction(int Difficulty)
{
    //Print welcome messages to the terminal
    std::cout << "Try solving this little puzzle, little fella\n"
              << "  or are you too smol brain for it? ...\n"
              << "->Difficulty level: " << Difficulty << std::endl;
}

void WaitUser()
{
    //Tell the user to press something on the keyboard
    std::cout << "Press any key to continue...\n";
    getchar(); // Press any key to continue...
}

void PrintGameBeaten()
{
    std::cout << "Congratulations, you're now one of the few who finished this game!\n"
              << "You can now tell all your friends that you're a genius!! :O"
              << std::endl;
}

bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);

    // Declare variables
    int VarA = rand() % Difficulty;
    int VarB = rand() % Difficulty;
    int VarC = rand() % Difficulty;
    int GuessA = 0;
    int GuessB = 0;
    int GuessC = 0;

    // Set up the game logic
    int Sum = VarA + VarB + VarC;
    int Product = VarA * VarB * VarC;

    // Show the numbers logic
    std::cout << std::endl;
    std::cout << "+There are 3 numbers in the code" << std::endl;
    std::cout << "+The sum of these 3 numbers are: " << Sum << std::endl;
    std::cout << "+The product of these 3 numbers are: " << Product << std::endl;

    // Get the player's guess
    std::cin >> GuessA >> GuessB >> GuessC;

    //Show Player his guesses
    std::cout << "Your guess is: " << GuessA << " " << GuessB << " " << GuessC << std::endl;

    // Set up the sum and product of the player's guesses
    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    //Check player's sum and product
    if (GuessSum == Sum && GuessProduct == Product)
    {
        std::cout << "Congrats, You're a genius!!" << std::endl;
        WaitUser();
        return true;
    }
    else
    {
        std::cout << "Oh no! You're wrong, sorry. Try again later!! ^^" << std::endl;
        WaitUser();
        return false;
    }
}

int main()
{
    //Max level difficulty
    const unsigned int MaxDifficulty = 5;

    //Current level difficulty
    unsigned int LevelDifficulty = 1;
    while (LevelDifficulty <= MaxDifficulty)
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear();                                                   // Clear errors
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discards the buffer
        system("CLS");                                                      // Clean terminal logs

        if (bLevelComplete)
        {
            LevelDifficulty++;
        }
    }

    PrintGameBeaten();
    WaitUser();
    system("CLS");

    return 0;
}