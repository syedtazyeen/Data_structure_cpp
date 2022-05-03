#include<iostream>
using namespace std;

int partition(int input[], int start, int end){
    int count=start-1;
    
    for(int i=0;i<end;i++){
        if(input[i]<input[end]){ 
        count++;
        int t=input[count];
        input[count]=input[i];
        input[i]=t;
        }
    }
    int temp=input[end];
    input[end]=input[count+1];
    input[count+1]=temp;

    return count+1;
}

void quickSort(int input[], int start, int end){
    if(start>=end) return;
    
    int pi = partition(input,start,end);
    quickSort(input,start, pi-1);
    quickSort(input,pi+1,end);
    return;

}

int main(){
    int n;
    cin>>n;
    int *a = new int [n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    quickSort(a,0,n-1);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}