#include<iostream>
using namespace std;

void print_all(int n){
    if(n<=0) return;
    print_all(n-1);
    cout<<n<<" ";
}

int main(){
    int n;
    cin>>n;
    print_all(n);
}