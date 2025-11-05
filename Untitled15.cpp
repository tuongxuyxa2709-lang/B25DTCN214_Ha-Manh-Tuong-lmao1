#include <stdio.h>

int main() {
    int a, b;

    
    printf("Nhap hai so nguyen a va b: ");
    scanf("%d %d", &a, &b);

   
    int ca_hai_lon_hon_0 = (a > 0) && (b > 0);

    
    int it_nhat_mot_chan = (a % 2 == 0) || (b % 2 == 0);

   
    printf("\n=== Ket qua kiem tra ===\n");

    if (ca_hai_lon_hon_0)
        printf("Ca hai so a va b deu lon hon 0.\n");
    else
        printf("Khong phai ca hai so deu lon hon 0.\n");

    if (it_nhat_mot_chan)
        printf("It nhat mot trong hai so la so chan.\n");
    else
        printf("Ca hai so deu la so le.\n");

    return 0;
}


