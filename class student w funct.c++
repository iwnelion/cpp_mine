#include <iostream>
using namespace std;

class Student{
    public:
        string name;
        string course;
        int age;

        void intro(){
            cout<<"name: "<<name<<endl;
            cout<<"course: "<<course<<endl;
            cout<<"age: "<<age<<endl;
        }
};
int main(){
    Student s1;
    s1.name="jo";
    s1.course="cs";
    s1.age=23;

    s1.intro();

return 0;
}
