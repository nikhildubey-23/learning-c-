#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char s1[] = "hacker";
    char s2[] = "arrive";

    puts(strcat(s1,s2));//puts use to print string //strcat is use to concatinate the two string s1+s2
    printf("\n");
    puts(strncat(s1,s1,3));//in this strncat function s1+s2 ke only 3 char hi concatinate honge
    puts(strcpy(s1,s2));//its copy s1 into s2 means tha final output is arrive
    puts(strncpy(s1,s2,3));//this function use to copy 3 character in s1 means tha output will be arrker
    return 0;
}
