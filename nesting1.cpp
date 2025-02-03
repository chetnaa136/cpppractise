#include <iostream>
using namespace std;
int main(){
    string a;
    cout<<"Enter company name";
    cin>>a;
    if (a=="Flipkart")
    {
        cout<<"Enter product or service";
        cin>>a;

    if (a=="Product")
    {
        cout<<"Enter product name";
        cin>>a;
        if (a=="Cloths")
        {
           cout<<2000;
        }
        else if (a=="Shoes")
        {
            cout<<1000;
        }
        else{
            cout<<"invalid";
        }
        
        
    }
    else if (a=="Service")
    {
        cout<<"not available";
    }
    else{
        cout<<"invalid";
    }
    
    
    }
    else{
        cout<<"invalid";

    }

}