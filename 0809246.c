#include <stdio.h>
#include <stdbool.h>
#include <math.h>
//Напишите программу, печатающую все простые числа, не превосходящие заданного числа.
void sieveOfEratos(int n) {
    bool is_prime[n + 1];

    for (int i = 0; i <= n; i++) {
        is_prime[i] = true;
    }
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i <= sqrt(n); i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n = 20;
    if (n < 2) {
        printf("None");
    }
    else {
        sieveOfEratos(n);
    }
    return 0;
}
