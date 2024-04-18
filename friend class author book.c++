#include <iostream>
using namespace std;

class Author{
        char aname[20];
        friend class Book;
};
class Book{
        char bname[20];
        float prize;
        Author a;
    public:
        void getdata(){
            cout<<"enter author's name: ";
            cin>>a.aname;
            cout<<"enter book's name: ";
            cin>>bname;
            cout<<"enter prize: ";
            cin>>prize;
        }
        void DisplayData(){
            cout<<"book name: "<<bname<<endl;
            cout<<"author name: "<<a.aname<<endl;
            cout<<"prize: "<<prize<<endl;
        }
};
int main(){
    Book b;
    b.getdata();
    cout<<endl<<endl;
    b.DisplayData();

    system("pause>0");
}
