/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  int n,i,sum =0;

  printf("\nEnter positive integer for n : ");
  scanf("%d",&n);
  
 for(i=1;i<=n;i++)
 {
   sum = sum+i;
 }
 printf("\nThe sum of 1 to entered number : %d",sum);
  return 0;
}

