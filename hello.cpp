#include<iostream>
using namespace std;

int main()
{
    char ch[] = {'a','b','c','d','e'};
    cout<<"ch = "<<ch<<endl;  // ch = abcde@→@

     char chh[] = {'a','b','c','d','e'};
    cout<<chh<<endl; // abcdeabcde@→@

    char ch2[10] = {'a','b','c','d','e'};
    cout<<"ch2 = "<<ch2<<endl;

    return 0;
}