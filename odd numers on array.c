#include <stdio.h>

int main() {
  int n, i;
  int arr[1000];

  printf("Enter the size of the array: ");
  scanf("%d", &n);

  printf("Enter the elements of the array: ");
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  printf("The odd numbers in the array are: ");
  for (i = 0; i < n; i++) 
    if (arr[i] % 2 != 0)
     {
      printf("%d\n", arr[i]);
    }
  

  return 0;
}