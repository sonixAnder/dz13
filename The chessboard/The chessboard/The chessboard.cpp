#include "ext.h"

int main()
{
    setlocale(LC_ALL, "ru");
    int size;

    cout << "Введите размер клетки: ";
    cin >> size;

    string whiteCell = "_";
    string blackCell = "*";

    for (int i = 0; i < size * 8; i++) 
    {
        for (int j = 0; j < size * 8; j++) 
        {
            if ((i / size) % 2 == 0) 
            {
                if (j % 2 == 0) 
                {
                    cout << whiteCell;
                }
                else 
                {
                    cout << blackCell;
                }
            }
            else 
            {
                if (j % 2 == 0) 
                {
                    cout << blackCell;
                }
                else 
                {
                    cout << whiteCell;
                }
            }
        }
        cout << endl;
    }

    return 0;
}