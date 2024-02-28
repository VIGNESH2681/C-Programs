#include <stdio.h>

int main() {
    int a,b,sum,sub,mul,div;
    char operation;
    
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operation);
    printf("Enter two operands: ");
    scanf("%d %d",&a, &b);

    switch(operation)
    {
        case '+':
        sum = a + b;
        printf("sum:%d",sum);
            break;

        case '-':
         sub = a - b;
        printf("sub:%d",sum);
            break;

        case '*':
            mul = a + b;
        printf("sum:%d",mul);
            break;

        case '/':
            div = a + b;
            printf("sum:%d",div);
            break;

        // operator doesn't match any case constant +, -, *, /
        default:
            printf("Error! operator is not correct");
    }
}

   
