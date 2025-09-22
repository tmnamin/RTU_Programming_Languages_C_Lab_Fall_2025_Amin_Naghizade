#include <stdio.h>

/*
    Task:
    Write a function `int sum_to_n(int n)` that computes
    the sum of all integers from 1 up to n using a for loop.

    In main():
      - Ask user for a positive integer n
      - If n < 1, print an error
      - Otherwise, call sum_to_n and print the result
*/

int sum_to_n(int n) {
  // TODO: implement sum with a for loop
  int sum = 1;
  if (n > sum) {
    sum++;
  }
  return 0;  // placeholder
}

int main(void) {
  int n;

  printf("Enter a positive integer n: ");
  scanf("%d", &n);

  // TODO: validate input, call function, and print result

  printf("The sum of all n integer is:  %d\n", n, sum_to_n(n));

  return 0;
}
