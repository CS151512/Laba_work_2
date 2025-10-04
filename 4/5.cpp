#include <iostream>
#include <cmath>

#define GEOMETRY_H
#define DIST_SQUARED(cx, cy) (std::pow(x - (cx), 2) + std::pow(y - (cy), 2))
#define DIST_FROM_ORIGIN_SQUARED (x * x + y * y)


bool solve(double x, double y, double R) {
    bool in_q1_semicircle = (x >= 0.0 && y >= 0.0 && DIST_FROM_ORIGIN_SQUARED <= R * R);

    bool in_bottom_circle = (DIST_SQUARED(0, -R) <= R * R);

    return in_q1_semicircle || in_bottom_circle;
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