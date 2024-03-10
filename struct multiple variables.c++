#include <iostream>
using namespace std;
int main()
{
    struct{                 //structure declaration
        int age;            //member
        string name;        //member
    }myStruct1, myStruct2;  //multiple structure variables seperated w ","
    
    //assign values to structures' members: "."
    myStruct1.age=23;
    myStruct1.name="Jo";
    myStruct2.age=21;
    myStruct2.name="Heidegger";
    
    //access structure members
    cout<<myStruct1.name<<" "<<myStruct1.age<<endl;
    cout<<myStruct2.name<<" "<<myStruct2.age<<endl;
    
    /* runs:
    Jo 23
    Heidegger 21    */
    return 0;
}
