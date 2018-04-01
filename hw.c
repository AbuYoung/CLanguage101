#include <stdio.h>

int getsum(int x, int y);

int main() {
    int a = 3, b = 4, s;

    s = getsum(a, b);
    printf("%d", s);

    return 0;
}

int getsum(int c, int d) {
    int sum = c + d;
    return sum;
}