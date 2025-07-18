//armstrong or not

#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, result = 0, n = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Count the number of digits
    for (int temp = num; temp != 0; temp /= 10) {
        n++;
    }

    // Calculate the sum of powers of digits
    for (int temp = num; temp != 0; temp /= 10) {
        remainder = temp % 10;
        result += pow(remainder, n);
    }

    // Check if it's an Armstrong number
    if (result == originalNum)
        printf("%d is an Armstrong number.\n", originalNum);
    else
        printf("%d is not an Armstrong number.\n", originalNum);

    return 0;
}
