#include<iostream>
#include<algorithm>
using namespace std;

int pairSum(int input[],int size, int num){
    

    sort(input,input+size);
    int i=0,j=size-1,c=0;

    while(i<j){
            if(input[i]+input[j]<num) i++;
    else if( input[i]+input[j]>num) j--;
    else{
        if(input[i]==input[j]){
            int itoj = (j-i) +1;
            c+= (itoj * (itoj-1)/2);
            return c;
        }
        int tempi=i+1, tempj=j-1;

        while(tempi<=tempj && input[tempi]==input[i]) tempi++;
        while(tempj>=tempi && input[tempj]==input[j]) tempj--;

        c+= (tempi-i)*(j-tempj);
        i=tempi;
        j=tempj;
    }
    }

    return c;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        int num,size;
        cin>>size;
        int *input = new int [size];
        for(int i=0;i<size;i++){
            cin>>input[i];
        }
        cin>>num;
        cout<<pairSum(input,size,num)<<endl;
        delete []input;
    }
    return 0;
}