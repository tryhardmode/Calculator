#include <iostream>


using namespace std;
float num1{}, num2{};


void numberdata()
{
    cout << "Введите числа: " << endl;
    cin >> num1 >> num2;
}

void symbolsdata()
{
    char action;
    cout << "Выберите действие, которое необходимо выполнить: +, -, *, /" << endl;
    cin >> action;

    switch (action)
    {
    case '+':
        cout << "result = " << num1 + num2 << endl;
        break;
    case '-':
        cout << "result = " << num1 - num2 << endl;
        break;
    case '*':
        cout << "result = " << num1 * num2 << endl;
        break;
    case '/':
        cout << "result = " << num1 / num2 << endl;
        break;
    default:
        cout << "Invalid choice" << endl;
        symbolsdata();
        break;
    }
}


int main()
{
    setlocale(LC_ALL, "Russian");
    numberdata();
    symbolsdata();

    cout << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << " КАЛЬКУЛЯТОР" << "\t" << endl;

    return 0;
}





