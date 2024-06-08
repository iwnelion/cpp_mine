#include <iostream>
using namespace std;
//inheritance

class animal{
    public:
        void eat(){
            cout<<"i eat"<<endl;
        }
        void sleep(){
            cout<<"i sleep"<<endl;
        }
};
class cat : public animal{
    public:
        void meow(){
            cout<<"meow"<<endl;
        }
};
int main(){
    cat c1;
    c1.eat();
    c1.sleep();
    c1.meow();

return 0;
}
