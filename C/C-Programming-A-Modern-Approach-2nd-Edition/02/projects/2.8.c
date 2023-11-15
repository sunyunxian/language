#include <stdio.h>

int main(void)
{
    float loan = 0.0f, rate = 0.0f, monthly_pay = 0.0f;
    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_pay);

    float month_rate = (rate / 100) / 12;

    loan = (loan - monthly_pay) + (loan * month_rate);
    printf("Balance remaining after first payment: %.2f\n", loan);
    loan = (loan - monthly_pay) + (loan * month_rate);
    printf("Balance remaining after second payment: %.2f\n", loan);
    loan = (loan - monthly_pay) + (loan * month_rate);
    printf("Balance remaining after third payment: %.2f\n", loan);
    return 0;
}
