//simple c program(Hello world)single
/*
Name:Maureen N Kamau
Reg:CT100/G/26147/25
Description:input output file
*/

#include <stdio.h>

int main() {
    FILE *input, *output;
    int numbers[10], sum = 0;
    float average;
    int i;

    
    input = fopen("input.txt", "w");
    if (input == NULL) {
        printf("Error opening input.txt!\n");
        return 1;
    }

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
        fprintf(input, "%d\n", numbers[i]);
    }
    fclose(input);

    
    input = fopen("input.txt", "r");
    if (input == NULL) {
        printf("Error reading input.txt!\n");
        return 1;
    }

    for (i = 0; i < 10; i++) {
        fscanf(input, "%d", &numbers[i]);
        sum += numbers[i];
    }
    fclose(input);

    average = sum / 10.0;

   
    output = fopen("output.txt", "w");
    if (output == NULL) {
        printf("Error opening output.txt!\n");
        return 1;
    }

    fprintf(output, "Sum = %d\nAverage = %.2f\n", sum, average);
    fclose(output);

   
    printf("\nNumbers (from input.txt):\n");
    input = fopen("input.txt", "r");
    while ((i = fgetc(input)) != EOF)
        putchar(i);
    fclose(input);

    printf("\nResults (from output.txt):\n");
    output = fopen("output.txt", "r");
    while ((i = fgetc(output)) != EOF)
        putchar(i);
    fclose(output);

    return 0;
}