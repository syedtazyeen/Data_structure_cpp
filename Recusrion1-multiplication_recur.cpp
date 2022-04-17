#include<iostream>
//#include<string.h>
using namespace std;

void replacePi(char input[]){
    //help(input,0);
    int n=0;
    while(input[n]!=NULL) n++;
    if(input[0]==NULL || input[1]==NULL) return;
    n+=4;
    replacePi(input+1);
    if(input[0]=='p' && input[1]=='i'){
        n+=n;
        for(int i=n;i>=2;i--){
            input[i+2]=input[i];
        }
    
    input[0]='3';
    input[1]='.';
    input[2]='1';
    input[3]='4';
    }
}



int main(){
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}
