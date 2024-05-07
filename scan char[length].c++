#include <iostream>
using namespace std;

int main(){
    char s[5];
    cout<<"s: ";
    cin>>s;
    cout<<"s: "<<s;

    return 0;
}
// if i enter more than 5 characters i'll get: 
// Exception has occurred.
// Segmentation fault
