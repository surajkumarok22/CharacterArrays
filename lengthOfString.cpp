#include<iostream>
using namespace std;

int findLength(char arr[]){
    int length = 0;
    int index = 0;
    while(arr[index] != '\0'){
        length++;
        index++;
    }
    return length;
}
int main()
{
    char name[50];
    cin>>name;  // suraj kumar

    int ans = findLength(name);
    cout<<ans; //  5 (suraj)no count after space in another word u can say that terminate after entering space

    char name2[50];
    cin.getline(name2, 50); // suraj kumar
    int ans = findLength(name2);
    cout<<ans; // 11 



    return 0;
}