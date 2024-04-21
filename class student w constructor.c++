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
        Student(string n, string c, int a){
            name = n;
            course = c;
            age = a;
        }
};
int main(){
    Student s1=Student("jo","cs",23);
    s1.intro();

return 0;
}
