#include <stdio.h>

int main() {
    int number;

    printf("Nh?p m?t s? nguy�n: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("S? %d l� s? ch?n.\n", number);
    } else {
        printf("S? %d l� s? l?.\n", number);
    }

    return 0;
}

