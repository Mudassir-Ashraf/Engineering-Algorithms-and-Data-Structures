#include <stdlib.h>
#include <stdio.h>
#include "towers.h"

int main(int argc, char * argv[])
{
	int n = 3;
	int from = 1, dest = 2;
	
	if(argc == 2)
		n = atoi(argv[1]);
	else if(argc >= 3){
		n = atoi(argv[1]);
		from = atoi(argv[2]);
		dest = atoi(argv[3]);
		if(from == dest){
            fprintf(stderr,"from and dest cannot be equal");
				exit(0);
          }
        if(n <= 0 || from <= 0 || dest <= 0){
            fprintf(stderr,"Cannot input negative number or zero");
				exit(0);
	}
      	if(dest > 3 || from > 3){
            fprintf(stderr,"from and dest cannot be greater than 3");
	                        exit(0);
        }
	}	
	towers(n, from, dest);
    	exit(0);
}
