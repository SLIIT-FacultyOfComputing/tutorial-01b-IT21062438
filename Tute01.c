/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1,mark2;
  float avg;

  printf("Enter First Mark : ");
  scanf("%d",&mark1);

  printf("Enter Second Mark : ");
  scanf("%d",&mark2);

  avg =(mark1+mark2)/2;
  printf("Average = %.2f\n",avg);
  
  return 0;
}

