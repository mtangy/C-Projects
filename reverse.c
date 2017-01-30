//Excersise 1-19 (pg 31)
#include <stdio.h>

#define max 100

void main(){
  char s[max]={0};
  char rs[max]={0};
  int len =0;
  
  len = getlines(s);
  printf("String: %s\n",s);
  reverse(len,rs,s);
  printf("Reverse String: %s",rs);
  putchar('\n');
}

int getlines(char s[]){
  int i,c;
  for(i=0; i<max-1 && (c=getchar())!=EOF && c!='\n'; ++i)
      s[i] = c;
  s[i++] = '\0';
  
  return i;
}

void reverse(int len, char rs[], char s[]){
  int i;
  int j =len-2;
  for(i = 0; i<=len; i++){
    rs[i] = s[j];
    j-=1;
  }
  rs[i+1] = '\0';
}
