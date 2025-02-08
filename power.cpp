#include <iostream>
using namespace std;
int  main(){
    int num;
    int pow;
    cout<<"enter number";
    cin>>num;
    cout<<"enter power";
    cin>>pow;
    int square=1;
    // while (pow>=1)
    // {
    //    square=square*num;
    //    pow--;
    // }
    for ( int i = 1; i<=pow; i++)
    {
        square=square*num;
    }
    
    
    cout<<square;
}