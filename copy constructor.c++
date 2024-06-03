#include <iostream>
using namespace std;
//copy constructor

class copyConstruct{
    private:
        int id;
    public:
        //parameterized constructor
        copyConstruct(int x){
            id=x;
        }
        void display(){
            cout<<"id: "<<id;
        }
};
int main(){
    copyConstruct obj1(10);
    obj1.display();
    cout<<endl;

    //creating an object of type copyConstruct from the obj
    copyConstruct obj2(obj1);
    obj2.display();
    //id: 10
    //id: 10
return 0;
}           
