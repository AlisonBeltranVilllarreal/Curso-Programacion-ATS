//14, Buvle Do- While que imprima el alfabeto

#include<stdio.h>

int main(){
	
char letra ='a';//61h

	do{
		printf("%c. \n",letra);// a b c d e...
		letra++;
	}while(letra<='z');
	
	return 0;
}
