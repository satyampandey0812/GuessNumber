#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int num, guess, tries = 0;
    srand(time(0));
    num = rand() % 100 + 1;
    cout << "guess My Number Game\n\n";

    do
    {
        cout << "Enter a guess between 1 to 100"<<endl;
        cin >> guess;
        tries++;

        if (guess > num)
            cout << "To  high !\n\n";
        
        else if (guess < num)
            cout << "Too low !\n\n";
        else
            cout << "\ncorrect! You got it in " << tries << " guesses!\n";
    
    }
        while (guess != num);

    return 0;
}