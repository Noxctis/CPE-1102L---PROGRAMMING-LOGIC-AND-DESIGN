#include <stdio.h>

int main() {
  int n;

  printf("Enter the value of N: ");
  scanf("%d", &n);

  // Initialize the first two Fibonacci numbers
  int a = 0, b = 1;

  // Print the Fibonacci sequence
  printf("%d %d ", a, b);
  for (int i = 2; i <= n; i++) {
    int next = a + b;
    printf("%d ", next);
    a = b;
    b = next;
  }

  printf("\n");

  return 0;
}
