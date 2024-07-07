#include<iostream>
#include<string.h>
using namespace std;

bool checkPalindrome(char arr[], int size){
    int start = 0;
    int end = size - 1;
    while(start <= end){
       if(arr[start] == arr[end]){
        start++;
        end--;
       }
       else{
        return false;
       }
    }
    return true;
}
int main()
{
    char ch[100];
    cout<<"enter to check palindrome"<<endl;
    cin>>ch;
    int size = strlen(ch);
    cout<<checkPalindrome(ch,size); // 1 for true and -1 for false
    return 0;
}