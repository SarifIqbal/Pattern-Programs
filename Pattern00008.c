/*

987654321
11111111
9876543
333333
98765
5555
987
77

*/

#include <stdio.h>
int main()
{
    int end=1, num=0;
    for(int i=9; i>1;i--)
    {
        for(int j=9; j>=end;j--)
        {
            if(i%2!=0)
            {
                printf("%d", j);
            }
            else
            {
                printf("%d", num);
            }
        }
        printf("\n");
        end=end+1;
        num=num+1;
    }
    return 0;
}
