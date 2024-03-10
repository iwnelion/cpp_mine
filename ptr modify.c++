#include <iostream>
#include <string>
using namespace std;
int main(){
    string food="pizza";
    string *ptr=&food;
    
    cout<<food<<endl;   //pizza
    cout<<&food<<endl;  //0x7ffde...
    cout<<*ptr<<endl;   //pizza
            //change the value of the pointer:
            *ptr="hamburger";
            cout<<*ptr<<endl; //hamburger
    cout<<food;         //hamburger !It changes the value of the original variable
    return 0;
}
