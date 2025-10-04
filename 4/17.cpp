#include <iostream>
#include <cmath>

#define DIST_SQUARED(cx, cy) (std::pow(x - (cx), 2) + std::pow(y - (cy), 2))
#define DIST_FROM_ORIGIN_SQUARED (x * x + y * y)

bool solve(double x, double y, double R, double a, double b) {
    bool in_bottom_semicircle = (DIST_FROM_ORIGIN_SQUARED <= R * R && y <= 0.0);

    bool in_rectangle = (x >= 0.0 && x <= a && y >= 0.0 && y <= b);

    return in_bottom_semicircle || in_rectangle;
}

int main() {
    double x, y, R;
    double a,b;

    std::cout << "Введите радиус/сторону R: ";
    std::cin>>R;

    std::cout << "Введите координату X точки: ";
    std::cin >> x;
    std::cout << "Введите координатaу Y точки: ";
    std::cin >> y;

    std::cin>>a>>b;

    if (solve(x, y, R,a,b)) {
        std::cout << "Точка (" << x << ", " << y << ") ПОПАДАЕТ в заштрихованную область.\n";
    } else {
        std::cout << "Точка (" << x << ", " << y << ") НЕ ПОПАДАЕТ в заштрихованную область.\n";
    }

    return 0;
}