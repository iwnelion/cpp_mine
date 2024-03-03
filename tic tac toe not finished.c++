#include <iostream>
using namespace std;

int main()
{
    int x,o,y;
    char tic[3][3][3];
    /*
    |1|2|3|
    |4|5|6|
    |7|8|9|
    */
    cout<<"TIC TAC TOE GAME"<<endl<<"|1|2|3|"<<endl<<"|4|5|6|"<<endl<<"|7|8|9|"<<endl;
    cout<<"player x: ";
    cin>>x;
    switch(x){
        case 1:{
            cout<<"|X|2|3|"<<endl<<"|4|5|6|"<<endl<<"|7|8|9|";
            cout<<endl<<"player o: ";
            cin>>o;
            switch(o){
                case 1:
                    cout<<"place taken"<<endl;
                    break;
                case 2:
                    cout<<"|X|O|3|"<<endl<<"|4|5|6|"<<endl<<"|7|8|9|";
                    break;
                        cout<<"player x: ";
                        cin>>y;
                        switch(y){
                            case 3:
                                cout<<"|X|O|X|"<<endl<<"|4|5|6|"<<endl<<"|7|8|9|";
                                break;
                            case 4:
                                cout<<"|X|O|3|"<<endl<<"|X|5|6|"<<endl<<"|7|8|9|";
                                break;
                            case 5:
                                cout<<"|X|O|3|"<<endl<<"|4|X|6|"<<endl<<"|7|8|9|";
                                break;
                            case 6:
                                cout<<"|X|O|3|"<<endl<<"|4|5|X|"<<endl<<"|7|8|9|";
                                break;
                            case 7:
                                cout<<"|X|O|3|"<<endl<<"|4|5|6|"<<endl<<"|X|8|9|";
                                break;
                            case 8:
                                cout<<"|X|O|3|"<<endl<<"|4|5|6|"<<endl<<"|7|X|9|";
                                break;
                            case 9:
                                cout<<"|X|O|3|"<<endl<<"|4|5|6|"<<endl<<"|7|8|X|";
                                break;
                        }
                        break;
                case 3:
                    cout<<"|X|2|O|"<<endl<<"|4|5|6|"<<endl<<"|7|8|9|";
                    break;
                case 4:
                    cout<<"|X|2|3|"<<endl<<"|O|5|6|"<<endl<<"|7|8|9|";
                    break;
                case 5:
                    cout<<"|X|2|3|"<<endl<<"|4|O|6|"<<endl<<"|7|8|9|";
                    break;
                case 6:
                    cout<<"|X|2|3|"<<endl<<"|4|5|O|"<<endl<<"|7|8|9|";
                    break;
                case 7:
                    cout<<"|X|2|3|"<<endl<<"|4|5|6|"<<endl<<"|O|8|9|";
                    break;
                case 8:
                    cout<<"|X|2|3|"<<endl<<"|4|5|6|"<<endl<<"|7|O|9|";
                    break;
                case 9:
                    cout<<"|X|2|3|"<<endl<<"|4|5|6|"<<endl<<"|7|8|O|";
                    break;
            }
            break;}
        case 2:
            cout<<"|1|X|3|"<<endl<<"|4|5|6|"<<endl<<"|7|8|9|";
            break;
        case 3:
            cout<<"|1|2|X|"<<endl<<"|4|5|6|"<<endl<<"|7|8|9|";
            break;
        case 4:
            cout<<"|1|2|3|"<<endl<<"|X|5|6|"<<endl<<"|7|8|9|";
            break;
        case 5:
            cout<<"|1|2|3|"<<endl<<"|4|X|6|"<<endl<<"|7|8|9|";
            break;
        case 6:
            cout<<"|1|2|3|"<<endl<<"|4|5|X|"<<endl<<"|7|8|9|";
            break;
        case 7:
            cout<<"|1|2|3|"<<endl<<"|4|5|6|"<<endl<<"|X|8|9|";
            break;
        case 8:
            cout<<"|1|2|3|"<<endl<<"|4|5|6|"<<endl<<"|7|X|9|";
            break;
        case 9:
            cout<<"|1|2|3|"<<endl<<"|4|5|6|"<<endl<<"|7|8|X|";
            break;
    }
    
    return 0;
}
