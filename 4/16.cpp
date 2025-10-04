#include <iostream>
#include <cmath>

#define DIST_SQUARED(cx, cy) (std::pow(x - (cx), 2) + std::pow(y - (cy), 2))
#define DIST_FROM_ORIGIN_SQUARED (x * x + y * y)

bool solve(double x, double y, double R) {
    bool in_q2_sector = (x <= 0.0 && y >= 0.0 && DIST_FROM_ORIGIN_SQUARED <= R * R);

    bool in_q4_parabola = (
        x >= 0.0 && y <= 0.0 &&
        DIST_FROM_ORIGIN_SQUARED <= R * R &&
        y <= std::pow(x - 1.0, 2)
    );

    return in_q2_sector || in_q4_parabola;
}

int main() {
    double x, y, R;

    std::cout << "Введите радиус/сторону R: ";
    std::cin>>R;

    std::cout << "Введите координату X точки: ";
    std::cin >> x;
    std::cout << "Введите координатaу Y точки: ";
    std::cin >> y;

    if (solve(x, y, R)) {
        std::cout << "Точка (" << x << ", " << y << ") ПОПАДАЕТ в заштрихованную область.\n";
    } else {
        std::cout << "Точка (" << x << ", " << y << ") НЕ ПОПАДАЕТ в заштрихованную область.\n";
    }

    return 0;
}