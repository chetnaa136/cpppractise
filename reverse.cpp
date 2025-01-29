#include <iostream>
//reverse the string
using namespace std;
int main(){
int a=1234;
int digit1=a%10;
a/=10;
int digit2=a%10;
a/=10;
int digit3=a%10;
a/=10;
cout<<digit1<<digit2<<digit3<<a;
}