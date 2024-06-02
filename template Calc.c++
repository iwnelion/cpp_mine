#include <iostream>
using namespace std;
//template

template <class T>
class Calc{
    private:
        T num1, num2;
    public:
        Calc(T n1, T n2){
            num1=n1;
            num2=n2;
        }
        void displayResult(){
            cout<<"numbers: "<<num1<<" and "<<num2<<"."<<endl;
            cout<<num1<<" + "<<num2<<" = "<<add()<<endl;
            cout<<num1<<" - "<<num2<<" = "<<subtract()<<endl;
            cout<<num1<<" * "<<num2<<" = "<<multiply()<<endl;
            cout<<num1<<" / "<<num2<<" = "<<divide()<<endl;
        }
        T add(){
            return num1+num2;
        }
        T subtract(){
            return num1-num2;
        }
        T multiply(){
            return num1*num2;
        }
        T divide(){
            return num1/num2;
        }
};
int main(){
    Calc<int> intCalc(2, 1);
    Calc<float> floatCalc(2.4, 1.2);

    cout<<"int results: "<<endl;
    intCalc.displayResult();

    cout<<endl<<"float results: "<<endl;
    floatCalc.displayResult();

    return 0;
}
