#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


int cmpstr(char *str1, char *str2) { 
  int i = 0;
  
  while ( str1[i] != 0 && str1[i] == str2[i] ){
    i++;  
  }
  if ( str1[i] == str2[i] ){ return 0; }
  if ( str1[i] > str2[i] ) { return 1; }
  if ( str1[i] < str2[i] ) { return 2; }  

}