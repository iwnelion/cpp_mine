#include <iostream>
using namespace std;
//swap using template

template <typename T>
void swap(T* x, T* y){
    cout<<"before::"<<endl;
    cout<<"x: "<<*x<<endl<<"y: "<<*y<<endl;
    T temp = *x;
    *x=*y;
    *y=temp;
    cout<<"after::"<<endl;
    cout<<"x: "<<*x<<endl<<"y: "<<*y<<endl;
}
int main(){
    int a=1;
    int b=4;
    swap(&a,&b);

    return 0;
}
