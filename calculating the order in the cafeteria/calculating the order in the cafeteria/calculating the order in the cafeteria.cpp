#include "ext.h"

int main() 
{
    setlocale(LC_ALL, "ru");
    int numPeople;

    cout << "Сколько человек в заказе? ";
    cin >> numPeople;

    vector<vector<string>> menu;
    menu.push_back({ "Кофе", "150" }); //push_back - добавление в вектор (menu)
    menu.push_back({ "Чай", "100" });
    menu.push_back({ "Пирожное", "200" });
    menu.push_back({ "Печенье", "150" });

    int totalCost = 0;

    for (int i = 0; i < numPeople; i++) 
    {
        cout << "Заказ для человека " << i + 1 << endl;

        bool moreItems = true;
        int cost = 0;

        while (moreItems) 
        {
            cout << "Меню:" << endl;

            for (int j = 0; j < menu.size(); j++) 
            {
                cout << j + 1 << ". " << menu[j][0] << " - " << menu[j][1] << " руб." << endl;
            }

            int choice;
            cout << "Выберите номер элемента меню: ";
            cin >> choice;

            if (choice < 1 || choice > menu.size()) 
            {
                cout << "Некорректный выбор. Попробуйте снова." << endl;
                continue;
            }

            cost += stoi(menu[choice - 1][1]);

            cout << "Добавить еще что-то в заказ? (1 - Да, 0 - Нет): ";
            cin >> moreItems;
        }

        totalCost += cost;
        cout << "Стоимость заказа для человека " << i + 1 << ": " << cost << " руб." << endl;
    }

    cout << "Общая стоимость заказа: " << totalCost << " руб." << endl;
    return 0;
}