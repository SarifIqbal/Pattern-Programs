/*

A
AB
ABC
ABCD
ABCDE

*/

#include <stdio.h>
int main()
{
    for(int i=1; i<=5;i++)
    {
        int ch = 65;
        for(int j=1; j<=i;j++)
        {
            printf("%c", (char)ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}
