#include <stdio.h>
int main()
{
    char ch;
    printf("Alphabets from a - z are: \n");
    for(ch='a'; ch<='z'; ch++)
    {
        //Printing all alphabets with tab//
        printf("%c\t", ch);
    }
    return 0;
}
