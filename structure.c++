#include <iostream>
using namespace std;
int main()
{
    struct{                 //structure declaration
        int num;            //member
        string stringName;  //member
    }myStructure;           //structure variable
    
    //assign values to structure members: "."
    myStructure.num=1;
    myStructure.stringName="Jo";
    
    //access structure members
    cout<<myStructure.num<<endl;
    cout<<myStructure.stringName<<endl;
    
    /* runs:
    1
    Jo  */
    return 0;
}
