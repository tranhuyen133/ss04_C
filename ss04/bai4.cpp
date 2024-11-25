#include <stdio.h>

int main() {
    int month;

    // Y�u c?u ngu?i d�ng nh?p s? th�ng
    printf("Nh?p s? th�ng (1-12): ");
    scanf("%d", &month);

    // Ki?m tra v� in ra s? ng�y trong th�ng
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        printf("Th�ng %d c� 31 ng�y.\n", month);
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        printf("Th�ng %d c� 30 ng�y.\n", month);
    } else if (month == 2) {
        printf("Th�ng 2 c� 28 ho?c 29 ng�y (t�y theo nam nhu?n).\n");
    } else {
        printf("S? th�ng kh�ng h?p l?.\n");
    }

    return 0;
}

