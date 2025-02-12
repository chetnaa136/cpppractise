#include <iostream>
using namespace std;
int main(){
    int a,r,n;
    cout<<"enter first term";
    cin>>a;
    cout<<"enter n";
    cin>>n;
    cout<<"enter r";
    cin>>r;

    for(int i=1;i<=n;i++){
cout<<a<< " ";
a=a*r;

    }
return 0;
}