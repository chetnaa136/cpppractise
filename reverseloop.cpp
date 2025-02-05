#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter number";
    cin>>num;
    int rev=0;
    do{
        int digit=num%10;
        rev=rev*10+digit;
        num=num/10;
    }
    while(num>0);
    cout<<rev;
}