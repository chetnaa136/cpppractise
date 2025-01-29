#include <iostream>
//reverse the string
using namespace std;
int main(){
int a=1234;
int rev=0;
int digit1=a%10;
a/=10;
rev=rev*10+digit1;
int digit2=a%10;
a/=10;
rev=rev*10+digit2;
int digit3=a%10;
a/=10;
rev=rev*10+digit3;
rev=rev*10+a;
cout<<rev;
}