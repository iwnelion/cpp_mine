#include <iostream>
using namespace std;
//parameterized constructor

class paramConstruct{
    private:
        int x, y;
    public:
        paramConstruct(int x1, int y1){
            x=x1;
            y=y1;
        }
        int getX(){
            return x;
        }
        int getY(){
            return y;
        }
};
int main(){
    paramConstruct p1(17, 21);
    cout<<"p1.x: "<<p1.getX()<<endl<<"p1.y: "<<p1.getY()<<endl;
return 0;
}
