#include<iostream>
#include<string.h>

using namespace std;
void reverseString(char ch[], int size){
    int start = 0;
    int end = size - 1;

    while(start <= end){
        swap(ch[start], ch[end]);
        start++;
        end--;
    }
    cout<<ch<<endl;
}
int main()
{
    char ch[] = "suraj kumar";
    int size = strlen(ch);
    reverseString(ch, size);

    char chh[100];
    cout<<"enter your name here"<<endl;
    cin.getline(chh, 100);
    int newSize = strlen(chh);
    reverseString(chh, newSize);

    return 0;
}

