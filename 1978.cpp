#include <iostream>
using namespace std; 
int arr[100];
int i,n,j,count,count2;
//�Ҽ��� 1�� �ڱ��ڽ����θ� ������. 
int main(){
	cin>>n;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	for(i=0;i<n;i++){
		count=0;
		for(j=2;j<arr[i];j++){
			if(arr[i]==1)
			continue;
			if(arr[i]%j!=0){
				count++;
			}
			
		}
		if(count==arr[i]-2)
				count2++;
	}
	cout<<count2;
	
}
