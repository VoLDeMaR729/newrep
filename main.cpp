#include <iostream>
#include <cmath>
#include "rectangle.h"
#include "trapecia.h"
#include "Circle.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    // Ввод данных
    int vibor;
    cout << "Здравствуйте, выберите номер фигуры, данные которой вы хотите узнать: \n1) Прямоугольник \n2) Трапеция\n3) Окружность"<< endl;
    cin >> vibor;
    
    switch(vibor)
    {
    case 1: {
        double leight;
        cout << "Введите длину и ширину прямоугольнка\n Длина: ";
        cin >> leight;
        double height;
        cout << "Ширина: ";
        cin >> height;

        double perim = RectPerim(leight, height);
        double squar = RectSquar(leight, height);
        double diag = RectLgOfDiag(leight, height);

        cout << "Периметр: " << perim << endl << "Площадь: " << squar << endl << "Диагональ: " << diag;
    }
        break;
            
    case 2: {
        double a, b, c, d, height;

        cout << "Введите длину основания a: ";
        cin >> a;
        cout << "Введите длину основания b: ";
        cin >> b;
        cout << "Введите длину боковой стороны c: ";
        cin >> c;
        cout << "Введите длину боковой стороны d: ";
        cin >> d;
        cout << "Введите высоту трапеции: ";
        cin >> height;
        // Вычисления
        double perimeter = TrapPerim(a, b, c, d);
        double area = TrapArea(a, b, height);
        double middleLine = TrapMiddleLine(a, b);

        // Вывод результатов
        cout << "Периметр трапеции: " << perimeter << endl;
        cout << "Площадь трапеции: " << area << endl;
        cout << "Длина средней линии трапеции: " << middleLine << endl;
        break;
    }
    case 3: {
        double a, b;
        cout << "Введите длину радиуса окружности: ";
        cin >> a;
        cout << "Введите внутренний угол искомого сектора (градусная мера угла): ";
        cin >> b;

        // Вычисления
        double length = CircleLength(a);
        double area = CircleArea(a);
        double sector = CircleSector(a, b);

        // Вывод результатов
        cout << "Длина окружности: " << length << endl;
        cout << "Площадь круга: " << area << endl;
        cout << "Площадь кругового сектора : " << sector << endl;
    }
        break;
    
       
        default:
            cout << "Неизвестная команда";
    }
    
    

    
    return 0;
}
