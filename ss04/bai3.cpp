#include <stdio.h>

int main() {
    int number;

    // Y�u c?u ngu?i d�ng nh?p m?t s? nguy�n
    printf("Nh?p m?t s? nguy�n: ");
    scanf("%d", &number);

    // Ki?m tra di?u ki?n chia h?t
    if (number % 3 == 0 && number % 5 == 0) {
        printf("S? %d chia h?t cho c? 3 v� 5.\n", number);
    } else if (number % 3 == 0) {
        printf("S? %d chia h?t cho 3.\n", number);
    } else if (number % 5 == 0) {
        printf("S? %d chia h?t cho 5.\n", number);
    } else {
        printf("S? %d kh�ng chia h?t cho 3 ho?c 5.\n", number);
    }

    return 0;
}

