#include "mySort.h"
#include <stdio.h>

void mySort(int array[], unsigned int first, unsigned int last)

{
    int i, j, key;
        for(i = first; i <= last; i++){
            key = array[i];
            j = i - 1;

            while( j >= 0 && (myCompare(array[j], key) > 0)){
                  mySwap(&array[j+1], &array[j]);
                  j--;
            }
            myCopy(&key, &array[j+1]);
          }
    }
