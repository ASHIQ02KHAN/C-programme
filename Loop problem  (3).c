#include <stdio.h>
int main()
{
    int i, num;

    printf("Enter number to print table: ");
    scanf("%d", &num);
    for(i=1; i<=10; i++)
    {
        //Printing table of number entered by user//
        printf("%d x %d = %d\n", num, i, (num*i));
    }
    return 0;
}
