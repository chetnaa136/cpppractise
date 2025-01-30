#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a number";
    cin>>a;
    int rev=0;
    int rem=0;
    
        rem=a%10;
        rev=rev*10+rem;
        a=a/10;
    
    
cout<<rev;123

    return 0;
}