#include <stdio.h>

int main() {
    
    int num_stars = 9;

    
    for (int i = num_stars; i >= 1; i -= 2) {
        
        for (int j = 0; j < (num_stars - i) / 2; j++) {
            printf(" ");
        }

        
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        
        printf("\n");
    }

    return 0;
}
