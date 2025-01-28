#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number";
    cin>>num;
    (num>50 && num%2==0)?cout<<"greater than 50 and divisible by 2":cout<<"no";
    return 0;
}