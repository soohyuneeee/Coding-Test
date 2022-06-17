//
// Created by SW2130 on 2022-06-15.
//
#include <iostream>
using namespace std;
int n;
int arr[21][21];

int f(int x,int y){
    if(arr[x][y]!=0){
        return arr[x][y];
    }
    else{
        return arr[x][y]=f(x,y-1)-f(x-1,y-1);
    }

}



int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i][0];
    }
    f(n-1,n-1);
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<arr[i][j]<<' ';
        }
        cout<<endl;
    }
}


