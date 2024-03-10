#include <iostream>
using namespace std;
int plusFuncInt(int x,int y){
    return x+y;
}
double plusFuncDouble(double x,double y){
    return x+y;
}

int main(){
    int num1=plusFuncInt(8,5);
    double num2=plusFuncDouble(4.3,6.26);
        cout<<"int: "<<num1<<endl;  //13
        cout<<"double: "<<num2;     //10.56
    return 0;
}
