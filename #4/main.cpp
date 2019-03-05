#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int random, number, guess_count;
    guess_count = 1;
    srand (time(NULL)); //initialize random seed
    random = rand() % 100 + 1; //create random number
    cout << "Can you guess a number between 1 and 100" << endl;
    cin >> number;

    while (number != random)
    {
        if (number > random)
        {
            cout << "Number is too big, guess a smaller one.... " ;
            cin >> number;
        }

        else
        {
            cout << "Number is too small, guess a bigger one.... " ;
            cin >> number;
        }

        guess_count++;
    }

    if (number == random)
    {
        cout << endl << endl;
        cout << "You have the right number!!" << endl;
        cout << "It took you " << guess_count << " guesses!!" << endl;
    }


    return 0;
}