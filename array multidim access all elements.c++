#include <iostream>
using namespace std;

int main()
{
    string letters[2][4]={
        {"a","b","c", "d"},
        {"e", "f", "g", "h"}
    };
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            cout<<letters[i][j]<<endl;
        }
    }
    //runs all the array elements of all dimensions
    return 0;
}
