#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter number";
    cin>>num;
    int ans=9;
    while(num>0){
        num%=num;
        if (num<ans)
        {
        ans=num;
        }
       num/=10; 
    }
    cout<<ans;
}