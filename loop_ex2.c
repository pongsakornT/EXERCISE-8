#include <stdio.h>
int main()
{
    int num=1,
        count=1;
    for(count;count<=40;count++){
        if(num%3==0)
        {
        num++;
        }
        else
        {
        printf("%d ,",num);
        num++;
        }
        if(num==40)
        {
            printf("%d\n", num);
            break;
        }
    }
    
}