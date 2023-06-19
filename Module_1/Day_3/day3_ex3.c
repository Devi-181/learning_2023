#include <stdio.h>

int findLargestNumber(int num) {
    int largest = 0;
    int digit;
    int temp = num;

    while (temp > 0) {
        digit = temp % 10;
        temp /= 10;
        if (temp > largest) {
            largest = temp;
        }
        temp = temp * 10 + digit;
    }

    return largest;
}

int main() {
    int number;
    printf("Enter a 4-digit number: ");
    scanf("%d", &number);

    int largestNumber = findLargestNumber(number);
    printf("Largest number by deleting a single digit: %d\n", largestNumber);

    return 0;
}
