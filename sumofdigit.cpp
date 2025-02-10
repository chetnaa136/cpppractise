#include <iostream>
using namespace std;
int main(){
int num;
cout<<"enter num";
cin>>num;
int sum=0;
int digit;
while(num>0){
    digit =num%10;
    sum+=digit;
    num/=10;
}

    cout<<sum;
    return 0;
}