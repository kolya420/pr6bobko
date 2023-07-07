#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <windows.h>
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double x1, y1, r1, x2, y2, r2;
    printf("Enter the coordinates and radii of the two circles:\n");
    printf("x1 = ");
    scanf("%lf", &x1);
    printf("y1 = ");
    scanf("%lf", &y1);
    printf("r1 = ");
    scanf("%lf", &r1);
    printf("x2 = ");
    scanf("%lf", &x2);
    printf("y2 = ");
    scanf("%lf", &y2);
    printf("r2 = ");
    scanf("%lf", &r2);

    // Determining the distance between the centers of the circles
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Determining the number of intersection points
    int intersectionPoints;
    if (distance == 0 && r1 == r2) {
        intersectionPoints = -1;
    }
    else if (distance > r1 + r2 || distance < fabs(r1 - r2)) {
        intersectionPoints = 0;
    }
    else if (distance == r1 + r2 || distance == fabs(r1 - r2)) {
        intersectionPoints = 1;
    }
    else {
        intersectionPoints = 2;
    }

    printf("Number of intersection points: %d\n", intersectionPoints);

    return 0;
}