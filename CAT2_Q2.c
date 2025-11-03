/*NAME: Odhiambo Geofrey Odiwuor 
Reg NO: PA106/G/28771/25
*/

#include <stdio.h>

int main() {
    float hours_worked, hourly_wage, gross_pay, taxes, net_pay;
    float regular_pay, overtime_pay;
    const float OVERTIME_RATE = 1.5;
    const float REGULAR_HOURS = 40.0;
    const float TAX_BRACKET_1 = 600.0;
    const float TAX_RATE_1 = 0.15;
    const float TAX_RATE_2 = 0.20;

    // Request user input
    printf("Enter the number of hours worked in a week: ");
    scanf("%f", &hours_worked);

    printf("Enter the hourly wage: ");
    scanf("%f", &hourly_wage);

    // Calculate gross pay with overtime
    if (hours_worked > REGULAR_HOURS) {
        regular_pay = REGULAR_HOURS * hourly_wage;
        overtime_pay = (hours_worked - REGULAR_HOURS) * hourly_wage * OVERTIME_RATE;
        gross_pay = regular_pay + overtime_pay;
    } else {
        gross_pay = hours_worked * hourly_wage;
    }

    // Calculate taxes based on gross pay
    if (gross_pay > TAX_BRACKET_1) {
        taxes = (TAX_BRACKET_1 * TAX_RATE_1) + ((gross_pay - TAX_BRACKET_1) * TAX_RATE_2);
    } else {
        taxes = gross_pay * TAX_RATE_1;
    }

    // Calculate net pay
    net_pay = gross_pay - taxes;

    // Print the results
    printf("\nGross Pay: $%.2f\n", gross_pay);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net Pay: $%.2f\n", net_pay);

    return 0;
}
