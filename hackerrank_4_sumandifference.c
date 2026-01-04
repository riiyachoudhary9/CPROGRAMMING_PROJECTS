#include <stdio.h>

int main() {
    int a, b;
    float x, y;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%f", &x);
    scanf("%f", &y);

    printf("%d %d\n", a + b, a - b);
    printf("%.1f %.1f\n", x + y, x - y);

    return 0;
}
