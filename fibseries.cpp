#include <iostream>
using namespace std;
int main(){
int f1=0;
int f2=1;
int n;
cout<<"enter number";
cin>>n;
int num;
//break continue and return difference
for(int i=1;i<=n;i++){
    if(i==1){
        cout<<f1;
        continue;
    }
    if(i==2){
        cout<<f2;
        continue;
    }
num=f1+f2;
f1=f2;
f2=num;
cout<<num;

}
    return 0;
}