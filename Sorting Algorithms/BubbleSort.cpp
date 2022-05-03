#include<iostream>
using namespace std;

void BubbleSort(int input[], int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(input[j]>input[j+1]){
                int temp= input[j+1];
                input[j+1]= input[j];
                input[j]=temp;
            }
        }
    }
}

int main(){
    int size;
    cin>>size;
    int *input = new int [size];
    for(int i=0;i<size;i++) cin>>input[i];

    BubbleSort(input,size);

    for(int i=0;i<size;i++) cout<<input[i]<<" ";
    cout<<endl;

    delete []input;

    return 0;
}