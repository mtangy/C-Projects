#include <stdio.h>

void main(){
  char c =0;
        FILE* f = fopen("extern.c","r");
	while((c= fgetc(f)) != EOF){
	  printf("1");

	  if(c == '/'){
	    if((c=fgetc(f)) =='/'){
	       fputc(' ',f);
	       while(fgetc(f) != '\n')
	          fputc(' ',f);
	    }else if(c = '*'){
               while(fgetc(f) != '*')
	          fputc(' ',f);
	    }
	  }
 printf("2");
	  
      	}//endwhile
	system("more extern.c");
}//endmain
