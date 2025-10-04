#include <iostream>
#include <cmath>

#define R_SQUARED (R * R)
#define X_SQUARED_PLUS_Y_SQUARED (x * x + y * y)

bool solve(double x, double y, double R) {
    bool in_circle = (X_SQUARED_PLUS_Y_SQUARED <= R_SQUARED);

    bool in_q1 = (x >= 0.0 && y >= 0.0 && in_circle);

    bool in_q3 = (x <= 0.0 && y <= 0.0 && in_circle);

    return in_q1 || in_q3;
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