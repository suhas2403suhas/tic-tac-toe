#include<iostream>
using namespace std;
void dis();
bool chk();
void chang();
int p;
//char play;
bool tie;
bool ch=false;
string n1,n2;
char toy='x';
char a[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
void chang()
{
 {if(toy=='x')
 cout<<n1<<"  enter the position\n";
 else
 cout<<n2<<"  enter the position\n";}
 cin>>p;
 int r= (p-1)/3;
 int c= (p-1)%3;
 if(a[r][c]!='x'&&a[r][c]!='o')
 {if(toy=='x')
   {a[r][c]='x';
   toy='o';}
   else
   {a[r][c]='o';
   toy='x';}
 dis();}
 ch = chk();
}
bool chk()
{
  int c=0;
  tie = false;
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      if(a[i][j]=='x'||a[i][j]=='o')
      c++;
    } 
  }
  if(c==9)
  tie = true;
    for(int i=0;i<3;i++)
    {
        if(a[i][0]==a[i][1]&&a[i][1]==a[i][2])
        return true;
        if(a[0][i]==a[1][i]&&a[1][i]==a[2][i])
        return true;
    }
    if((a[0][0]==a[1][1]&&a[1][1]==a[2][2])||(a[0][2]==a[1][1]&&a[1][1]==a[2][0]))
    return true;
    return false;
}
void dis()
{
    cout<<a[0][0]<<"  "<<a[0][1]<<"  "<<a[0][2]<<"  \n"<<a[1][0]<<"  "<<a[1][1]<<"  "<<a[1][2]<<"  \n"<<a[2][0]<<"  "<<a[2][1]<<"  "<<a[2][2]<<"\n";
}
int main()
{
  cout<<"enter the name of player 1 \n";
  getline(cin,n1);
  cout<<"enter the name of player 2\n";
  getline(cin,n2);
  dis();
  while(ch==false&& tie == false)
  {
    chang();
  }
  if(ch==true)
  {
    if(toy=='x')
    cout<<n2<<" is winner\n";
    if(toy=='o')
    cout<<n1<<" is winner\n";
  }
  else if(tie == true)
  cout<<"the game is tie\n";
  /*cout<<"enter y or Y to play again";
  cin>>play;
  while(play=='y'||play=='Y')
  main();*/
 return 0;
}