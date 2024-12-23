#include <stdio.h>
#include <limits.h>

int main() {
  int x = 10;
  int *ptr = &x;
  int newValue = 20;

  // Check for potential overflow before assignment
  if (newValue > INT_MAX - 10 || newValue < INT_MIN + 10) {
    fprintf(stderr, "Error: Integer overflow would occur.\n");
    return 1; // Indicate an error
  }

  *ptr = newValue;
  printf("%d", x);
  return 0;
}
