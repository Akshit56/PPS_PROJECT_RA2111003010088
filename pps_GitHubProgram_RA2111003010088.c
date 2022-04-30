#include<stdio.h>
int main(){
    printf("Welcome to the calculator program :)\n");
    printf("---------------------------------\n");
    int a,b,c;
    printf("Enter First number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
    printf("Press 1 for Addition, 2 for Subtraction, 3 for Multiplication, 4 for Division, 5 for Modulus :");
    scanf("%d",&c);
    if (c==1)
    {
        printf("Sum of the 2 numbers is :%d",a+b);
    }
    else if (c==2)
    {
        printf("Subtraction of the 2 numbers is :%d",a-b);
    }
    else if (c==3)
    {
        printf("Multiplication of the 2 numbers is :%d",a*b);
    }
    else if (c==4)
    {
        printf("Division of the 2 numbers is :%d",a/b);
    }
    else if (c==5)
    {
        printf("Modulus of the 2 numbers is",a%b);
    }
    else{
        printf("Invalid input, please check");
        
    }
    
    return 0;
}