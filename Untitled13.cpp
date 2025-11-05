#include <stdio.h>
#include <string.h>  // Thu vi?n x? lý chu?i

int main() {
    char str[100];  // Khai báo chu?i ký t?

    // Nh?p chu?i ký t? t? bàn phím
    printf("Nhap mot chuoi ky tu: ");
    fgets(str, sizeof(str), stdin); // Dùng fgets d? d?c c? kho?ng tr?ng

    // Xóa ký t? xu?ng dòng '\n' n?u có trong chu?i
    str[strcspn(str, "\n")] = '\0';

    // Tính d? dài chu?i
    int do_dai = strlen(str);

    // So sánh v?i chu?i "hello"
    int ket_qua = strcmp(str, "hello");

    // In k?t qu?
    printf("\n=== Ket qua xu ly chuoi ===\n");
    printf("Do dai cua chuoi: %d\n", do_dai);

    if (ket_qua == 0)
        printf("Chuoi nhap vao giong voi 'hello'.\n");
    else
        printf("Chuoi nhap vao khac 'hello'.\n");

    return 0;
}

