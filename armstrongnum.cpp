#include <iostream>
using namespace std;
int main(){
    int num;
cout<<"enter num";
cin>>num;
int sum=0;
int digit=0;
int multi;
int arm=num;
while (num>0)
{
    digit=num%10;
multi=digit*digit*digit;
sum=sum+multi;
num=num/10;
    
}
if (sum==arm)
{
    cout<<"armstrong number";
}
else{
cout<<"not an armstrong number";}
}
