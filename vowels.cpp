#include <iostream>
using namespace std;
int main(){
    char alphabet;
    cout<<"enter alphabet";
    cin>>alphabet;
    (alphabet=='a' ||alphabet=='e'|| alphabet=='i' ||alphabet=='o' ||alphabet=='u')?cout<<"vowel":cout<<"constant";
    return 0;
}