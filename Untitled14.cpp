#include <stdio.h>
#include <math.h>  

int main() {
    double x;  

   
    printf("Nhap mot so thuc x: ");
    scanf("%lf", &x);

   
    if (x < 0) {
        printf("Khong the tinh can bac hai cua so am!\n");
    } else {
        double can_bac_hai = sqrt(x); 
        printf("Can bac hai cua %.2lf la: %.4lf\n", x, can_bac_hai);
    }

    
    double luy_thua_3 = pow(x, 3);  // Hàm pow(x, y)
    printf("Luy thua bac 3 cua %.2lf la: %.4lf\n", x, luy_thua_3);

    return 0;
}


