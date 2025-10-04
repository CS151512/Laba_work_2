#include <iostream>
#include <cmath>

#define DIST_SQUARED(cx, cy) (std::pow(x - (cx), 2) + std::pow(y - (cy), 2))
#define DIST_FROM_ORIGIN_SQUARED (x * x + y * y)

bool solve(double x, double y, double R1, double R2) {
    double dist_sq = DIST_FROM_ORIGIN_SQUARED;
    double R1_sq = R1 * R1;
    double R2_sq = R2 * R2;

    bool in_q2_sector = (x <= 0.0 && y >= 0.0 && dist_sq <= R1_sq);

    bool in_q4_ring = (x >= 0.0 && y <= 0.0 && dist_sq >= R1_sq && dist_sq <= R2_sq);

    return in_q2_sector || in_q4_ring;
}

int main() {
    double x, y, R1,R2;

    std::cout << "Введите радиус/сторону R: ";
    std::cin>>R1>>R2;

    std::cout << "Введите координату X точки: ";
    std::cin >> x;
    std::cout << "Введите координатaу Y точки: ";
    std::cin >> y;

    if (solve(x, y, R1,R2)) {
        std::cout << "Точка (" << x << ", " << y << ") ПОПАДАЕТ в заштрихованную область.\n";
    } else {
        std::cout << "Точка (" << x << ", " << y << ") НЕ ПОПАДАЕТ в заштрихованную область.\n";
    }

    return 0;
}