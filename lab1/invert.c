#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char **argv) {
  int i;
  printf("Value is: ");
  for ( i = argc-1; i >= 1; i-- ){
    printf("%s ", argv[i]);
  }
  printf("\n", argv[i]);
  char str[] = "snake";
  char c = str[0];
  printf("%d\n", c);
  
  return 0;
} 
