#include <iostream>
using namespace std;
int n,m,q;

int main(){
	cin>>n>>m;
	while(n!=0){
		q=n;
		n=m%n;
		m=q;
	}
	cout << m << endl;
	return 0;
}
