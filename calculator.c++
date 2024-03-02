#include <iostream>
using namespace std;

int main()
{
    double num1=0,num2=0,sum=0;
    int mod1,mod2;              //ints for modulo
    cout<<"give me a number: ";
    cin>>num1;
    cout<<"give me another number: ";
    cin>>num2;
    sum=num1+num2;
    cout<<"sum: "<<sum<<endl;
    cout<<"subtraction: "<<num1-num2<<endl;
    cout<<"multiplication: "<<num1*num2<<endl;
    cout<<"division: "<<num1/num2<<endl;
    
    //modulo only int!!
    cout<<"give me two numbers to find their modulo: ";
    cin>>mod1>>mod2;            //scans two numbers in one line
    cout<<"modulo: "<<mod1%mod2;

    return 0;
}
