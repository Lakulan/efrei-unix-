#include "unistd.h"

void display_alphabet(char c){
  write(1 , &c , 1);
}
int main(int ac, char **av){
  char c='z' ;

  while(c>='a') {
    display_alphabet(c);
    c--;
      }
  return(0);
}
