/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  //variable declaration
  int mark1, mark2, sum;
  float average;

  printf("Enter mark 1 : "); //input first mark
  scanf("%d",&mark1);
  printf("Enter mark 2 : "); //input second mark
  scanf("%d",&mark2);

  sum = mark1 + mark2; //sum calculation
  average = sum / 2.0; // average calculation 

  printf("Average of the two marks : %.2f",average);
  
  return 0;
}

