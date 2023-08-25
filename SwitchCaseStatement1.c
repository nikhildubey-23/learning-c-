#include<stdio.h>
int main(){
    int ID, password;
    printf(" enter your id\n");
    scanf("%d",& ID);
    switch (ID)
    {
    case 01: 
    printf("enter your password\n");
    scanf("%d",&password);
    switch (password)
    {
    case  1234:
    printf("welcome in c language\n");
        break;
    
    default:
    printf("incorrect password");
        break;
    }
     break;
    
    default:
    printf("incorrect ID");
        break;
    }
return 0;

    }
















