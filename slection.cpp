#include <iostream>

using namespace std;
void print(int arr[],int n){
    for (int i = 0; i < n-1; i++){
        
        cout<<arr[i]<<" ";
    }
    
    
}

void selectionSort(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        int minIdx=i;
        //find to minim index
        for(int j=i;j<n;j++){
            if(arr[j]<arr[minIdx]){
               
                minIdx=j;
            }
            swap(arr[i],arr[minIdx]);
            // cout<<arr[j];
        }
        
    }
  
    print(arr,n);
}



int main (){
    int arr[5]={5,4,1,3,2};
    int n=sizeof(arr)/sizeof(int);
    selectionSort(arr,n);
    return 0;
}