#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(int argc, char *argv[]){
    int a=10,b=20;
    printf("a = %d and b = %d\n", a,b);
    a = a * b;b = a/b;a = a/b;
    printf("a = %d and b = %d\n", a,b);
    return 0;
}