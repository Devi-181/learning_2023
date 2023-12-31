#include <stdio.h>

void swap(void* a, void* b, size_t size) {
    char* temp = (char*)malloc(size);
    memcpy(temp, a, size);
    memcpy(a, b, size);
    memcpy(b, temp, size);
    free(temp);
}

int main() {
    int x = 10, y = 20;
    printf("Before swap: x = %d, y = %d\n", x, y);

    swap(&x, &y, sizeof(int));
    printf("After swap: x = %d, y = %d\n", x, y);

    double a = 3.14, b = 2.71;
    printf("Before swap: a = %lf, b = %lf\n", a, b);

    swap(&a, &b, sizeof(double));
    printf("After swap: a = %lf, b = %lf\n", a, b);

    return 0;
}
