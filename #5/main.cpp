#include <iostream>
#include <cmath>

using namespace std;

char matrix[3][3]= {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

void TieGame()
{
    for (int i =0; i <3; i++)
    {
        for (int j =0; j <3; j++)
        {
            cout << matrix[i][j] << " ";
        }
    }
}
int main() {
    cout << "Hello, World!" << std::endl;
    return 0;
}