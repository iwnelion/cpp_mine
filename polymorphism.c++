#include <iostream>
using namespace std;
//polymorphism

class Father{
    private:
        int Age;
        string Job;
    protected:
        string Name;
    public:
        Father(string name, int age, string job){
            Name=name;
            Age=0;
            Job=job;
        }
        void getFather(){
            cout<<"name: "<<Name<<endl<<"age: "<<Age<<endl<<"job: "<<Job<<endl;
        }
        void CallFather(){
            cout<<"Father is called"<<endl;
        }
};
class Son:public Father{
    public:
    Son(string name, string job):Father(name, 0, job){}
    void Practice(){
        cout<<this->Name<<" is practicing as a Son"<<endl;      //"->" bc Name is Protected
    }
};
int main(){
    Son John("John","teacher");
    John.Practice();
    
    Father *son1=&John;            //we create a ptr of object John and we use it to call CallFather() from Father class
    son1->CallFather();            //calls CallFather() bc it's in parent class

return 0;
}
