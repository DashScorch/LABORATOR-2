#include <stdlib.h>
#include <stdio.h>

int function(int x){
	x=x-2;
	//x=function(x);
	return x;
}

int main(){
	int a=30, i=0;
	
	int doru = 100;

	while (a>0){
		a=function(a);
		i++;
	}
	printf("%d", i);
	return 0;	
}

