#include <stdio.h>
#include <math.h>  // Thu vi?n toán h?c chu?n

int main() {
    double x;  // S? d?ng ki?u double d? tang d? chính xác

    // Nh?p s? th?c
    printf("Nhap mot so thuc x: ");
    scanf("%lf", &x);

    // Ki?m tra giá tr? âm khi tính can b?c hai
    if (x < 0) {
        printf("Khong the tinh can bac hai cua so am!\n");
    } else {
        double can_bac_hai = sqrt(x);  // Hàm can b?c hai
        printf("Can bac hai cua %.2lf la: %.4lf\n", x, can_bac_hai);
    }

    // Tính luy th?a b?c 3 c?a x
    double luy_thua_3 = pow(x, 3);  // Hàm pow(x, y)
    printf("Luy thua bac 3 cua %.2lf la: %.4lf\n", x, luy_thua_3);

    return 0;
}

