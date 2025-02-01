#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a number";
    cin>>num;
    if(num>0){
        cout<<"number is positive";

    }
    else if(num==0){
        cout<<"num ios zero";
    }
    else if (num<0)
    {
      cout<<"num is negative";
    }
    else{
        "num is invalid";
    }
   return 0; 
}