#include <stdio.h>

int calculate_power(int base, int power) {
    int i, result = 1;

    for(i = 0; i < power; i++) {
        result *= base;
    }
    return result;
}

void decimal_to_binary(int decimal) {
    int i;
    int digitCount = 1;
    int temp = decimal;
    
    while(temp >= 2) {
        temp /= 2;
        digitCount++;
    }
    for(i = digitCount - 1; i >= 0; i--) {
        if(decimal >= calculate_power(2, i)) {
            printf("1");
            decimal = calculate_power;
        }
        else {
            printf("0");
        }
    }
}

int main() {
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    printf("The binary for %d is ", decimal);
    decimal_to_binary(decimal);
    printf("\n");

    return 0;
}