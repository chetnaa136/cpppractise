#include <iostream>
using namespace std;
//greater k liye smallest number aur smaller k liye largest number
//9 ki jagah koi bhi number chal jaega 
int main(){
    int n;
    cout<<"enter number";
    cin>>n;
    int num;
    int ans=0;
    while(n>0){
        num=n%10;
        if(num>ans){
            ans=num;
        }
        n/=10;

    }
    cout<<ans;
}