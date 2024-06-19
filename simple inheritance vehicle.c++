#include <iostream>
#include <string>
using namespace std;

class Vehicle{
    protected:
        string color;
        int maxSpeed;
    public:
        Vehicle(string c, int max){
            color=c;
            maxSpeed=max;
        }
        string getColor(){
            return color;
        }
        int getMaxSpeed(){
            return maxSpeed;
        }
};
class Car: public Vehicle{
    private:
        int numDoors;
    public:
        Car(string c, int max, int doors):Vehicle(c, max){
            numDoors=doors;
        }
        void printInfo(){
            cout<<"color: "<<getColor()<<endl;
            cout<<"max speed: "<<getMaxSpeed()<<endl;
            cout<<"number of doors: "<<numDoors<<endl;
        }
};
int main(){
    Car c("red", 1, 2);
    c.printInfo();

    return 0;
}
