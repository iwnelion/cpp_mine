#include <iostream>
using namespace std;

//inheritance
class Student{
    private:
        int id;
        char name[20];
    public:
        void getstu(){
            cout<<"enter stuid: ";
            cin>>id;
            cout<<"enter student name: ";
            cin>>name;
            cout<<endl;
        }
        void printstudent(){
            cout<<"student id: "<<id<<endl;
            cout<<"student name: "<<name<<endl;
        }
};
// : inheritance operator
class Details:public Student{
        float height, weight;
    public:
        void DetailsData(){
            getstu();
                cout<<"enter height: ";
                cin>>height;
                cout<<endl;
                cout<<"enter weight: ";
                cin>>weight;
                cout<<endl;
        }
        void PrintDetailsData(){
            printstudent();
                cout<<"height: "<<height<<endl;
                cout<<"weight: "<<weight<<endl;
        }
};
int main(){
    Details d;
    //instead of d.getstu();

    d.DetailsData();
    //instead of d.printstudent();

    d.PrintDetailsData();

    system("pause>0");
}
