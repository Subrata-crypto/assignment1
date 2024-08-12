#include <stdio.h>
int main() {
    char ope;
    float num1,num2;
    printf("please enter your operator('+','-','*','/'):");
    scanf("%c",&ope);
    printf("Enter first number:");
    scanf("%f",&num1);
    printf("Enter second number:");
    scanf("%f",&num2);
    switch(ope){
        case '+':
        printf("Addition is :%f",num1+num2);
        break;
        case '-':
        printf("Subtraction is :%f",num1-num2);
        break;
        case '*':
        printf("Multiplication is :%f",num1*num2);
        break;
        case '/':
        if(num2!=0){
            printf("Division is :%f",num1/num2);
        }
        else{
            printf("Division by zero is not allowed");
        }
        break;
        default:
            printf("Invalid operator");
        break;
    }
    return 0;
}