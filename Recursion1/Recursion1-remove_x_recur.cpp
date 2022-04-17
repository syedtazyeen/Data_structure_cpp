#include <iostream>
//#include "solution.h"
using namespace std;

void help(char input[], int size){
    char v='x';
    if(size==0) return;
    if(input[size-1]==v) input[size-1]='\0';
    help(input,size-1);
    return;

}
void removeX(char input[]) {
    // Write your code here
    int n=0;
    while(input[n]!=NULL) n++;
    help(input,n);
    return;
}




int main() {
    char input[100];
    cin.getline(input, 100);
    removeX(input);
    cout << input << endl;
}

