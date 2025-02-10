#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter number";
    cin>>num;
    int count=0;
    for(int i=1;i<=num;i++){
if(num%i==0){
   count++;
}
    }

    if(count==2){
        cout<<"prime number";

    }
    else{
        cout<<"not a prime number";
    }
    return 0;
}