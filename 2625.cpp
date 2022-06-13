#include <iostream>
using namespace std;
int count,n;
int f(){
    for(int a=1;a<=n;a++){
        for(int b=a;b<=n;b++){
            for(int c=b;c<=n;c++){
                if(a+b+c==n&&a+b>c)
                    count++;
            }
        }
    }
    return count;
}

int main(){
    cin>>n;
    cout<<f();
}
