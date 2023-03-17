/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() 
{
  //variable declaration
  int n, i;
  float sum;

  printf("Enter value for n : ");  //input n
  scanf("%d",&n);

  for(i=1; i<=n; i++)  //loop
    {
      sum = sum + i;
    }
  printf("The sum of the numbers from 1 to n : %.2f",sum);  //Display sum
  
  return 0;
}

