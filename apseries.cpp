#include <iostream>
using namespace std;
int main(){
int a;
cout<<"enter first digit";
cin>>a;
int dif;
cout<<"enter difference";
cin>>dif;
int n;
cout<<"enter n terms";
cin>>n;
int digit;
for (int i = 0; i <n; i++)
{
   digit=(a+i*dif) ;
   cout<<digit<<" ";
}


}