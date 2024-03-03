#include <iostream>
using namespace std;

int main()
{
    int i=0,l=0;
    for(i=0;i<5;i++){
        cout<<i<<endl;
    }
    //runs: 0...4
    cout<<"@@@@@@"<<endl;
    for(l=0;l<=10;l+=2){ //i=i+2
        cout<<l<<endl;
    }
    //runs:0 2 3 6 8 10
    return 0;
}
