#include <iostream>
#include <string>
using namespace std;
//multilevel inheritance

class Animal{
    protected:
        string name;
        int age;
    public:
        Animal(string n, int a){
            name=n;
            age=a;
        }
        string getName(){
            return name;
        }
        int getAge(){
            return age;
        }
};
class Mammal:public Animal{
    protected:
        string hairColor;
    public:
        Mammal(string n, int a, string h):Animal(n, a){
            hairColor=h;
        }
        string getHairColor(){
            return hairColor;
        }
};
class Cat:public Mammal{
    protected:
        string breed;
    public:
        Cat(string n, int a, string h, string b):Mammal(n,a,b){
            breed=b;
        }
        void printInfo(){
            cout<<"name: "<<getName()<<endl;
            cout<<"age: "<<getAge()<<endl;
            cout<<"hair color: "<<getHairColor()<<endl;
            cout<<"breed: "<<breed<<endl;
        }
};
int main(){
    Cat thanasis("thanasis",2,"black and white","cat");
    thanasis.printInfo();

    return 0;
}
