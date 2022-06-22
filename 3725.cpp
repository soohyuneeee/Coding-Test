#include <iostream>
#include <math.h>
using namespace std;
long long int f(long long int n){
	if(n==1)return 1;
	if(n==2)return 1;
	return (long long int)(pow(2,n-2))+f(n-2);
}
int main(){
	int n;
	cin>>n;
	cout<<f(n);
}
