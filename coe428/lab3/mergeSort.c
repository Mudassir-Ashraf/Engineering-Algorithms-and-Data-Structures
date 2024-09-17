#include "mySort.h"
#include "metrics.h"
#include <stdio.h>
#include <stdlib.h>

void merge(int array[], int first, int mid, int last)
    {
        int i, j, k;
        int nL, nR;

        nL = mid - first + 1;
        nR = last - mid;

        int left[nL]; 
        int right[nR];

        for (i = 0; i < nL; i++){
            left[i] = array[first + i];
        }
        for (j = 0; j < nR; j++){
            right[j] = array[mid + 1 + j];
        }

        i = 0;
        j = 0;
        k = first;

        while((myCompare(i, nL) < 0) && (myCompare(j, nR) < 0)) {
            if (left[i] <= right[j]) {
                myCopy(&left[i], &array[k]); 
                i++;
            }
            else {
                myCopy(&right[j], &array[k]);
                j++;
            }
             k++;
        }

        while(myCompare(i, nL) < 0) {
            myCopy(&left[i], &array[k]); 
            i++;
            k++;
        }
        while(myCompare(j, nR) < 0) {
            myCopy(&right[j], &array[k]);
            j++;
            k++;
        }
    }

void mySort(int array[], unsigned int first, unsigned int last)
    {
        if (first < last){
        int mid = first + (last - first) / 2;
        mySort(array, first, mid);
        mySort(array, mid + 1, last);
        merge(array, first, mid, last);
        }
    }
