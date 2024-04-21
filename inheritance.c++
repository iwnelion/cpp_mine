#include <iostream>
using namespace std;

class Student{
    private:
        string name;
        string course;
        int age;
    public:
        void setName(string n){
            name=n;
        }
        string getName(){
            return name;
        }
        void setCourse(string c){
            course=c;
        }
        string getCourse(){
            return course;
        }
        void setAge(int a){
            age=a;
        }
        int getAge(){
            return age;
        }
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
class dev : Student{
    public:
        string favLang;
        dev(string n, string c, int a, string lang)
            :Student(n,c,a)
        {
            favLang=lang;
        }
        void fixBug(){
            cout<<getName()<<" fixed bug using "<<favLang<<endl;
        }
};
int main(){
    //Student s1=Student("jo","cs",23);
    //s1.intro();

    //s1.setAge(30);
    //cout<<s1.getName()<<" is "<<s1.getAge()<<endl;  //jo is 30

    dev d=dev("jo","phil",23,"c++");
    d.fixBug();     //jo fixed bug using c++
return 0;
}
