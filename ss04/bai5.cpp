#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Y�u c?u ngu?i d�ng nh?p v�o 3 s? nguy�n
    printf("Nh?p s? th? nh?t: ");
    scanf("%d", &num1);

    printf("Nh?p s? th? hai: ");
    scanf("%d", &num2);

    printf("Nh?p s? th? ba: ");
    scanf("%d", &num3);

    // X�c d?nh kho?ng v� ki?m tra
    if ((num3 >= num1 && num3 <= num2) || (num3 >= num2 && num3 <= num1)) {
        printf("S? %d n?m trong kho?ng gi?a %d v� %d.\n", num3, num1, num2);
    } else {
        printf("S? %d kh�ng n?m trong kho?ng gi?a %d v� %d.\n", num3, num1, num2);
    }

    return 0;
}

