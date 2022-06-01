#include <iostream>
using namespace std;
int n,m,i;
int arr[10];
int dp[41]={0,1,1};
int main(){
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=3;i<41;i++){
		dp[i]=dp[i-1]+dp[i-2];
	}
	for(i=0;i<n;i++){
		if(arr[i]==0) cout<<1<<' '<<0<<endl;
		else if(arr[i]==1) cout<<0<<' '<<1<<endl;
		else cout<<dp[arr[i]-1]<<' '<<dp[arr[i]-2]+dp[arr[i]-1]<<endl;
	}
	return 0;
}
