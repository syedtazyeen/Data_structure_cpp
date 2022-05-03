#include<iostream>
using namespace std;

void merge(int input1[], int input2[], int output[], int n1 ,int n2){
    int i=0,j=0,k=0;
    while(i<n1 && i<n2){
        if(input1[i]<input2[j]) output[k++]=input1[i++];
        else output[k++]=input2[j++];
    }
    while(i<n1) output[k++]=input1[i++];
    while(j<n2) output[k++]=input2[j++];
}


int  main(){
    int n1,n2;
    cin>>n1>>n2;
    int *input1 = new int [n1];
    int  *input2 = new int [n2];

    for(int i=0;i<n1;i++) cin>>input1[i];
    for(int i=0;i<n2;i++) cin>>input2[i];

    int *output = new int [n1+n2];

    merge(input1,input2,output,n1,n2);

    for(int i=0;i<n1+n2; i++) cout<<output[i]<<" ";
}