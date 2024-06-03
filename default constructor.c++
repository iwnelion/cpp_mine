#include <iostream>
using namespace std;
//default constructor

class construct{
    public:
        int a, b;
        construct(){
            a=10;
            b=20;
        }
};
int main(){
    construct c;
    cout<<"a: "<<c.a<<endl<<"b: "<<c.b;
return 0;
}
