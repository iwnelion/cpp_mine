#include <iostream>
using namespace std;
int plusFunc(int x,int y){
    return x+y;
}
double plusFunc(double x,double y){
    return x+y;
}

int main(){
    int num1=plusFunc(8,5);
    double num2=plusFunc(4.3,6.26);
        cout<<"int: "<<num1<<endl;  //13
        cout<<"double: "<<num2;     //10.56
    return 0;
}
