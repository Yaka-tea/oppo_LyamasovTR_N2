#include <iostream>
#include <string>
#include <sstream>

using namespace std;

struct GoodsArrival {
    string date;
    string name;
    int quantity;
};

int main() {
    setlocale(LC_ALL, "RU");    
    cout << "Введите строку в формате:" << endl;
    cout << "гггг.мм.дд \"Название товара\" количество" << endl;

    string input;
    getline(cin, input);

    stringstream ss(input);

    GoodsArrival arrival;

    ss >> arrival.date;
    ss >> ws;
    getline(ss, arrival.name, '"');
    getline(ss, arrival.name, '"');
    ss >> arrival.quantity;

    cout << endl;
    cout << "Результат разбора строки:" << endl;
    cout << "Дата: " << arrival.date << endl;
    cout << "Товар: " << arrival.name << endl;
    cout << "Количество: " << arrival.quantity << endl;

    return 0;
}
