#include <iostream>
#include <cmath>

#define DIST_SQUARED(cx, cy) (std::pow(x - (cx), 2) + std::pow(y - (cy), 2))
#define DIST_FROM_ORIGIN_SQUARED (x * x + y * y)

bool solve(double x, double y, double R) {
    double dist_sq = DIST_FROM_ORIGIN_SQUARED;
    double R_sq = R * R;

    double R_outer_sq = 2.0 * R_sq;

    bool in_q4 = (x >= 0.0 && y <= 0.0);

    bool in_ring = (dist_sq >= R_sq && dist_sq <= R_outer_sq);

    bool in_sector_limit = (y <= -x);

    return in_q4 && in_ring && in_sector_limit;
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