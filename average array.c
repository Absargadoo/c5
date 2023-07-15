#include <stdio.h>

int main() {
  int n, i, sum = 0;
  float average;
  int arr[1000];

  printf("Enter the size of the array: ");
  scanf("%d", &n);

  printf("Enter the elements of the array: ");
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  for (i = 0; i < n; i++) {
    sum += arr[i];
  }

  average = sum / n;

  printf("The average of the array is: %f", average);

  return 0;
}