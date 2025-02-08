#include <iostream>
using namespace std;
int main(){
    int a=0;
    int b=1;
    int n;
    cout<<"enter the nth number";
    cin>>n;
    int temp;
    for(int i=3;i<=n;i++){
temp=a+b;
a=b;
b=temp;
    }
    cout<<temp;
}