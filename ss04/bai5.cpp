#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Yêu c?u ngu?i dùng nh?p vào 3 s? nguyên
    printf("Nh?p s? th? nh?t: ");
    scanf("%d", &num1);

    printf("Nh?p s? th? hai: ");
    scanf("%d", &num2);

    printf("Nh?p s? th? ba: ");
    scanf("%d", &num3);

    // Xác d?nh kho?ng và ki?m tra
    if ((num3 >= num1 && num3 <= num2) || (num3 >= num2 && num3 <= num1)) {
        printf("S? %d n?m trong kho?ng gi?a %d và %d.\n", num3, num1, num2);
    } else {
        printf("S? %d không n?m trong kho?ng gi?a %d và %d.\n", num3, num1, num2);
    }

    return 0;
}

