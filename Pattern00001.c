/*

*****
*****
*****
*****
*****

*/

#include <stdio.h>
int main()
{
    int starnum, i, j;
    printf("Enter how many lines of * you want: ");
    scanf("%d", &starnum);
    for (i = 0; i < starnum; i++)
    {
        for (j = 0; j < starnum; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
