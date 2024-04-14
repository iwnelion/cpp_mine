#include <iostream>
using namespace std;

void calc(int a, int b, int *res){
    *res=a+b;
}
int main(){
    int a=3;
    int b=10;
    int sum=-1;
    cout<<"before: "<<sum<<endl;
    calc(a,b,&sum);
    cout<<"after: "<<sum;
    return 0;
}
//-1
//13
