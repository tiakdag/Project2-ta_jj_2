#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <err.h>
#include <stdlib.h>

#define LINESIZE 1024
#define DELIMS " \n\t\r"

char command [LINESIZE];
char *tokens  [LINESIZE];

int main(){
#define true 1;
 
  while(true ==1){
    printf("Enter: ");
    *fgets(command, LINESIZE, stdin);// char *fgets (char command, int 1024, FILE stdin)
    
    //create a child process 
  }
  
}

int tokenize(char *tokens[], char *command){
  int i =0;
  static char line[LINESIZE];
  strcpy(line,command);
  tokens[i]=strtok(line,DELIMS);
  while (tokens[i] != NULL)
    tokens[++i] = strtok(NULL,DELIMS);
  return i;
  }


