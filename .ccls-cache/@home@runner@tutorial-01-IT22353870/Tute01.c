/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the
   average of the two marks. */

#include <stdio.h>

int main() {

  int sub1, sub2;
  double avg = 0;

  printf("input subject 1: \n");
  scanf(" %d", &sub1);

  printf("input subject 2: \n");
  scanf(" %d", &sub2);

  avg = (sub1 + sub2) / 2;

  printf("Average subject 1 and 2: %.2f\n", avg);

  return 0;
}
