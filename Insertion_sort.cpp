#include<iostream>
using namespace std;

void insertion_sort(int *arr, int n){
    for(int i=1; i<n; i++){
        int temp = arr[i];
        int j = i-1;

        while(j>=0 && arr[j]>temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j-1]= temp;

    }
}

int main(){
    int n;
    cout<<"Enter the number of number sorted"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n ; i++){
        cin>>arr[i];
    }

    insertion_sort(arr,n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }

    return 0;
    
}