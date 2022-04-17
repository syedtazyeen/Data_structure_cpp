#include <iostream>
using namespace std;


int binarySearch(int input[], int size, int element,int start=0) 
{
    int mid=(start+size)/2;
    if(start>size)
    {
        return -1;
    }
    else
    {
        if(input[mid]==element)
        {
            return mid;
        }
        else if(input[mid]<element)
        {
            start=mid+1;
            return binarySearch(input,size,element,start);
        }
        else if(input[mid]>element)
        {
            size=mid-1;
            return binarySearch(input,size,element,start);
        }
    }
} 


int main() {
    int input[100000],length,element, ans;
    cin >> length;
    for(int i =0;i<length;i++)
    { 
        cin >> input[i];;
    }

    cin>>element;
    ans = binarySearch(input, length, element);
    cout<< ans << endl;
}

