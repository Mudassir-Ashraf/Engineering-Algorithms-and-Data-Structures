#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *  The functions in this module implement a Stack data structure
 *  of integers.  (Note that chars are also integers so this
 *  integer Stack can be used for chars as well.)
 *
 *  NOTE: the stack is implemented as a fixed size array (size = 100).
 *  Consequently, no more than 100 integers can be pushed onto
 *  the Stack at any given time.
 */

// Implementation hints:
//   The 3 functions--push, pop and isEmpty--share information
//   about the array used to implement the stack and the index
//   of the "top" of the stack.
//
//   You may want to make these variables global...
//   ...but that would
//   be a mistake (because anyone using the module would have
//   to ensure that they did not use global variables with the
//   same names).
//
//   An alternative in C is a "static global".
//   If a global variable is qualified as "static", it is global only
//   within the source code file where it is declared.
//   In parituclar, it cannot conflict with any other global variable.
//
//  RECOMMENDATION:
//   Uncomment the following 2 lines and use these static globals!
static int top = 0;
static int stack[100];


/**
 * pop() removes the top integer on the stack and returns it.
 *
 * If pop() is attempted on an empty stack, an error message
 * is printed to stderr and the value -1 (minus one) is returned.
 */

int pop()
{
 if(top==0){
        fprintf(stderr, "Stack is empty. (An Underflow error!)\n");
        return -1;
    }
    else{
            int temp = stack[--top]; //Temp points to a lower top value.
            return temp;
    }
}

/**
 *  push(thing2push) adds the "thing2push" to the top of the stack.
 *
 *  If there is no more space available on the Stack, an error
 *  message is printed to stderr.
 */
void push(int thing2push)
{
   if(top > 99){
         fprintf(stderr,"Stack is full. (An Overflow error!) \n");
     }
     else{ //If the stack isn't full then you can push thing2push on it.
         stack[top++] = thing2push; //Item is pushed onto the stack and then top is incremented.
     }
}

/**
 * isEmpty() returns a non-zero integer (not necessarily 1) if the
 * stack is empty; otherwise, it returns 0 (zero).
 *
 */
int isEmpty()
{
  if(top ==0){ //if stack is empty
         return 1;
     }
     else { //if stack is not empty
      return 0;
     }
}
void printStack(){
	int i;
	for(i=0; i<top; i++)
		printf("%d\n",stack[i]);

}
