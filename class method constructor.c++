#include <iostream>
using namespace std;
//class methods (functions): constructor
class myClass{
    public:
    myClass(){          //constructor
        cout<<"hello";
    }
};
int main(){
    myClass myObj;      //by creating an object, we call the constructor
    return 0;
//hello
}
