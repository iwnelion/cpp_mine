#include <iostream>
using namespace std;

int main()
{
    int myAge=25, votingAge=18;
    if (myAge>=votingAge){
        cout<<"old enough to vote";
    } else {
        cout<<"not old enough to vote";
    }
    //runs: old enough to vote (boolean wrapped in an if else statement)
    return 0;
}
