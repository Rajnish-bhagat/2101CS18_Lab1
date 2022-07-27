#include <stdio.h>

int main() 
{

  char op;
  double first, second;
  printf("Enter an operator (+,-,*,/): "); //operator
  scanf("%c", &op);

  printf("Enter two operands: ");  //input
  scanf("%lf %lf", &first, &second);

  switch (op) 
  {
    case '+': //addition
      printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
      break;
    case '-': //subtraction
      printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
      break;      
    case '*': //multiplication
      printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
      break;
    case '/': //division
      printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
      break;

    default:
      printf("Error! operator is not correct");
  }

  return 0;
}
