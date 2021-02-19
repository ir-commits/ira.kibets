#include <stdio.h>

int main()
{
    float deposit, months, rate, IpM;

    /* Input deposit, rate and amount of months */
    printf("Enter deposit (amount): ");
    scanf("%f", &deposit);

    printf("Enter months: ");
    scanf("%f", &months);

    printf("Enter rate: ");
    scanf("%f", &rate);

    /* Calculate interest per month */
    IpM = (deposit * months * rate) / 100;

    /* Print the resultant value of IpM */
    printf("Interest per month = %f", IpM);

    return 0;
}
