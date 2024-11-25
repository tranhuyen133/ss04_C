#include <stdio.h>

int main() {
    int month;

    // Yêu c?u ngu?i dùng nh?p s? tháng
    printf("Nh?p s? tháng (1-12): ");
    scanf("%d", &month);

    // Ki?m tra và in ra s? ngày trong tháng
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        printf("Tháng %d có 31 ngày.\n", month);
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        printf("Tháng %d có 30 ngày.\n", month);
    } else if (month == 2) {
        printf("Tháng 2 có 28 ho?c 29 ngày (tùy theo nam nhu?n).\n");
    } else {
        printf("S? tháng không h?p l?.\n");
    }

    return 0;
}

