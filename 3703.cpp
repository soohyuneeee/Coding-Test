#include <iostream>
#include <algorithm>
using namespace std;
int n,m,sum;
int arr[101][101];
int memo[101][101];

         
int main() {
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>arr[i][j];
		}
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(i==1&&j==1){
				memo[1][1]=arr[1][1];
				continue;
			}
			memo[i][j]=max(memo[i-1][j],memo[i][j-1])+arr[i][j];
			
			}
			
		}
		cout<<memo[n][m];
		return 0;
	}
