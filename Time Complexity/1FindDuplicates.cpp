//time complexity = O(nlogn)

#include<iostream>
using namespace std;

int finddup(int *arr, int n){
    sort(arr,arr+n);
    for(int i=0;i<=n;i++){
        if(arr[i]==arr[i+1]) return arr[i];
    }
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int k;
        cin>>k;
        int *arr = new int [k];
        for(int j=0;j<k;j++) cin>>arr[j];
        cout<<finddup(arr,k-1);
    }
}