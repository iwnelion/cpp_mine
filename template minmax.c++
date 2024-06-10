#include <iostream>
using namespace std;
//get max number using template

template <typename T>
T minmax(T x, T y){
    if(x>y){
        cout<<x<<" is greater than "<<y<<endl;
    }
    else if(x<y){
        cout<<y<<" is greater than "<<x<<endl;
    }
    else{
        cout<<x<<" is equal to "<<y<<endl;
    }
    return 0;
}
int main(){
    int a=3;
    int b=12;
    minmax(a,b);

    return 0;
}
