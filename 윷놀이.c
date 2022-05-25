#include <stdio.h>

int main(){
	int a,b,c,d,sum;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	sum=a+b+c+d;
	if(sum==1) printf("µµ");
	if(sum==2) printf("°³"); 
	if(sum==3) printf("°É");
	if(sum==4) printf("À·");
	if(sum==0) printf("¸ð");
	return 0; 
}
