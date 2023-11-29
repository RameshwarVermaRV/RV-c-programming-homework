#include <stdio.h>

int main() {
    int evenSum = 0, oddSum = 0;
    int evenArray[5], oddArray[5];
    int evenIndex = 0, oddIndex = 0;

    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            evenSum += i;
            evenArray[evenIndex++] = i;
        } else {
            oddSum += i;
            oddArray[oddIndex++] = i;
        }
    }

    // Display even array and sum
    printf("Even Numbers and Sum:\n");
    for (int i = 0; i < evenIndex; i++) {
        printf("%d ", evenArray[i]);
    }
    printf("\nSum: %d\n", evenSum);

    // Display odd array and sum
    printf("\nOdd Numbers and Sum:\n");
    for (int i = 0; i < oddIndex; i++) {
        printf("%d ", oddArray[i]);
    }
    printf("\nSum: %d\n", oddSum);

return 0;
}