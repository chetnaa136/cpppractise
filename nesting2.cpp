#include <iostream>
using namespace std;
//graph
int main(){
    int a;
    cout<<"enter node number";
    cin>>a;
    if (a==1)
    {
        cout<<"enter the next node";
        cin>>a;
        if (a==4)
        {
           cout<<"destination reached";
        }
        else if (a==2)
        {
            cout<<"enter next node";
            cin>>a;
            if (a==4)
            {
              cout<<"destination reached";
            }
            else if (a==3)
            {
                cout<<"enter next node";
                cin>>a;
                if (a==4)
                {
                    cout<<"destination reached";
                }
                else{
                    cout<<"invalid";
                }
            }
            else{
                cout<<"invalid";
            }
            
        }
        else if (a==3)
        {
           cout<<"enter next node";
           cin>>a;
           if (a==4)
           {
            cout<<"destination reached";
           }
           else if (a==2)
           {
            cout<<"enter next node";
            cin>>a;
            if (a==4)
            {
               cout<<"reached destination";
            }
            else{
                cout<<"invalid";
            }
            
           }
           else{
            cout<<"invalid";
           }
           
           
        }
        
        
        
    }
    else{
        cout<<"invalid";
    }
    
}