#include <stdio.h>
int main()
{
float data1, data2;
char op;
while (3 == scanf("%f%c%f", &data1, &op, &data2) )
{
float result;
printf("%.6lf%c%.6lf=", data1, op, data2);
switch (op)
{
case '+':
result = data1 + data2;
break;
case '-':
result = data1 - data2;
break;
case '*':
result = data1 * data2;
break;
case '/':
result = data1 / data2;
break;
default:;
}
printf("%.6lf\n", result);
}
return 0;
}