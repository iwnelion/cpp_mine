#include <iostream>
using namespace std;
//2D dynamic memory allocation

int main(){
    int **p, nr, nc, r, c;
    cout<<"enter no. of rows: ";
    cin>>nr;
    cout<<endl<<"enter no. of columns: ";
    cin>>nc;
    cout<<endl;
    
    p= new int*[nr];
    for(r=0;r<nr;r++)
    p[r]= new int[nc];
    cout<<"enter nr: "<<nr<<endl;
    cout<<"enter nc: "<<nc<<endl;

    for(r=0;r<nr;r++)
    for(c=0;c<nc;c++)
    cin>>p[r][c];
    
    cout<<"elements: "<<endl;
    for(r=0;r<nr;r++){
        for(c=0;c<nc;c++)
            cout<<" - "<<p[r][c]<<" - ";
            cout<<endl;
    }
return 0;
}
