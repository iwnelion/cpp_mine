#include <iostream>
using namespace std;

int main(){
    int k=10;
    while(k>0){
        cout<<k<<", ";
        --k;
    }
//runs: 10,9...1

cout<<endl<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;

    int l=10;
    for(l=1;l<=10;l++){
        cout<<l<<", ";
    }
//runs: 1, 2...10
    return 0;
}
