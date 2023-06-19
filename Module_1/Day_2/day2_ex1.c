#include <stdio.h>
#include <stdint.h>

int main() {
    double x = 0.7;
    uint64_t* p = (uint64_t*)&x;
    uint64_t exponent = (*p >> 52) & 0x7FF;

    // Print exponent in hexadecimal format
    printf("Exponent in hexadecimal: 0x%llX\n", exponent);

    // Print exponent in binary format
    printf("Exponent in binary: 0b");
    for (int i = 10; i >= 0; i--) {
        printf("%d", (exponent >> i) & 0x1);
    }
    printf("\n");

    return 0;
}

