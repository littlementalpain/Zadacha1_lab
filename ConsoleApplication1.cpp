// задача: введите 3 числа. если это стороны равностороннего треугольника, вычислите площадь и длину высоты. выведите стороны, площадь и длину высоты в порядке возрастания

#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;
int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    cout << "введите длины сторон равностороннего треугольника, чтобы узнать его площадь и длину высоты: " << endl;
    cout << "введите длину первой стороны: " << endl;
    int st1;
    cin >> st1;
    cout << "введите длину второй стороны: " << endl;
    int st2;
    cin >> st2;
    cout << "введите длину третьей стороны: " << endl;
    int st3;
    cin >> st3;

    if (st1 != st2 || st1 != st3 || st2 != st3) {
        cout << "ошибка! треугольник не равноcторонний" << endl;
    }
    if (st1 == st2 && st1 == st3 && st2 == st3) {
        double hhh;
        hhh = ((st1 * 1.0 * sqrt(3)) / 2);
        double pl;
        pl = ((st1 * hhh) / 2);

        if (pl < st1 && pl < hhh) {
            cout << pl << " " << hhh << " " << st1 << endl;
        }
        if (st1 < pl) {
            cout << hhh << " " << st1 << " " << pl << endl;
        }
        if (hhh < pl && st1 > pl) {
            cout << hhh << " " << pl << " " << st1 << endl;
        }

    }

    return 0;
}