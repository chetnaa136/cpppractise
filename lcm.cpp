//least common multiple
#include <iostream>
using namespace std;
int main(){
int max,a,b;
cout<<"enter num1";
cin>>a;
cout<<"enter num2";
cin>>b;
max=(a>b)?a:b;
int i=max;
while(1){
    if (i%a==0 && i%b==0)
    {
        cout<<i;
        break;
    }
    i+=max;
    
}


return 0;

}