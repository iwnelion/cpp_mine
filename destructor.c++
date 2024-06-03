#include <iostream>
using namespace std;
//destructor

class destructor{
    public:
        destructor(){
            cout<<"constructor executed"<<endl;
        }
        ~destructor(){
            cout<<"destructor executed"<<endl;
        }
};
int main(){
    destructor d;
return 0;
}
