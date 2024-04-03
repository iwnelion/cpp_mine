#include <iostream>
using namespace std;

struct Smartphone{
    string name;
    int storage;
    string color;
    float price;
};

struct Person{
    string name;
    int age;
    Smartphone smartphone;
};

void printSmartphone(Smartphone smartphone){
    cout<<"name: "<<smartphone.name<<endl;
    cout<<"storage space: "<<smartphone.storage<<"GB"<<endl;
    cout<<"color: "<<smartphone.color<<endl;
    cout<<"price: "<<smartphone.price<<endl;
}

void printPerson(Person person){
    cout<<"name: "<<person.name<<endl;
    cout<<"age: "<<person.age<<endl;
    printSmartphone(person.smartphone);    
}

int main(){
    Smartphone smartphone;
    smartphone.name="iPhone12";
    smartphone.storage=32;
    smartphone.color="black";
    smartphone.price=999.99;

    Smartphone smartphone2;
    smartphone2.name="samsung";
    smartphone2.storage=64;
    smartphone2.color="blue";
    smartphone2.price=777.99;

    printSmartphone(smartphone);
    cout<<"smartphone2"<<endl;
    printSmartphone(smartphone2);
    cout<<"---------------"<<endl;

    Person p;
    p.name="Thanasis the cat";
    p.age=1;
    p.smartphone=smartphone2;

    printPerson(p);
    
return 0;
}
