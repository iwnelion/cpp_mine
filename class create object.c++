#include <iostream>
using namespace std;
//class
class myClass{      //class
        public:         //access the speciafier
        int num;        //attributes (variables)
        string strng;   //  >>          >>
    };
int main()
{
    myClass myObj;      //create object of myClass
    
    myObj.num=15;       //access attributes & set values
    myObj.strng="txt";
    
    cout<<myObj.num<<endl<<myObj.strng; //print values
    //15
    //txt
    return 0;
}
