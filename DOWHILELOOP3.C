#include <stdio.h>

int main() {
    int j, k = 2;
    
    printf("Enter any number: ");
    scanf("%d", &j);

    printf("Output:\n");
    do {
        printf("%d ", k);
        k += 2; 
    } while (k <= j);

}
