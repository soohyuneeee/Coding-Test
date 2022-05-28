#include <iostream>
#define swap(x,y,temp) ((temp)=(x),(x)=(y),(y)=(temp))
using namespace std;
int n,i,j,least,temp;
int min,val;
int arr[1000];
int value[1000];



int main(){
	cin>>n;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	for(i=0;i<n-1;i++){
		least=i;
		
		for(j=i+1;j<n;j++){
			if(arr[j]<arr[least]){
			least=j;
		}
	}
			if(i!=least){
				swap(arr[i],arr[least],temp);
			}
		
	}
	for(i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
	
}
