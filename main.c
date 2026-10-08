#include <stdio.h>


int factorial(int n) {

    int res = 1;

    for (int i = 1; i <= n; i++) {
        res = res * i;
    }

    return res;
}

int combination(int n, int r) {
    return factorial(n) / (factorial(n - r) * factorial(r));
}

int get_integer(void) {

    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    return num;
}

int main(void) {
    int n, r, result;

    printf("Enter n!\n");
    n = get_integer();

    printf("Enter r!\n");
    r = get_integer();

    result = combination(n, r);
    printf("result: %d\n", result);

    return 0;
}

