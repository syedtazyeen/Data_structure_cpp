#include<iostream>
using namespace std;

void SelectionSort(int input[], int size){
    for(int i=0;i<size-1;i++){
        int min=i;
        for(int j=i;j<size;j++){
            
            if(input[j]<input[min]){
                min=j;
            }
        }
        int temp = input[i];
        input[i]=input[min];
        input[min]=temp;
    }
    return;
}

int main(){
    int size;
    cin>>size;
    int *input = new int [size];
    for(int i=0;i<size;i++) cin>>input[i];

    SelectionSort(input,size);

    for(int i=0;i<size;i++) cout<<input[i]<<" ";
    cout<<endl;

    delete []input;

    return 0;
}