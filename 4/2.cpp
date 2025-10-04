#include <iostream>
#include <cmath>

#define R_SQUARED (R * R)
#define X_SQUARED_PLUS_Y_SQUARED (x * x + y * y)

bool solve(double x, double y, double R) {
    bool in_q2_sector = (x <= 0.0 && y >= 0.0 && X_SQUARED_PLUS_Y_SQUARED <= R_SQUARED);

    bool in_q4_triangle = (
        x >= 0.0 && y <= 0.0 &&
        x <= R / 2.0 &&
        y >= -R &&
        (2 * x + y <= 0.0)
    );

    return in_q2_sector || in_q4_triangle;
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