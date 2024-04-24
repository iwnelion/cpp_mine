#include <iostream>
using namespace std;
//num swap w/o 3rd variable

int main(){
int a=10;
int b=20;

cout<<"before swap: "<<endl;
cout<<"a: "<<a<<endl<<"b: "<<b<<endl;

a=a+b; //30
b=a-b; //30-20=10
a=a-b; //30-10=20
cout<<"after swap: "<<endl;
cout<<"a: "<<a<<endl<<"b: "<<b<<endl;

return 0;
}
