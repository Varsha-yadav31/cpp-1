#include<iostream>
using namespace std;
void MinMax(int arr[],int n){
    int minIndex = 0;
    int maxIndex = 0;
    for(int i = 1; i<n; i++){
        if(arr[i]>minIndex)
        minIndex = i;
        if(arr[i]<maxIndex){
            maxIndex = i;
        }
        swap(arr(minIndex), arr(maxIndex));
        for(int i = 0; i<n; i++){
            cin>>arr[i]<<" "<<endl;
            
        }
    }


    
}

