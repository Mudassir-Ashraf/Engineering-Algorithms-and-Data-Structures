#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
extern int pop();
extern void push(int);
extern void addHeap(int);
extern int heapSize();
extern void printTree(int);
extern int heapDelete();
extern void printStack();
extern void sortHeap(int);


int main(int argc, char * argv[])
{
  int value, count=0;

  while (scanf("%d\n", &value) != EOF) {
    fprintf(stderr, "READING INPUT: %d\n", value);
    addHeap(value); 
    count++;
  }
int start = (heapSize() - 1) / 2;

    for (int i = start; i >= 0; i--)
        sortHeap(i);
    printf("\n");
    printTree(0);
    printf("\n");
printf("\n");

for (int j = 0; j < count; j++) {
        int deleted = heapDelete();
        push(deleted);
    }
printf("\n");

for(int k = 0; k<count; k++)
        printf("%d\n", pop());
    printf("\n");

    printStack();
  exit(0);
}
