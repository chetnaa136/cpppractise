#include <iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    cout<<"enter number";
    cin>>num1>>num2>>num3;
    (num1>num2 && num1>num3)?cout<<num1:(num2>num1 && num2>num3)?cout<<num2:cout<<num3;
    return 0;
}