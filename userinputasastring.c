#include<stdio.h>
void printstring(char str[]){
    for (int i = 0; str[i] !='\0'; i++)
    {           
        printf("%c",str[i]);
    }
    printf("\n");
}
int main(int argc, char const *argv[])
{   
    char str[50];//limitation of 50 array
    printf("enter your name\n");
    //for taking input from user as a string we use gets function which pre built in stdio.h librery
    gets(str);
    printstring(str);
    return 0;
}
