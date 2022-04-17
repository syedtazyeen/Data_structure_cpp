#include<iostream>
using namespace std;

int sum(int a[], int n){
    //int n = sizeof(a);
    if(n==0) return 0;
    if(n==1) return a[n-1];
    int ans = a[0]+sum(a+1,n-1);

    return ans;
}

int main(){
    int n;
    cin>>n;
    int *a= new int [n];
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<sum(a,n)<<endl;
}