#include <stdio.h>

main() {
  int n, i, c = 0;
  scanf("%d", &n);
  for (i = 1; i <= n; i++) {
      if (n % i == 0) {
         c++;
      }
  }
  if (c == 2) {
        printf("Prime number");
  }
  else {
         printf("not a Prime number");
  }
  return 0;
}
