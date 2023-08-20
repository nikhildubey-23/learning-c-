// string operation in c language
// there is no data type string in c language
// for creating string in c language we make array of character 
// string using an array character is terminated by a null character("\0")
#include<stdio.h>
// creating a function to print the string 
void printstr(char str[]){//taking char array input
    for (int i = 0; str[i] != '\0'; i++)//appling conding to print array 
    {
        printf("%c",str[i]);//printing the char array of string
      
    }
      printf("\n");//spacing
    
}
int main(int argc, char const *argv[])
{   char str[] = "hello hacker";//making a char array to store the string 
    printstr(str);//function that prints the string 
    
    return 0;
}
