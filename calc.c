#include <stdio.h>

int main(){
    float num1, num2, result;
    char op;
    printf("%s \n", "Enter first number: ");
    scanf("%f", &num1);

    fseek(stdin, 0, SEEK_END);
    printf("%s \n", "Enter operation's sign: ");
    scanf("%c", &op);



    if (op == '/')
    {
      do
      {
             printf("%s \n", "Enter second number: ");
            scanf("%f", &num2);
      } while (num2 == 0);
      
    }
    else
    {
        printf("%s \n", "Enter second number: ");
        scanf("%f", &num2);
    }

    switch (op)
    {
    case  '+':
        result = num1 + num2;
        break;
    case  '-':
        result = num1 - num2;
        break;
    case  '*':
        result = num1 * num2;
        break;
    case  '/':
        result = num1 / num2;
        break;
    
    default:
        break;
    }
    
    printf("Result is: %f \n", result);
    return 0;


}