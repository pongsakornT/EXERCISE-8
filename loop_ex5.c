#include<stdio.h>
int main()
{
        int num;
        do
        {
            printf("input number: \n");
            scanf("%d", &num);

            if(num%2==0) 
            {
            
            
            if(num==0)
                {    
                printf("QUITED");
                break;
                }
                printf("%d is even number \n", num);
            }
                    else
                    {
                    printf("%d is odd number \n", num);
                    }   

        }
    while(num!=0);
return 0;
}