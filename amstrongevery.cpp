#include <iostream>
#include <cmath>
using namespace std;
int main(){
int num;
int digit;
int sum=0;
cout<<"enter number";
cin>>num;
int count=0;
int arm=num;
while(num>0){
num/=10;
count++;
}
num=arm;
int mult;

while(num>0)
{
    digit=num%10;
    sum+=pow(digit,count);
    num/=10;
}
if (sum==arm)
{
    cout<<"armstrong number";
}

else{
    cout<<"not an armstrong number";
}
return 0;
}