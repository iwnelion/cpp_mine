#include <iostream>
#include <string>
using namespace std;
//inheritance and constructors

class person{
    protected:
        string name;
    public:
        person(string N):name(N){
            cout<<"person constructor called"<<endl;
        }
        void display(){
            cout<<"name: "<<name<<endl;
        }
};
class student:public person{
    private:
        int id;
    public:
        student(string N, int ID):person(N), id(ID){
            cout<<"student constructor called"<<endl;
        }
        void display(){
            person::display();
            cout<<"id: "<<id<<endl;
        }
};
int main(){
    student s("John",123);
    s.display();

    return 0;
}
