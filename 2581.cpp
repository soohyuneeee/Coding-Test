#include <iostream>
using namespace std;
int n, m, i, k,sum,sum1,count,count1, ans;
int main(){
	int flag = 1;
	cin>>n>>m;
	for(i=n;i<=m;i++){
		count1 = 0;
		for(k=2;k<i;k++){
			
			if(i % k != 0){
				count1++;
			}
			
		}
		if(count1 == i-2){
			count++;
			sum=sum+i;
			if(flag==1) {
				ans = i;
				flag = 0;
			}
		}
		
	}
	if(count==0) cout<<-1;
	else {
		cout<<sum<<endl;
		cout<<ans<<endl;
	}
}

