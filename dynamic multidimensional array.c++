#include <iostream>
using namespace std;
//dynamic multidimensional array

int main(){
    int rows, cols;
    cout<<"rows and cols: ";
    cin>>rows>>cols;
    int **table = new int*[rows];
    
    for(int i=0;i<rows;i++){
        table[i] = new int[cols];
    }
    //deallocation:
    for(int i=0;i<rows;i++){
        table[i]=new int[cols];
        delete[] table[i];
    }
    delete[] table;
    table=NULL;
return 0;
}
