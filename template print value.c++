#include <iostream>
using namespace std;
//print value using template

template <typename T>
void printValue(T value){
    cout<<"the value is: "<<value<<endl;
}
int main(){
    int a=10;
    printValue(a);

    double b=20.5;
    printValue(b);

    string str="hello";
    printValue(str);

    return 0;
}
