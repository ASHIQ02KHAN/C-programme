#include<stdio.h>
int main()
{
    int num, total;

    printf("Enter any number: ");
    scanf("%d", &num);
    //Adding sum of digit in total variable//
    for(total = 0; num > 0; num = num/10)
        total = total + (num%10);

    //Printing sum of digit
   printf("Sum of digits: %d", total);
return 0;
}
