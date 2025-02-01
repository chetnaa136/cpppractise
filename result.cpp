#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number";
    cin>>a;
     if(a<=100 && a>60){
        cout<<"A";
     }
     else if(a<=60 && a>40){
cout<<"B";
     }
     else if(a<=40 && a>=0){
        cout<<"D";

     }
     else{
        cout<<"invalid";
     }
}