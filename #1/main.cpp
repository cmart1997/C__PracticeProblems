#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string coke, sprite, lemonade, water;
    int answer;
    answer = 1;
    cout << "Hello, World!" << endl;
    cout << "Pick from the following sodas " << endl;
    cout << "Coca-Cola \nSprite \nLemonade \nWater " << endl;
    cin >> answer;

    switch(answer)
    {
        case 1: cout << "Coca-Cola" << endl;
        break;

        case 2: cout << "Sprite" << endl;
        break;

        case 3: cout << "Lemonade" << endl;
        break;

        case 4: cout << "Water" << endl;
        break;

        default: cout << "That option does not exist" << endl;
    }

    return 0;
}