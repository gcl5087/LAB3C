// Author: Grace Lavin gcl5087@psu.edu
// Collaborator: Yue Wu yzw5627@psu.edu
// Collaborator: Shiao Zhuang sqz5328@psu.edu
// Collaborator: Michael Artlip mva5905@psu.edu
// Section: 1
// Breakout: 18

#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h> 

int sum_n(n) {
  if (n == 0)
    return 0;
  else
    return n + sum_n(n-1);
  
}

void print_n(const char s, int n) {
  if (n > 0)
    printf("%char", s);
    print_n(s,n-1);
}

int main(void) {
  char *getN = readline("Enter an int: ");
  int intN = atoi(getN);
  printf("sum is %d.\n", sum_n(intN));
  char *s = readline("Enter a string: ");
  print_n(*s, intN);
}