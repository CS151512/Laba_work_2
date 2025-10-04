#include <iomanip>

#include "iostream"

int main() {
    double x,y;
    std::cout<<"Введите аргумент Х и Y:"<<"\n";
    std::cin>>x>>y;

    if (x < -2.0) {
        y = 0.0;

    } else if (x <= 0.0) {
        y = x + 2.0;

    } else if (x <= 2.0) {
        y = -2.0 * x + 2.0;

    } else {
        y = -2.0;
    }

    std::cout << std::fixed << std::setprecision(4);
    std::cout << "Для x = " << x << ", значение функции f(x) = " << y << std::endl;

    return 0;
}