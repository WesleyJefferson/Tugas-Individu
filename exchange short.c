#include<stdio.h>
#include<conio.h>
int main()
{
    int first_number, second_number, temp;
    printf("Enter first number: "); //allow user to add first number
    scanf("%d",&first_number);
    printf("Enter second number: "); //allow user to add second number
    scanf("%d",&second_number);
    printf("Before swapping \n");
    printf("First number: %d \n", first_number);
    printf("Second number: %d \n", second_number);
    temp = first_number;  //first number is assigned to temp
    first_number = second_number; //second number is assigned to first number
    second_number = temp; //first number is assigned to secind number
    printf("After swapping \n");
    printf("First number: %d \n", first_number);
    printf("Second number: %d \n", second_number);
    return 0;
}
