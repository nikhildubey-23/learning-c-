#include<stdio.h>
int sum(int a , int b){
    return a+b;
}
void printshayari(){
    printf("every movement with you feels like a beautiful chapter in the story of my life");
}

int main(int argc, char const *argv[])
{
    int num1 , num2 , result;
    printf("enter the value for num1 \n");
    scanf("%d",&num1);
    printf("enter the value for num2\n");
    scanf("%d",&num2);
    result = sum(num1,num2);
    printf("%d",result);
    printf("\n");
    printshayari();
     return 0;
}
