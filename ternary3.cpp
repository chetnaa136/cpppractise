//divisible by both 5 and 10
#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number";
    cin>>num;
    (num%10==0 && num%5==0)?cout<<"divisible by both 5 and 10":cout<<"no";
    return 0;
}