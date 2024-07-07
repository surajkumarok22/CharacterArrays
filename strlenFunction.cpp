#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char name[50];
    cout<<" enter your name"<<endl;

    cin>>name;  // suraj kumar
    int ans = strlen(name);

    cout<<ans; //  5 (suraj)no count after space in another word u can say that terminate after entering space

    char name2[50];
    cout<<" enter your name"<<endl;
    cin.getline(name2, 50); // suraj kumar

    int ans2 = strlen(name2);
    cout<<ans2; // 11 



    return 0;
}