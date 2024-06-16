#include <iostream>
using namespace std;
class person{
    public:
        //default constructor
        person(){
            name="jo";
            age=23;
            cout<<name<<" "<<age<<endl;
        }
        
        //parameterized constructor
        person(string n, int a){
            name=n;
            age=a;
            cout<<name<<" "<<age<<endl;
        }
        
        //copy constructor
        person(const person& other){
            name=other.name;
            age=other.age;
            cout<<name<<" "<<age<<endl;
        }
    private:
        string name;
        int age;
};
int main()
{
    //calling the constructors
    person p1;  //default
    person p2("john", 21); //parameterized
    person p3(p2); //copy (takes p2 as an argument)
    
    return 0;
}
