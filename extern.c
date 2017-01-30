#include <stdio.h>

void print(); //this is a test 

void main(){
 extern char test[] = "hello world of external variables\n";
 print();
}
/*
void print(){
  printf("%s",test); 
}
*/
