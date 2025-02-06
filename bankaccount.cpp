#include <iostream>
using namespace std;
int main(){
    string username;
    string password;
    cout<<"enter username";
    cin>>username;
    cout<<"enter password";
    cin>>password;
    string otp="#"+password+"$";
    cout<<"your one time otp is"<<otp;
    cout<<"enter otp";
    string oneotp;
    cin>>oneotp;
    if (otp==oneotp)
    {
        cout<<"your account balance is"<<"4320000";
    }
    else{
        cout<<"incorrect otp";
    }
    
return 0;
}