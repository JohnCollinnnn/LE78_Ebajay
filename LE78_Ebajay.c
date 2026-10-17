#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int n, i;
    int numbers[100];
    int largest;
    char str[200];
    int vowels = 0;

    // Part 1 - Finding the Largest Element in an Array
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid number of elements.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    largest = numbers[0];
    for (i = 1; i < n; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    printf("\nThe largest element in the array is: %d\n", largest);

    // Clear input buffer before using fgets
    getchar();

    // Part 2 - Counting the Number of Vowels in a String
    printf("\nEnter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }
    }

    printf("The number of vowels in the string is: %d\n", vowels);

    return 0;
}