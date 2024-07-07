#include<iostream>
using namespace std;

int main()
{
    char ch[50];
    cout<<"enter your name"<<endl;
    cin.getline(ch, 50); // takes spaces as input 
    cout<<ch;

    // char chh[50];
    // cout<<"enter your name"<<endl;
    // cin>>chh; no takes input after space
    // cout<<chh;

    return 0;
}