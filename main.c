#include <stdio.h>

int main() {
    int n;
    printf("Hello, mate! If you give me a list of numbers, I will repeat them forwards and backwards.\n");
    printf("How many numbers will you enter? ");
    scanf("%d", &n);

    int numbers[n];
    for (int i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", numbers[i]);
    }

    printf("\nForwards: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }

    printf("\nBackwards: ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", numbers[i]);
    }
    printf("\n\nSee you around, mate!");
    
    return 0;
}