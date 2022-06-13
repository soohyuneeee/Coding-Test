#include <iostream>
int sum,num;
using namespace std;
int f(int n){
    if(n==1) return sum+1;
    sum+=n;
    return f(n-1);
}
int main(){
    cin>>num;
    cout<<f(num);
    return 0;
}
