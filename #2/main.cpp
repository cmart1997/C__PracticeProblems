#include <iostream>
using namespace std;
void helper();

int main()
 {
     helper();
     int answer ;
     int count = 0;

     while (count < 10)
     {
         cout << "Enter any number that isn't 5: ";
         cin >> answer;

         if (answer == 5)
         {
             cout << "Hey! you weren't supposed to enter 5!" << endl;
             return 1;
         }
         else
         {
             cout << "Keep trying!" << endl;
             count++;
         }
     }
     cout << "Wow, you're more patient then I am, you win." << endl;
    return 0;
}

void helper()
{
    int current =0;
    int response;
    cout << "Please enter a number other than " << current << endl;
    cin >> response;
    while (response != current)
    {
        current++;
        cout << "Please enter a number other than " << current << endl;
        cin >> response;
    }
    cout << "You entered the number you were not supposed to enter!!" << endl << endl;
}