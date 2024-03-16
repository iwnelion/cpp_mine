#include <iostream>
using namespace std;
//class methods (functions): parameters
class car{
    public:
    int speed(int maxSpeed);
};

int car::speed(int maxSpeed){
    return maxSpeed;
}

int main(){
    car myObj;
    cout<<myObj.speed(200);
    return 0;
}
