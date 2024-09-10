#include <iostream>
#include<cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand((unsigned) time(NULL));
    int random = (rand() % 10);
    int guess;
    int tries=5;

    do{
        cout<<"Guess the hidden number: ";
        cin>>guess;
        tries--;
        if(guess<0 || guess>9){
            cout<<"Invalid input! Enter a numbeer between 0 and 9."<<endl;
        }
    }
    while(guess!=random && tries!=0);
    if(guess==random){
        cout<<"Congratulations! The number was "<<random<<endl;
    }
    else{
        cout<<"You lost! The number was "<<random<<endl;
    }
    cout<<"Tries: "<<tries<<endl;

    return 0;
}
