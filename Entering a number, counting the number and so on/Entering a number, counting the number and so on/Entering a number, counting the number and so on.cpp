#include <iostream>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "ru");
    int number, numDigits = 0, sum = 0, average = 0, zeroCount = 0;
    char choice;

    do 
    {
        cout << "Введите число: ";
        cin >> number;

        int temp = number;
        while (temp != 0) 
        {
            numDigits++;
            temp /= 10;
        }

        temp = number;
        while (temp != 0) 
        {
            sum += temp % 10;
            temp /= 10;
        }

        if (numDigits > 0) 
        {
            average = sum / numDigits;
        }
        else {
            average = 0;
        }

        temp = number;
        while (temp != 0) 
        {
            if (temp % 10 == 0) 
            {
                zeroCount++;
            }
            temp /= 10;
        }
        cout << "***************************" << endl;
        cout << "Кол-во цифр: " << numDigits << endl;
        cout << "Сумма цифр: " << sum << endl;
        cout << "Среднее арифметическое: " << average << endl;
        cout << "Кол-во нулей: " << zeroCount << endl;
        cout << "***************************" << endl;
        cout << "Продолжим? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}