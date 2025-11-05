#include <stdio.h>

int main() {
    int counter = 0; 

    printf("Gia tri ban dau cua counter: %d\n", counter);

   
    counter++;
    printf("Sau khi tang 1 lan (++): %d\n", counter);

    
    ++counter;
    printf("Sau khi tang tiep (++counter): %d\n", counter);

  
    counter--;
    printf("Sau khi giam 1 lan (--): %d\n", counter);

    
    --counter;
    printf("Sau khi giam tiep (--counter): %d\n", counter);

    return 0;
}


