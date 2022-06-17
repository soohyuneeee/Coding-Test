//
// Created by SW2130 on 2022-06-15.
//
#include <iostream>
using namespace std;
int n;
int arr[21][21];




int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i][0];
    }
    for(int i=0;i<n;i++){
        for(int j=1;j<=i;j++) {
            arr[i][j] =arr[i][j - 1]- arr[i - 1][j - 1];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<arr[i][j]<<' ';
        }
        cout<<endl;
    }
}


