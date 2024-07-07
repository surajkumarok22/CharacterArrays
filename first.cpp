#include<iostream>
using namespace std;

int main()
{   
    char name[50];
    cout<<"enter your name"<<endl;
    cin>>name;
    cout<<name; // suraj , no output gives after space

    char name2[10];
    cout<<"enter your name"<<endl;
    for(int i = 0; i<10; i++){
        cin>>name2[i];
       }
    cout<<name2;


    return 0;
}