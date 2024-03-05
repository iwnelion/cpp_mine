#include <iostream>
using namespace std;
#include <string>

int main()
{
    int x,o,y,a,i,j,n;
    char tic[3][3]={{'1','2','3'},
                    {'4','5','6'},
                    {'7','8','9'}};
    /*
    |1|2|3|
    |4|5|6|
    |7|8|9|
    */
cout<<"TIC TAC TOE GAME"<<endl<<"|1|2|3|"<<endl<<"|4|5|6|"<<endl<<"|7|8|9|";
do{
    cout<<endl<<"player X: ";
    cin>>a;
    if (a==1){
        tic[0][0]='X';
    }
    else if (a==2){
        tic[0][1]='X';
    }
    else if (a==3){
        tic[0][2]='X';
    }
    else if (a==4){
        tic[1][0]='X';
    }
    else if (a==5){
        tic[1][1]='X';
    }
    else if (a==6){
        tic[1][2]='X';
    }
    else if (a==7){
        tic[2][0]='X';
    }
    else if (a==8){
        tic[2][1]='X';
    }
    else if (a==9){
        tic[2][2]='X';
    }
    else {
        cout<<"wrong entry";
    }
        for(i=0;i<1;i++){
        for(j=0;j<3;j++){
        cout<<"|"<<tic[i][j]<<"|";
        }}
        cout<<endl;
        for(i=1;i<2;i++){
        for(j=0;j<3;j++){
        cout<<"|"<<tic[i][j]<<"|";
        }}
        cout<<endl;
        for(i=2;i<3;i++){
        for(j=0;j<3;j++){
        cout<<"|"<<tic[i][j]<<"|";
        }}
    cout<<endl<<"player O: ";
    cin>>a;
    if (a!='X'){
    if (a==1){
        tic[0][0]='O';
    }
    else if (a==2){
        tic[0][1]='O';
    }
    else if (a==3){
        tic[0][2]='O';
    }
    else if (a==4){
        tic[1][0]='O';
    }
    else if (a==5){
        tic[1][1]='O';
    }
    else if (a==6){
        tic[1][2]='O';
    }
    else if (a==7){
        tic[2][0]='O';
    }
    else if (a==8){
        tic[2][1]='O';
    }
    else if (a==9){
        tic[2][2]='O';
    }
        {
        for(i=0;i<1;i++){
        for(j=0;j<3;j++){
        cout<<"|"<<tic[i][j]<<"|";
        }}
        cout<<endl;
        for(i=1;i<2;i++){
        for(j=0;j<3;j++){
        cout<<"|"<<tic[i][j]<<"|";
        }}
        cout<<endl;
        for(i=2;i<3;i++){
        for(j=0;j<3;j++){
        cout<<"|"<<tic[i][j]<<"|";
        }}
    }
    }
} while (!(
    (tic[0][0] == 'X' && tic[0][1] == 'X' && tic[0][2] == 'X') || // first row
    (tic[1][0] == 'X' && tic[1][1] == 'X' && tic[1][2] == 'X') || // second row
    (tic[2][0] == 'X' && tic[2][1] == 'X' && tic[2][2] == 'X') || // third row
    (tic[0][0] == 'X' && tic[1][0] == 'X' && tic[2][0] == 'X') || // first column
    (tic[0][1] == 'X' && tic[1][1] == 'X' && tic[2][1] == 'X') || // second column
    (tic[0][2] == 'X' && tic[1][2] == 'X' && tic[2][2] == 'X') || // third column
    (tic[0][0] == 'X' && tic[1][1] == 'X' && tic[2][2] == 'X') || // diagonal from top-left to bottom-right
    (tic[0][2] == 'X' && tic[1][1] == 'X' && tic[2][0] == 'X')    // diagonal from top-right to bottom-left
) && !(
    (tic[0][0] == 'O' && tic[0][1] == 'O' && tic[0][2] == 'O') || 
    (tic[1][0] == 'O' && tic[1][1] == 'O' && tic[1][2] == 'O') || 
    (tic[2][0] == 'O' && tic[2][1] == 'O' && tic[2][2] == 'O') || 
    (tic[0][0] == 'O' && tic[1][0] == 'O' && tic[2][0] == 'O') || 
    (tic[0][1] == 'O' && tic[1][1] == 'O' && tic[2][1] == 'O') || 
    (tic[0][2] == 'O' && tic[1][2] == 'O' && tic[2][2] == 'O') || 
    (tic[0][0] == 'O' && tic[1][1] == 'O' && tic[2][2] == 'O') || 
    (tic[0][2] == 'O' && tic[1][1] == 'O' && tic[2][0] == 'O')
));
    return 0;
}
