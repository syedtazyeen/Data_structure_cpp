#include<iostream>
using namespace std;

int main(){
    int arr1[]={1,5,7,11},arr2[]={2,4,9,13},arr3[100];
    int n1=4,n2=4,n3=8;
    int i=0,j=0,k=0;

    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]) arr3[k++]=arr1[i++];
        else arr3[k++]=arr2[j++];
   
    
    }
    while(i<n1){
        arr3[k++]=arr1[i++];
        
    }
    while(j<n2){
        arr3[k++]=arr2[j++];
        
    }


    for(int x=0; x<n3;x++){
        cout<<arr3[x]<<" ";
    }

    
}