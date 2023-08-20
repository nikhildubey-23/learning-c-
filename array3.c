// multidimention array having single input
#include<stdio.h>
int main(int argc, char const *argv[])
{
    //declaration of rows and coloumn
    int row = 3;
    int coloumn = 4;
    //creating 2d array 
    int array[3][4] = {
        {1,2,3,4},
        {2,3,4,5},
        {4,5,6,6}
    };
    //performing arithematic 
    int sum = 0;
    int product = 1;
    int division = 1;
    int substraction = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0;  j < coloumn; j++)
        {
            sum += array[i][j];
            product *= array[i][j];
            division /= array[i][j];
            substraction -= array[i][j];
        }
        
    }
    //printing the array
    printf("the sum of array is %d",sum);
    printf("\n");
    printf("the product of array is %d",product);
    printf("\n");
    printf("the division of array is %d",division);
    printf("\n");
    printf("the substraction of array is %d",substraction);
    return 0;
}
