#include<iostream>
using namespace std;

bool check(char input[], int s, int e){
    if(s>=e) return true;
    if(input[s]!=input[e]) return false;
    return check(input, s+1, e-1);
    
    
}






bool checkPalindrome(char input[]) {
    
    int n=0;
    while(input[n]!=NULL){
        n++;
    }
    return check(input,0,n-1);
    

}

int main() {
    char input[50];
    cin >> input;
    
    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}

