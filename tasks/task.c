#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int num1, num2;
    int sum;

    if (argc != 3) {
        printf("Usage: %s <num1> <num2>\n", argv[0]);
        return 0;
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);
    sum = num1 + num2;

    // Prompt the user for input
    //printf("Enter the first number: ");
    //scanf("%d", &num1);

    //printf("Enter the second number: ");
    //scanf("%d", &num2);

    // print the sum
    printf("Sum: %d\n", sum);

    return 0; // Exit successfully
}
