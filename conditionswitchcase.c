#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a , b ;
    float result ;
    char i;
    printf("enter the value of expression(+,-,*,/,%{modulas})\n");
    scanf("%c",&i);
    printf("enter the value for a \n");
    scanf("%d",&a);
    printf("enter the value for b\n");
    scanf("%d",&b);
    switch (i)
    {
    case '+':
        result = a + b ;
        break;
    case '-':
        result = a - b ;
        break;
    case '*'  :
        result = a * b ;
        break;
    case '%'  :
        result = a%b;
        break;    
    default:
        printf("wrong expression you entered \n");
        break;
    }

    printf("%f",result);
    
    return 0;
}
