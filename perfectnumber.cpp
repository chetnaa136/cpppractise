#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter num";
    cin>>num;
    int sum=0;
for (int i = 1; i < num; i++)
{
    if (num%i==0)
    {
       sum+=i;
    }  
}
if (sum==num)
{
  cout<<"it is a perfect number";
}
else{
    cout<<"not a perfect number";
}
return 0;

}
