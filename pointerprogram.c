#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x = 183;
    int *p = &x;//p is the pointer variable 
    printf("%d",x);//this will print the value of x
    printf("\n");
    printf("%d",&x);//this will print the address of x 
    printf("\n");
    printf("%d",p);//this will print the address of x because p is the pointer
    printf("\n");
    printf("%d",*p);//this will print the value of x only which is 183 because we use the * mark
    printf("\n");
    printf("%d",&p);//this will print the address of pointer p
    return 0;
}
// * is the d-refrencing varible 
//& is a refrencing variable 
