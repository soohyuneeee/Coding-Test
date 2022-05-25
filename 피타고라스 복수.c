#include <stdio.h>
#include <math.h>
int n,a,i,b,c,count;
int main(){
	scanf("%d",&a);
	for(b=a+1;b<sqrt((a*a)+(b*b)-a);b++){
		if(int(sqrt((a*a)+(b*b)))==sqrt((a*a)+(b*b)))
			count++;
	}
	
}
