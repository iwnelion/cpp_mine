#include <iostream>
using namespace std;
//class methods (functions): inside
class myClass{
        public:
            void myMethod(){    //method (function)
                cout<<"Hello";
            }
    };
    
int main()
{
    myClass myObj;
    
    myObj.myMethod();   //runs: Hello
    return 0;
}
