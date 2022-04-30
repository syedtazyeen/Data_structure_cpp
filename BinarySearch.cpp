#include<iostream>
#include<algorithm>
using namespace std;

int BinarySearch(int input[], int start, int end, int key){
    
    
    while(end>=start){
        int mid = (start+end-1)/2;
        if(key==input[mid]) return mid;
        if(key>input[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
    
    
}

int main(){
    int size,key;
    cin>>size;
    int *input = new int [size];
    for(int i=0;i<size;i++) cin>>input[i];
    cin>>key;
    //sort(input,input+size);   For unsorted input
    
    int ans = BinarySearch(input,0,size-1,key);

    (ans==-1)? (cout<<"Not available") : (cout<<ans);
    delete []input;

    return 0;
}