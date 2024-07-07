#include<iostream>
#include<string.h>
using namespace std;

void convertUpperCase(char ch[], int size){
    int index = 0;
    while(ch[index] != '\0'){
        char currCharacter = ch[index];

        if(currCharacter >= 'a' && currCharacter <= 'z'){
            ch[index] = currCharacter - 'a' + 'A';
        }
        index++;
    }
    cout<<ch<<endl; 
}


void convertLowwerCase(char ch[], int size){
    int index = 0;
    while(ch[index] != '\0'){
        char currCharacter = ch[index];

        if(currCharacter >= 'A' && currCharacter <= 'Z'){
            ch[index] = currCharacter - 'A' + 'a';
        }
        index++;
    }
    cout<<ch<<endl; 
}

int main(){
    char ch[] = "My Name Is Suraj Kumar";
    int size = strlen(ch);
    convertUpperCase(ch, size);
    convertLowwerCase(ch,size);

    return 0;
}