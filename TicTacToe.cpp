#include<iostream>
using namespace std;

void dispBoard(char a[3][3])
{
    
     cout<<"---------------\n";
    for(int i=0;i<3;i++)
    {
       cout<<" | ";

        for(int j=0;j<3;j++)
        {
            cout<<a[i][j]<<" | ";

        }
        cout<<"\n--------------\n";
    }

}

bool checkWin(char a[3][3],char player)
{
    for(int i=0;i<3;i++)
    {
        if(a[i][0]==player && a[i][1]==player && a[i][2]==player)
        return true;
        if(a[0][i]==player && a[1][i]==player && a[2][i]==player)
        return true;
    }
    if(a[0][0]==player && a[1][1]==player && a[2][2]==player)
        return true;
    if(a[0][2]==player && a[1][1]==player && a[2][0]==player)
        return true;
    return false;
}
int main()
{
    char a[3][3]={{' ', ' ', ' '} , {' ', ' ', ' '} , {' ', ' ', ' '}  };
    char player='X';
    int row,col;
    int turn;

    cout<<"Welcome to tic-tac-toc Game \n";

    for(turn=0;turn<9;turn++)
    {
         dispBoard(a);
    
   
   while(1)
   {
    cout<<"player  "<<player<<"  ,Enter row(0-2)and column(0-2):";
    cin>>row>>col;

    if(a[row][col]!=' ' || row < 0 || row > 2 || col < 0 ||col > 2)
    {
        cout<<"Invalid movie .Try again .\n";

    }
    else{
        break;
    }
   }

   a[row][col]=player;
   if(checkWin(a,player)){
    cout<<"player "<<player <<" wins !\n";
     
    break;
   }

   player=(player=='X')?'O':'X';

    }

    dispBoard(a);
    cout << "Play the game again with us!!\n\n" << endl;

    if(turn==9 && !checkWin(a,'X') && !checkWin(a,'O'))
    {
        cout<<"It's a draw !\n";
         cout << "Play the game again with us!!\n\n" << endl;
    }


    return 0;

}