#include <stdio.h>

void main(){
	int c = 0;
	int a = 0;
    FILE* f = fopen("/cygwin64/home/mtangy/C_Projects/wc.txt","r");
	int charCount[25];
	while((c= fgetc(f)) != EOF){
        if(c>= 97 && c<=122){
			charCount[c-97]++;
		}
	}
	for(int i = 97; i<=122; i++){
		putchar(i);
		printf(": ")
		for(int j = 0; j<=charCount[a];j++){
			putchar(42)
		}
		putchar("\n")
		a++;
	}
}

