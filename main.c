// Author: Grace Lavin gcl5087@psu.edu
// Collaborator: Yue Wu yzw5627@psu.edu
// Collaborator: Shiao Zhuang sqz5328@psu.edu
// Collaborator: Michael Artlip mva5905@psu.edu
// Section: 1
// Breakout: 18

#include <stdio.h>
#include <readline/readline.h> 

int main(void) {
  char *getN = readline("Enter an int: ");
  int intN = atoi(getN);
  printf("sum is %i\n", sum_n(intN)); 

  getS = readline("Enter a string: ")
  print_n(getS, intN)
}

int sum_n(n) {
  if (n == 0)
    return 0;
  else
    return n + sum_n(n-1);
  
}

char print_n(s, n) {
  if n <= 0:
    pass
  else:
    print(f"{s}")
    print_n(s,n-1)
}
