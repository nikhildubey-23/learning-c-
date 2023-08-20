//now we take input from user in array
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter the value");
        printf("\n");
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("the value you put %d",a[i]);
        printf("\n");
    }
    
    
    return 0;
}
