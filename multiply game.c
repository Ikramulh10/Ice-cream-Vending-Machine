#include<stdio.h>

int main() {
    int num1, num2, mul, uans, tries, i;
    char option;
    
    do {
        printf("Choose 2 numbers between 1-10\n");
        scanf("%d%d", &num1, &num2);
        
        // Check if entered numbers are within the range
        if (num1 < 1 || num1 > 10 || num2 < 1 || num2 > 10) {
            printf("Please choose numbers between 1-10.\n");
            continue;
        }
        
        mul = num1 * num2;
        tries = 3; // maximum tries allowed
        
        for (i = 0; i < tries; i++) {
            printf("Multiply %d x %d\n", num1, num2);
            scanf("%d", &uans);
            
            if (uans != mul) {
                printf("Try again, %d tries remaining.\n", tries - i - 1);
            } else {
                printf("Right answer!\n");
                break; // exit the loop if the answer is correct
            }
        }
        
        // Check if the answer was correct after loop termination
        if (uans != mul) {
            printf("The correct answer was: %d\n", mul);
        }
        
        printf("Do you want to continue? (y/n)\n");
        scanf(" %c", &option); // Note the space before %c to consume the newline character
        
    } while (option == 'y' || option == 'Y');
    
    return 0;
}

