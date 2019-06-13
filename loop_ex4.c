#include <stdio.h>
int main()
{
    int result,num1,num2,table,count=1;
    printf("input number: ");
    scanf("%d", &num1);
    printf("table length: ");
    scanf("%d", &num2);
    printf("multiplication of %d \n", num1);
    for(result=1;result<=num2;result++){
        printf("%d x %d = %d\n", num1, result, num1*result );
    }
return 0;
}