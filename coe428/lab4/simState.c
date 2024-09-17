#include <stdlib.h>
#include <stdio.h>

/*
A G H
B E D
C H B
D D F
E C A
F A G
G B E
H D C*/

typedef struct state_Machine{

  char name;
  int var, number;
  struct state_Machine * next_state_0;
  struct state_Machine * next_state_1;

}fsm;

fsm states[8];

void init_states(){

  //A
  states[0].name = 'A';
  states[0].number = 0;
  states[0].next_state_0 = states + 6;
  states[0].next_state_1 = states + 7;
  
  //B
  states[1].name = 'B';
  states[1].number = 1;
  states[1].next_state_0 = states + 4;
  states[1].next_state_1 = states + 3;

  //C
  states[2].name = 'C';
  states[2].number = 2;
  states[2].next_state_0 = states + 7;
  states[2].next_state_1 = states + 1;

  //D
  states[3].name = 'D';
  states[3].number = 3;
  states[3].next_state_0 = states + 3;
  states[3].next_state_1 = states + 5;

  //E
  states[4].name = 'E';
  states[4].number = 4;
  states[4].next_state_0 = states + 2;
  states[4].next_state_1 = states + 0;

  //F
  states[5].name = 'F';
  states[5].number = 5;
  states[5].next_state_0 = states + 0;
  states[5].next_state_1 = states + 6;

  //G
  states[6].name = 'G';
  states[6].number = 6;
  states[6].next_state_0 = states + 1;
  states[6].next_state_1 = states + 4;

  //H
  states[7].name = 'H';
  states[7].number = 7;
  states[7].next_state_0 = states + 3;
  states[7].next_state_1 = states + 2;
  
}

void printstates(){

  int i;

  for(i = 0; i < 8; i++){

    if(states[i].var != 2){

      fprintf(stdout, " %c %c %c \n", states[i].name, states[i].next_state_0 -> name, states[i].next_state_1 -> name);
      
    }
  }
  
}

int main(int argc, char * argv[])
{

  int i, j=0;
  char commands[4];
  init_states();
  fsm current_State = states[5];

  fprintf(stdout, "Enter the commands without any space and hit q to quit the program. \n");
  fprintf(stdout, "Starting State: %c \n", current_State.name);

  while(j != 1){

    for(i=0; i <=4; i++){

      scanf("%c", &commands[i]);
		if(commands[i] == '\n'){
		i=0;
		break;
      }
      
    }
	


    if(commands[0] == '0'){

      fprintf(stdout, "%c \n", current_State.next_state_0-> name);
      current_State = states[current_State.next_state_0 -> number];
	  i=0;
    }

    if(commands[0] == '1'){

      fprintf(stdout, "%c\n", current_State.next_state_1 -> name);
      current_State = states[current_State.next_state_1 -> number];
	  i=0;
    }

    if(commands[0] == 'g'){

      fprintf(stdout,"No garbage" );
      	  i=0;
    }
    if(commands[0] == 'd'){

      fprintf(stdout,"Not deleted" );
      	  i=0;
    }
	
	if(commands[0] == 'p'){

    printstates();
	i=0;
    
  }

  


  if(commands[0] == 'c'){
	  if(commands[2] == '0'){
	       if(commands[4] == 'A'){
		   current_State.next_state_0 = states+0;
		   states[current_State.number].next_state_0 = states+0;
           }	
           else if(commands[4] == 'B'){
		   current_State.next_state_0 = states+1;
		   states[current_State.number].next_state_0 = states+1;
           }
           else if(commands[4] == 'C'){
		   current_State.next_state_0 = states+2;
		   states[current_State.number].next_state_0 = states+2;
           }
           else if(commands[4] == 'D'){
		   current_State.next_state_0 = states+3;
		   states[current_State.number].next_state_0 = states+3;
           }
           else if(commands[4] == 'E'){
		   current_State.next_state_0 = states+4;
		   states[current_State.number].next_state_0 = states+4;
           }
           else if(commands[4] == 'F'){
		   current_State.next_state_0 = states+5;
		   states[current_State.number].next_state_0 = states+5;
           }
           else if(commands[4] == 'G'){
		   current_State.next_state_0 = states+6;
		   states[current_State.number].next_state_0 = states+6;
           }	
           else if(commands[4] == 'H'){
		   current_State.next_state_0 = states+7;
		   states[current_State.number].next_state_0 = states+7;
           }		   
	  }  
	  i=0;
	}
	//The change for one
	if(commands[0] == 'c'){
	  if(commands[2] == '1'){
	       if(commands[4] == 'A'){
		   current_State.next_state_1 = states+0;
		   states[current_State.number].next_state_1 = states+0;
           }	
           else if(commands[4] == 'B'){
		   current_State.next_state_1 = states+1;
		   states[current_State.number].next_state_1 = states+1;
           }
           else if(commands[4] == 'C'){
		   current_State.next_state_1 = states+2;
		   states[current_State.number].next_state_1 = states+2;
           }
           else if(commands[4] == 'D'){
		   current_State.next_state_1 = states+3;
		   states[current_State.number].next_state_1 = states+3;
           }
           else if(commands[4] == 'E'){
		   current_State.next_state_1 = states+4;
		   states[current_State.number].next_state_1 = states+4;
           }
           else if(commands[4] == 'F'){
		   current_State.next_state_1 = states+5;
		   states[current_State.number].next_state_1 = states+5;
           }
           else if(commands[4] == 'G'){
		   current_State.next_state_1 = states+6;
		   states[current_State.number].next_state_1 = states+6;
           }	
			else if(commands[4] == 'H'){
		   current_State.next_state_1 = states+7;
		   states[current_State.number].next_state_1 = states+7;
           }		   
	  } 
	i=0;	  
	}
       if(commands[0] == 'q'){

        j = 1;
         break;
    }
	
  }
  
   exit(0);
}



