#include <iostream>
using namespace std;

struct person{
    char name[50];
    int age;
    float salary;
};

void displayData(person);

int main(){
    person p1;

    cout<<"enter name: ";
    cin>>p1.name;
    cout<<"enter age: ";
    cin>>p1.age;
    cout<<"enter salary: ";
    cin>>p1.salary;

    displayData(p1);  //function call w struct as an argument

return 0;
}

void displayData(person p1){
    cout<<endl<<"displaying data:"<<endl;
    cout<<"name: "<<p1.name<<endl<<"age: "<<p1.age<<endl<<"salary: "<<p1.salary<<endl;

}
