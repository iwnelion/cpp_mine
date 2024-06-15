#include <iostream>
using namespace std;
//multiple inheritance
class vehicle{
    public:
        void whatami(){
            cout<<"im a vehicle"<<endl;
        }
};
class airplane{
    public:
        void ifly(){
            cout<<"i fly"<<endl;
        }
};
class flyingVehicle:public vehicle, public airplane{
    public:
        void imall(){
            cout<<"i can do both"<<endl;
        }
};
int main(){
    flyingVehicle f;
    f.whatami();
    f.ifly();
    f.imall();

    return 0;
}
