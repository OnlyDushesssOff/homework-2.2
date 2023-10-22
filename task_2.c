#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {

    setlocale(LC_ALL, "Russian");

    int x1, y1, r1;
    int x2, y2, r2;
    scanf_s("%d %d %d", &x1, &y1, &r1);
    scanf_s("%d %d %d", &x2, &y2, &r2);
    float rast = sqrt(pow(fabs(x1 - x2), 2) + pow(fabs(y1 - y2), 2));
    if (rast == r1 + r2 || rast == fabs(r1 - r2)) {
        printf("Окружности Касаются");
    }
    else if (rast > r1 + r2) {
        printf("Окружности отдалены");
    }
    else if (rast < r1 + r2 && rast > fabs(r1 - r2)) {
        printf("Окружности пересекаются");
    }
    else if (rast < fabs(r1 - r2)) {
        printf("Окружности вложены");
    }

    return 0;
}