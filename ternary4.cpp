//greater than 50 and less than 150
#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number";
    cin>>num;
    (num<150 && num>50)?cout<<"greater than 50 and less than 150":cout<<"no";
    return 0;
}