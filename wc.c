#include <stdio.h>

void main(){
    int words, chars, lines;
    words = chars = 0;
    lines =0;
    FILE* f = fopen("/home/mtangy/Documents/C_projects/wc.txt","r");
    int c = 0;
    while((c= fgetc(f)) != EOF){
	if(c == '\n'){
       	lines++;
	}else{
	while(c = fgetc(f)){
	  	chars++;
	if(c == ' ' || c == '\t')
		break;
	if(c == '\n'){
		lines++;
		break;				}
	} 
		words++;
	}
}
printf("char: %d\nwords: %d\nlines: %d\n",chars,words,lines);
}
