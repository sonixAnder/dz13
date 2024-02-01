#include <iostream>
using namespace std;
void drawField();

int main() 
{
    drawField();
    return 0;
}

void drawField() 
{
    cout << "  A B C D E F G H I J" << endl;

    for (int i = 0; i < 10; i++) 
    {
        cout << i << " ";

        for (int j = 0; j < 10; j++) 
        {
            cout << ". ";
        }
        cout << endl;
    }
}

