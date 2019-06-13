#include <stdio.h>

int main()
{
    int i=100;
    for (i=100;i>=50;i--)
    {
        if(i==50)
        {
            printf("%d\n", i);
            break;
        }
    
        printf("%d, ", i);
    }
}
    