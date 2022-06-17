//
// Created by SW2130 on 2022-06-15.
//
#include <iostream>
using namespace std;
int a,m;
int memo[10001][10001];
int f(int n,int k){
    if(memo[n][k]!=0){
        return memo[n][k];
    }
    if(n==k){
        return memo[n][k]=1;
    }
    else if(k==1){
        return memo[n][k]=n;
    }
    if(memo[n][k]==0){
        return memo[n][k]= (f(n-1,k-1)+f(n-1,k) ) % 100000007;
    }



}
int main(){
    cin>>a>>m;
    cout<<f(a,m);
    return 0;

}


