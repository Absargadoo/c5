#include <stdio.h>

void tOH(int n, char a,char b,char c) {
  // Base case.
  if (n == 1) {
    printf("Move disk 1 from %c to %c\n",a,c);
    return;
  }

  // Recursive step.
  tOH(n - 1, a, c, b);
  printf("Move nth disk %d from %c to %c\n", n, a,c);
  tOH(n - 1, b, a,c);
}

int main() {
  int n;
  printf("enter a number\n");
  scanf("%d",&n);
 
  char src = 'A';
  char aux = 'B';
  char dest = 'C';

  // Solve the Tower of Hanoi problem.
  tOH(n, src, aux, dest);


  return 0;
}