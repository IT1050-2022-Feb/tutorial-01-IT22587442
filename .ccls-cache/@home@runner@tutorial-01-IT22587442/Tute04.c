/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

//function declaration
int minimum(int no1, int no2);
int maximum(int no1, int no2);
int multiply(int no1, int no2);

int main() 
{
  //variable Declaration
   int no1, no2;
  
   printf("Enter a value for no 1 : "); //input no1
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");  //input no2
   scanf("%d", &no2);
  
   printf("%d ", minimum(no1, no2));  //Display Minimum number
   printf("%d ", maximum(no1, no2));  //Display Maximum number
   printf("%d ", multiply(no1, no2));  //Display no1 * no2
  
   return 0;
}
int minimum(int no1, int no2)
{
  if(no1 < no2)
  {
    return no1;
  }
  else
  {
    return no2;  
  }
}
int maximum(int no1, int no2)
{
  if(no1 > no2)
  {
    return no1;
  }
  else
  {
    return no2;  
  }
}
int multiply(int no1, int no2)
{
  return no1 * no2;
}