#include <stdio.h>

int main(){
	char text[]="ftd234@ajh";
	int countchartext=0;
	int countcharnum=0;
	int countcharspecial=0;
	int size=strLen(text);
	int i;
	for(i=0; i<size; i++){
		if(isalpha(text[i])){
			countchartext++;
	}else if(isdigit(text[i])){
		    countcharnum++;
	}
		}
		printf("\n so luong ki tu la chu cai trong chuoi ban dau la %d", countchartext);
		printf("\n so luong ki tu la chu so trong chuoi ban dau la %d", countcharnum);
		return 0;
}
