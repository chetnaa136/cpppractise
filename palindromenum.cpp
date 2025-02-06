#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number";
    cin>>n;
    int a=n;
    int rev=0;
    while(n>0){
int digit=n%10;
rev=rev*10+digit;
n/=10;

    }
    cout<<"reverse is"<<rev;
    // if(a==rev){
    //     cout<<"it is a palindrome";
    // }
    // else{
    //     cout<<"not a palindrome";
    // }
    // (a==rev)?cout<<"it is a palindrome":cout<<"it is not a palindrome";


}