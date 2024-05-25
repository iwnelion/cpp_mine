#include <iostream>
using namespace std;
//function template
//funct that returns the biggest number

template <class T>
T getMax(T a, T b){
    T result;
    result=(a>b)? a:b;
    return (result);
}
int main(){
    int i=5, j=6, k;
    float f=2.4, l=4.4, n;
    k=getMax<int>(i,j);
    n=getMax<float>(f,l);
    cout<<"Max of i and j is: "<<k<<endl;   //6
    cout<<"Max of f and l is: "<<n<<endl;   //4.4
    return 0;
}
