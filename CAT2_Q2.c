//simple c program(Hello world)single
/*
Name:Maureen N Kamau
Reg:CT100/G/26147/25
Description:gross pay,taxes and net pay
 */

#include <stdio.h>

int main() {
    float hours, rate, gross, tax, net;

    printf("Enter hours worked: ");
    scanf("%f", &hours);

    printf("Enter hourly rate: ");
    scanf("%f", &rate);

    // Gross pay
    if (hours > 40)
        gross = 40 * rate + (hours - 40) * rate * 1.5;
    else
        gross = hours * rate;

    // Tax
    if (gross <= 600)
        tax = 0.15 * gross;
    else
        tax = 0.15 * 600 + 0.20 * (gross - 600);

    // Net pay
    net = gross - tax;

    printf("\nGross Pay = $%.2f", gross);
    printf("\nTax       = $%.2f", tax);
    printf("\nNet Pay   = $%.2f\n", net);

    return 0;
}