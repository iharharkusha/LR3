#include <iostream>
#include <cmath>

const long long INF = 2000000000;

long long readIntegerInLine() {
    long long inputValue;
    if (!(std::cin >> inputValue) || (std::cin.peek() != '\n')) {
        std::cin.clear();
        while (std::cin.get() != '\n') {
        }
        return -INF;
    }
    return inputValue;
}

int main() {
    std::cout << "Задание 8. Программа, для нахождения суммы без использования вещественной арифметики\n";
    std::cout << "Выполнил: Гаркуша Игорь, группа 453502\n";
    while (true) {
        std::cout << "Введите 1 для запуска программы, 0 для завершения\n";
        int type = readIntegerInLine();   
        if (type != 1 && type != 0) {
            std::cout << "Некорректный ввод\n";
            continue;
        }
        if (type == 0) {
            break;
        }
        std::cout << "Введите кол-во членов для подсчета:\n";
        long long n; 
        while (true) {
            n = readIntegerInLine();
            if (n < 0) {
                std::cout << "Некорректный ввод\n";
                continue;
            }
            break;
        }
        std::cout << "Введите a для подсчета:\n";
        long long a; 
        while (true) {
            a = readIntegerInLine();
            if (n == -INF) {
                std::cout << "Некорректный ввод\n";
                continue;
            }
            break;
        }
        if (fabs(a * powl(2, n)) > 9223372036854775807)   {
            std::cout << "Переполнение" << '\n';
            continue;
        }
        long long res = 0;
        res = (a * (1 - powl(-2, n))) / 3;
        std::cout << "Результат работы задачи: " << res << '\n' ;
    }
    return 0;
}