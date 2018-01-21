#include <iostream>
#include <string>
using namespace std;

//Read the code and figure out the password

int main()
{
string alphabet="abcdefghijklmnopqrstuvwxyz";
string crypted="taobpcsdeecarbectd";
string pass,aid;
do{
aid="";
cout<<"Password:"<<endl;
cin>>pass;
for (int i=0;i<pass.length();i++)
{
aid=aid+pass[i]+alphabet[i%5];
}

if(aid==crypted)
    cout<<"Yay!";
else
    cout<<"Keep trying!";
}while(aid!=crypted);
}
