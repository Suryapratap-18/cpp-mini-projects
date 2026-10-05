#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int user, bot;

    srand(time(0));

    cout << "Rock Paper Scissors Game\n";
    cout << "1. Rock\n";
    cout << "2. Paper\n";
    cout << "3. Scissors\n";

    cout << "Enter your choice: ";
    cin >> user;

    bot = rand() % 3 + 1;

    cout << "Bot choice: ";

    if (bot == 1)
        cout << "Rock\n";
    else if (bot == 2)
        cout << "Paper\n";
    else
        cout << "Scissors\n";

    if (user == bot)
    {
        cout << "It's a draw!";
    }
    else if ((user == 1 && bot == 3) ||
             (user == 2 && bot == 1) ||
             (user == 3 && bot == 2))
    {
        cout << "You win!";
    }
    else
    {
        cout << "Bot wins!";
    }

    return 0;
}
