#include <iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter your marks";
    cin>>marks;
if (marks>80 && marks<=100)
{
    cout<<"A";
}
else if (marks>60 && marks<=80)
{
    cout<<"B";
}
else if (marks>40 && marks<=60)
{
    cout<<"C";
}
else{
    cout<<"D";
}
return 0;
}