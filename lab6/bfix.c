#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "diff.h"

int main(int argc, char **argv) {
	
      char *file_diff = argv[2];
      char *file_to_fix = argv[1];      
      FILE *file_differences = fopen( file_diff, "r");
      FILE *file1 = fopen( file_to_fix, "r+");
      
      struct diff diff;
      int counter = 0;
     
      char line[64];
      while( fgets(line,sizeof(line),file_differences) != NULL ){
	parsediff(line, &diff);
	fseek( file1, diff.offset-1, SEEK_SET );
	fwrite( &diff.new, 1, 1, file1 );
      }
      
      
    return 0;
}

