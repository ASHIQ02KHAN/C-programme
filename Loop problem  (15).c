#include<stdio.h>
#include<math.h>
int main()
{
    float amount, rate, intrest, time, ci, a;
////*Reading amount, rate of intrest and period in years from user///
    printf("Type the amount : ");
    scanf("%f", &amount);
    printf("Type the interest rate : ");
    scanf("%f", &rate);
    printf("Type the period in years: ");
    scanf("%f", &time);


    intrest = 1+(rate/100);
    // ci=pow(intrest,time);
    ci = 1;
    for(a = 1; a <= time; a++)
        ci = ci * intrest;
    ci = amount * ci - amount;
    printf("Your compound interest is : %.2f", ci);
    return 0;
}
