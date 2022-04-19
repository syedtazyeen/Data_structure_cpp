#include<iostream>
#include<string>
using namespace std;

void pairstar(char input[]){
    int n=0;
    while(input[n]!=NULL) n++;
    
    if(n==1) return;
    if(input[0]==input[1]){
        for(int i=n;i>0;i--) input[i+1]=input[i];
        input[1]='*';
    }
    pairstar(input+1);
}

int main(){
    char input[100];
    cin>>input;
    pairstar(input);
    cout<<input;
}