include <stdio.h>
int main() {
char operator;
float num1, num2, result;
scanf(" %c", &operator); 
scanf("%f %f", &num1, &num2);

switch (operator) {
case '+':
result = num1 + num2;
printf("Result: %.2f\n", result);
break;
case '-':
result = num1 - num2;
printf("Result: %.2f\n", result);
break;
case '*':
result = num1 * num2;
printf("Result: %.2f\n", result);
break;
case '/':
if (num2 != 0)
result = num1 / num2;
else
printf("Error: Division by zero is not allowed.\n");
break;
default:
printf("Invalid operator.\n");
}
return 0;
