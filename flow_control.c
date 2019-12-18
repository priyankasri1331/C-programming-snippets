#include <stdio.h>
int main()
{
int n,i,j,count,k,sum_1;
printf("Enter the number n :\n");
scanf("%d",&n);
int sum = 0;
for(i = 0; i < n; i++)
{
sum += i;
}
printf("%d",sum);

k = 0;
do
{
    count += k;
    k++;
}
while(k < n);

printf("\n%d",sum);
printf("\n%d",count);
printf("\n%d",sum_1);

int num1,num2;

char optr;

printf("\nEnter an operator + , - , * , /");
scanf(" %c",&optr);
printf("\nEnter 2 numbers");
scanf("%d %d",&num1,&num2);

switch(optr)
{
  case '+' : printf("\n%d+%d = %d ",num1,num2,num1+num2);
            break;
  case '-' : printf("\n%d-%d = %d",num1,num2,num1-num2);
  break;
  case '*' : printf("\n%d*%d = %d",num1,num2,num1*num2);
  break;
  case '/' : printf("\n%d/%d = %d",num1,num2,num1/num2);
  break;
  default: printf("\noperator is wrong");
}
int d = 0;
if (d !=0)
    goto directions;

directions:
    printf("\nEast,West,North,South");

return 0;
}
