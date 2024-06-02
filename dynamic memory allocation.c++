#include <iostream>
using namespace std;
//dynamic memory allocation

int main(){
    int *p;
    p=new int(10);

    cout<<"p: "<<p<<endl;   //0x...
    cout<<"*p: "<<*p<<endl; //10
return 0;
}
