#include <stdio.h>

int main() {
    int counter = 0; // Khai báo bi?n counter và gán giá tr? ban d?u là 0

    printf("Gia tri ban dau cua counter: %d\n", counter);

    // Tang giá tr? counter lên 1
    counter++;
    printf("Sau khi tang 1 lan (++): %d\n", counter);

    // Tang thêm 1 l?n n?a
    ++counter;
    printf("Sau khi tang tiep (++counter): %d\n", counter);

    // Gi?m giá tr? counter di 1
    counter--;
    printf("Sau khi giam 1 lan (--): %d\n", counter);

    // Gi?m thêm 1 l?n n?a
    --counter;
    printf("Sau khi giam tiep (--counter): %d\n", counter);

    return 0;
}

