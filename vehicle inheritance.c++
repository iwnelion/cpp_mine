#include <iostream>
using namespace std;

class Vehicle{
    public:
        void drive(){
            cout<<"i drive"<<endl;
        }
};
class Car:public Vehicle{
    public:
        void drive(){
            cout<<"im a car and i drive"<<endl;
        }
};
int main(){
    Car c;
    c.drive();

    return 0;
}
