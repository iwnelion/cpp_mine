#include <iostream>
using namespace std;

struct person{
    char name[50];
    int age;
    float salary;
};
int main(){
    person p1;

    cout<<"enter name: ";
    cin>>p1.name;
    cout<<"enter age: ";
    cin>>p1.age;
    cout<<"enter salary: ";
    cin>>p1.salary;

    cout<<"name: "<<p1.name<<endl<<"age: "<<p1.age<<endl<<"salary: "<<p1.salary<<endl;
    
return 0;
}
