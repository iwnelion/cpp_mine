#include <iostream>
using namespace std;
//function overloading

void display (int n1, double n2){
    cout<<"int num: "<<n1<<" & ";
    cout<<"double num: "<<n2<<endl;
}
void display (double var){
    cout<<"double num: "<<var<<endl;
}
void display (int var){
    cout<<"int num: "<<var<<endl;
}

int main(){
int a=5;
double b=5.5;

display(a);
display(b);
display(a,b);

return 0;
}
