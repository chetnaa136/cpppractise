#include <iostream>
using namespace std;
int main(){
    char alphabet;
    cout<<"enter an alphabet";
    cin>>alphabet;
    if(alphabet=='a' ||alphabet=='e'|| alphabet=='i' ||alphabet=='o' ||alphabet=='u'){
        cout<<"it is a vowel";
        
    }
    else{
        cout<<"it is a consonant";
    }
    return 0;
}