#include <stdio.h>

int main() {
    int hour;

    
    printf("Enter the current hour (0-23): ");
    scanf("%d", &hour);

    
    if (hour >= 0 && hour < 12) {
        printf("Good Morning!\n");
    }
    else if (hour >= 12 && hour < 17) {
        printf("Good Afternoon!\n");
    }
    else if (hour >= 17 && hour < 21) {
        printf("Good Evening!\n");
    }
    else if (hour >= 21 && hour < 24) {
        printf("Good Night!\n");
    }
    else {
      
        printf("Invalid hour entered. Please enter a value between 0 and 23.\n");
    }

    return 0;
}
