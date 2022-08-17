/*

ABCDEFGFEDCBA
ABCDEF FEDCBA
ABCDE   EDCBA
ABCD     DCBA
ABC       CBA
AB         BA
A           A

*/

#include <stdio.h>
int main()
{
    // My
    // Approach 
    int i, j, k=0, temp, blank = 0;
    int lines = 6, diff[7] = { 0, 1, 3, 5, 7, 9, 11 };
    char symbol = 'A';
    for (i = lines; i >= 0; i--)
    {
        printf("\n");
        symbol = 'A';
        for (j = i; j >= 0; j--)
            printf("%c", symbol++);
        blank = diff[k++];
        for (j = 0; j < blank; j++)
            printf(" ");
        symbol = 'F' - (blank / 2);
        if (blank == 0)
            temp = i - 1;
        else
            temp = i;
        for (j = 0; j <= temp; j++) 
            printf("%c", symbol--);
    }
    printf("\n\n\n");
    
    // More Optimised
    // Approach
    int l, m;
    for(i=0;i<=6;i++)
    {
        for(k=65;k<=71-i;k++)
            printf("%c", k);
        for(j=1;j<=i*2-1;j++)
            printf(" ");
        for(l=71-i;l>=65;l--)
            if(l != 71)
            printf("%c", l);
        printf("\n");
    }
    return 0;
}
