#include <iostream>
#include <cmath>

bool solve(double x, double y, double R) {
    bool in_square = (x <= 0.0 && x >= -R && y <= 0.0 && y >= -R);

    bool in_circle = (std::pow(x - R, 2) + std::pow(y - R, 2) <= std::pow(R, 2));

    return in_square || in_circle;
}

int main() {
    double x, y, R;

    std::cout << "Введите радиус/сторону R: ";
    std::cin>>R;

    std::cout << "Введите координату X точки: ";
    std::cin >> x;
    std::cout << "Введите координату Y точки: ";
    std::cin >> y;

    if (solve(x, y, R)) {
        std::cout << "Точка (" << x << ", " << y << ") ПОПАДАЕТ в заштрихованную область.\n";
    } else {
        std::cout << "Точка (" << x << ", " << y << ") НЕ ПОПАДАЕТ в заштрихованную область.\n";
    }

    return 0;
}