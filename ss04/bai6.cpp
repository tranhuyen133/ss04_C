#include <stdio.h>

int main() {
    float a, b, c;

    // Nh?p 3 c?nh c?a tam gi�c
    printf("Nh?p c?nh th? nh?t: ");
    scanf("%f", &a);

    printf("Nh?p c?nh th? hai: ");
    scanf("%f", &b);

    printf("Nh?p c?nh th? ba: ");
    scanf("%f", &c);

    // Ki?m tra di?u ki?n h?p l? c?a tam gi�c
    if (a > 0 && b > 0 && c > 0 && (a + b > c) && (a + c > b) && (b + c > a)) {
        printf("L� 3 c?nh tam gi�c.\n");
    } else {
        printf("Kh�ng ph?i 3 c?nh tam gi�c.\n");
    }

    return 0;
}

