#include<iostream>
#include<string.h>
using namespace std;

void replacewithSpace(char ch[], int size){
  int index = 0;
  while(ch[index] != '\0'){
    char currCharacter = ch[index];
    if(currCharacter == '@'){
        ch[index] = ' ';
     }
     index++;
  }
  cout<<ch<<endl;

}

int main()
{
    char ch[] = "this@is@HP@Laptop";
    int size = strlen(ch);
    replacewithSpace(ch,size);
    return 0;
}