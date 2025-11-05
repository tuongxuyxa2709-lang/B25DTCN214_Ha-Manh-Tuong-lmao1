#include <stdio.h>

int main() {
    int a, b;

    // Nh?p hai s? nguyên
    printf("Nhap hai so nguyen a va b: ");
    scanf("%d %d", &a, &b);

    // Ki?m tra c? hai s? có l?n hon 0 hay không (dùng toán t? &&)
    int ca_hai_lon_hon_0 = (a > 0) && (b > 0);

    // Ki?m tra ít nh?t m?t trong hai s? là s? ch?n (dùng toán t? ||)
    int it_nhat_mot_chan = (a % 2 == 0) || (b % 2 == 0);

    // In k?t qu?
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

