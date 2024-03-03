#include <iostream>
using namespace std;

int main()
{
    string letters[2][4]={
        {"a","b","c", "d"},
        {"e", "f", "g", "h"}
    };
    letters[0][2]="hi";
    cout<<letters[0][2];
    //runs: hi
    return 0;
}
