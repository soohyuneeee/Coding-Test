#include <stdio.h>
int n;
int arr[10000];
int fibo(n){
	if(n==0){
		return 0;
	}
	if(n==1||n==2)
		return 1;
	if(arr[n]!=0){
		return arr[n];
	}
	else{
		arr[n]=fibo(n-1)+fibo(n-2);
		return arr[n];
	}
	
}
int main(){
	scanf("%d",&n);
	printf("%d",fibo(n));
	return 0;
}
