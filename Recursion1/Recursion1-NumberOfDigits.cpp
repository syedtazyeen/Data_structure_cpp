#include<iostream>
using namespace std;

int digits(int n){
    if(n==0) return 0;
    if(n<10) return 1;
    int ans = digits(n/10);
    ans+=1;
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<digits(n)<<endl;
}