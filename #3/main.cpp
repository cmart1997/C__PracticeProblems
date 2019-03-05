#include <iostream>
#include <vector>
using namespace std;
//Pancake Glutton

int main()
{
    vector<int> pancakes{};
    int pancake_amount;

    cout << "Enter the amount of pancakes eaten by all these ten people" << endl;
    for(int i =0; i < 11; i++)
    {
        pancakes.reserve(10);
        cout << "Person " << i << ": ";
        cin >> pancake_amount;

        pancakes.push_back(pancake_amount);
    }

    int max, person;
    cout << "The person that ate the most pancakes is..." << endl;
    for(int j =0; j < 10; j++)
    {
        max = pancakes[j];
        person = j;
        for (int h = 0; h <10; h++)
        {
            if (pancakes[j] < pancakes[h])
            {
                max = pancakes[h];
                person = h;
            }
        }
    }

    cout << "Person " << person << endl;
    cout << max << endl;

    return 0;
}