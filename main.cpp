#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include "Services.h"
using namespace std;


int main() {
    vector<string> numbers = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    double var1 = 0, var2 = 0;
    double buffer;
    int i = 0;
    char unit = ' ';
    char str[256];

    Services services;

    while (++i != 0) {
        cout << ' ';
        cout << "Введите знак операции: \n";
        cin >> unit;
        if(unit == '|') break;

        cin.ignore(INT_MAX, '\n');

        cout << "Введите первый операнд: \n";
        var1 = services.fillOperand(str, numbers);


        cout << "Введите второй операнд: \n";
        var2 = services.fillOperand(str, numbers);


        switch (unit) {
            case '+': {
                cout << "Сумма " << var1 << " и " << var2 << " равна " << var1 + var2 << '\n';
                break;
            }
            case '-': {
                cout << "Разность " << var1 << " и " << var2 << " равна " << var1 - var2 << '\n';
                break;
            }
            case '*': {
                cout << "Произведение " << var1 << " и " << var2 << " равно " << var1 * var2 << '\n';
                break;
            }
            case '/': {
                cout << "Частное " << var1 << " и " << var2 << " равно " << var1 / var2 << '\n';
                break;
            }
        }


    }

}


