#include <iostream>
#include<windows.h>
using namespace std;
void board(char m[]);
int checkwin(char m[]);
/* the m array stores the game vlues for players they are initialized to b
numbers to select by d players to convert them to 'x' or 'o' array is passed to 
function for verification and board printing
*/
int main()
{ char m[10]={'0','1','2','3','4','5','6','7','8','9'};
int k;
int player;
char mark;
int y;
   // cout<<"\t     |     |     \n";
   int level=1;
   do{level++;
     system("cls");
   board(m);
   if (level%2==0){
    player=1;
    mark='x';
   }
   else{
    player=2;
    mark='o';
   }
    cout << "Enter Choice Player"<<player<<" =" ;
    cin>>k;
    while(m[k]=='x'||m[k]=='o')
    {
       cout<<"enter a different choice=";
       cin>>k;
    }

    m[k]=mark;
y=checkwin(m);
if(y==1){
        system("cls");
board(m);
cout<<"\a";
       cout<<"player "<<player<<"  WINS CONGRATS :)";
break;

}

   }while(level<=10);

//cin>>mark;
    return 0;
}
// This function checks the win 
int checkwin(char m[])
{
    if(m[1]==m[2]&&m[2]==m[3])
        return 1;
    else if(m[4]==m[5]&&m[5]==m[6])
        return 1;
    else if(m[7]==m[8]&&m[8]==m[9])
        return 1;
    else if(m[1]==m[4]&&m[4]==m[7])
        return 1;
    else if(m[2]==m[5]&&m[5]==m[8])
        return 1;
    else if(m[3]==m[6]&&m[6]==m[9])
        return 1;
    else if(m[1]==m[5]&&m[5]==m[9])
        return 1;
    else if(m[7]==m[5]&&m[5]==m[3])
        return 1;
        else
            return -1;
}
//this functiondraws d board
void board(char m[])
{
    cout<<"\t\t ==TIC TAC TOE==\n\n\n";
   cout<<"Player 1= X Player 2 = O\n\n\n";
    cout<<"\t     |     |     \n";
    cout<<"\t  "<<m[1]<<"  |  "<<m[2]<<"  |  "<<m[3]<<"   \n";
    cout<<"\t_____|_____|_____\n";
        cout<<"\t     |     |     \n";
    cout<<"\t  "<<m[4]<<"  |  "<<m[5]<<"  |  "<<m[6]<<"   \n";
    cout<<"\t_____|_____|_____\n";
        cout<<"\t     |     |     \n";
    cout<<"\t  "<<m[7]<<"  |  "<<m[8]<<"  |  "<<m[9]<<"   \n\n\n";
   // cout<<"\t_____|_____|_____\n";
}
