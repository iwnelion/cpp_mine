#include <iostream>
#include <string>
using namespace std;

//last edit: 17/04/24

const char p1='X';
const char p2='O';
char tic[3][3];

void resetBoard();
void printBoard();
int checkFreeSpace();
void p1Move();
void p2Move();
char checkWin();
void printWin(char);

int main(){
cout<<"TIC TAC TOE GAME"<<endl;
char winner=' ';
char response=' ';

do{
    winner=' ';
    response=' ';
    resetBoard();
    while(winner==' ' && checkFreeSpace()!=0){
        printBoard();

        p1Move();
        winner=checkWin();
        if(winner!=' ' || checkFreeSpace()==0){
            break;
        }
      
      printBoard();

        p2Move();
        winner=checkWin();
        if(winner!=' ' || checkFreeSpace()==0){
            break;
        }
    }
    printBoard();
    printWin(winner);

    cout<<"Wanna play again? (y/n)";
    cin>>response;
}while(response=='y');

return 0;
}

void resetBoard(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            tic[i][j]=' ';
        }
    }
}

void printBoard(){
    cout<<" "<<tic[0][0]<<" | "<<tic[0][1]<<" | "<<tic[0][2]<<" ";
    cout<<endl<<"---|---|---"<<endl;
    cout<<" "<<tic[1][0]<<" | "<<tic[1][1]<<" | "<<tic[1][2]<<" ";
    cout<<endl<<"---|---|---"<<endl;
    cout<<" "<<tic[2][0]<<" | "<<tic[2][1]<<" | "<<tic[2][2]<<" ";
    cout<<endl;
}

int checkFreeSpace(){
    int freeSpace=9;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(tic[i][j]!=' '){
                freeSpace--;
            }
        }
    }
    return freeSpace;
}

void p1Move(){
    int x;
    int y;

    do{
    cout<<"enter row(1-3): ";
    cin>>x;
    x--;
    cout<<"enter column(1-3): ";
    cin>>y;
    y--;

    if(tic[x][y]!=' '){
        cout<<"invalid move"<<endl;
    }
    else{
        tic[x][y]=p1;
        break;
    }
    }while(tic[x][y]!=' ');
}

void p2Move(){
    int x;
    int y;

    if(checkFreeSpace()>0){
    do{
    cout<<"enter row(1-3): ";
    cin>>x;
    x--;
    cout<<"enter column(1-3): ";
    cin>>y;
    y--;

    if(tic[x][y]!=' '){
        cout<<"invalid move";
    }
    else{
        tic[x][y]=p2;
        break;
      }
    }while(tic[x][y]!=' ');
    }else{
        printWin(' ');
    }
}

char checkWin(){
    //rows
    for(int i=0;i<3;i++){
        if(tic[i][0]==tic[i][1] && tic[i][0]==tic[i][2]){
            return tic[i][0];
        }
    }
    //columns
    for(int i=0;i<3;i++){
        if(tic[0][i]==tic[1][i] && tic[0][i]==tic[2][i]){
            return tic[0][i];
        }
    }
    //diagonals
    if(tic[0][0]==tic[1][1] && tic[0][0]==tic[2][2]){
        return tic[0][0];
    }
    if(tic[0][2]==tic[1][1] && tic[0][2]==tic[2][0]){
        return tic[0][2];
    }
    return ' ';
}

void printWin(char winner){
    if(winner==p1){
        cout<<"Player 1 wins!! ";
    }
    else if(winner==p2){
        cout<<"Player 2 wins!! ";
    }
    else{
        cout<<"It's a tie!"<<endl;
    }
}
