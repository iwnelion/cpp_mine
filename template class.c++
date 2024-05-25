#include <iostream>
using namespace std;
//class template
//returns the biggest number

template <class T>
class myPair{
        T a, b;
    public:
        myPair(T first, T second){
            a=first;
            b=second;
        }
        T getMax();
};
template <class T>
T myPair<T>::getMax(){
    T retvalue=a>b? a:b;
    return retvalue;
}
int main(){
    myPair<int>myobj(100, 70);  //100
    cout<<myobj.getMax();
    return 0;
}
