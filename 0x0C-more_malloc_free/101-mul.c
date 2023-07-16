#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isDigitString(const char *str) {
    while (*str) {
        if (*str < '0' || *str > '9') {
            return false;
        }
        str++;
    }
    return true;
}

int multiply(const char *num1, const char *num2) {
    int n1 = atoi(num1);
    int n2 = atoi(num2);
    return n1 * n2;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Error\n");
        return 98;
    }

    if (!isDigitString(argv[1]) || !isDigitString(argv[2])) {
        printf("Error\n");
        return 98;
    }

    int result = multiply(argv[1], argv[2]);
    printf("%d\n", result);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isDigitString(const char *str) {
    while (*str) {
        if (*str < '0' || *str > '9') {
            return false;
        }
        str++;
    }
    return true;
}

int multiply(const char *num1, const char *num2) {
    int n1 = atoi(num1);
    int n2 = atoi(num2);
    return n1 * n2;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Error\n");
        return 98;
    }

    if (!isDigitString(argv[1]) || !isDigitString(argv[2])) {
        printf("Error\n");
        return 98;
    }

    int result = multiply(argv[1], argv[2]);
    printf("%d\n", result);

    return 0;
}
