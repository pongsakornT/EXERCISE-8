#include<stdio.h>
int main()
{
    int num1,num2,ref,result=0;
    printf("input number: ");
    scanf("%d %d", &num1, &num2);
    if(num2<num1){
        ref = num2;
        num2 = num1;
        num1 = ref;
    }
    int x = num1;
    for(x;x<=num2;x++)
    {
     result +=x;
    }
    printf("result : %d\n", result);
}