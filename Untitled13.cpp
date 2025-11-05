#include <stdio.h>
#include <string.h>  

int main() {
    char str[100]; 

   
    printf("Nhap mot chuoi ky tu: ");
    fgets(str, sizeof(str), stdin);

    
    str[strcspn(str, "\n")] = '\0';

    
    int do_dai = strlen(str);

   
    int ket_qua = strcmp(str, "hello");

    
    printf("\n=== Ket qua xu ly chuoi ===\n");
    printf("Do dai cua chuoi: %d\n", do_dai);

    if (ket_qua == 0)
        printf("Chuoi nhap vao giong voi 'hello'.\n");
    else
        printf("Chuoi nhap vao khac 'hello'.\n");

    return 0;
}


