#include <iostream>
using namespace std;
void f(int n){
    if(n==1){
        cout<<1<<endl;
        return ;
        
    }
    if(n%2==1){
        f(n*3+1);
        cout<<n<<endl;
        
    }
    else {
        f(n/2);
        cout<<n<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    f(n);
    return 0;
}
