#include <stdio.h>

int main() {
    int choice, num, i;

    while (1) {  // infinite loop until user chooses to exit
        printf("\n--- MENU ---\n");
        printf("Press 1 to print multiplication table\n");
        printf("Press 0 to exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter a number: ");
            scanf("%d", &num);

            printf("Multiplication Table of %d:\n", num);
            i = 1;
            while (i <= 10) {
                printf("%d x %d = %d\n", num, i, num * i);
                i++;
            }
        } 
        else if (choice == 0) {
            printf("Exiting program...\n");
            break;  // exit the loop
        } 
        else {
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}