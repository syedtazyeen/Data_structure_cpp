#include <iostream>
#include<cstring>
using namespace std;


bool helper(char input[]){
    if(strlen(input)==0) return true;
    
    if(input[0]=='a'){
        if(input[1]!='a' && input[1]!='\0' && !(input[1]=='b' && input[2]=='b')) return false;
        return helper(input+1);
    }
    if(input[0]=='b' && input[1]=='b'){
        if(input[2]!='a' && input[2]!='\0') return false;
        return helper(input+2);
    }
    else return false;
    
}

bool checkAB(char input[]) {
	// Write your code here
    if(input[0]=='b') return false;
    return helper(input);

}


int main() {
    char input[100];
    bool ans;
    cin >> input;
    ans=checkAB(input);
    if(ans)
        cout<< "true" << endl;
    else
        cout<< "false" << endl;
}

