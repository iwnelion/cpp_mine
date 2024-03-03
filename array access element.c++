#include <iostream>
using namespace std;

int main()
{
    string letters[2][4]={
        {"a","b","c", "d"},
        {"e", "f", "g", "h"}
    };
    cout<<letters[0][2];
    //runs: c
    return 0;
}
