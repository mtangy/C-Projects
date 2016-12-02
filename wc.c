#include <stdio.h>

void main(){
	printf("main");
	int words, chars, lines;
	words = chars = 0;
	lines =1;
    FILE* f = fopen("wc.txt","r");
	int c = 0;
	while((c= fgetc(f)) != EOF){
		if(c == '\n'){
			lines++;
		}else{
			chars++;
			while(c = fgetc(f)){
			  	chars++;
				if(c == ' ' || c == '\t')
					break;
				if(c == '\n'){
					lines++;
					break;
				}
			} 
			words++;
		}
	}
	printf("char: %d words: %d lines: %d",chars,words,lines);
}
