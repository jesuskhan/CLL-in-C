#include <iostream>
using namespace std;

void merge(int left[],int right[],int arr[],int size_left,int size_right){
    
    int i,j,k = 0;
    while(i < size_left && j < size_right){
        if(left[i] <= right[j]){
            arr[k] = left[i];
            i++;
        }
        else{
            arr[k] = right[j];
            j++;
        }
        k++;
    }
//     To check any leftovers
    while(i < size_left){
        arr[k] = left[i];
        i++;
        k++;
    }
    while(j < size_right){
        arr[k] = right[j];
        j++;
        k++;
    }
    
}

void mergeSort(int arr[],int n){
    int i;
    if(n<2){
        return;
    }
    int mid = n/2;
    int left[mid];
    int right[n-mid];
    for(i=0;i<mid;i++){
        left[i] = arr[i];
    }
    for(i=mid;i<n;i++){
        right[i-mid] = arr[i];
    }
    mergeSort(left,mid);
    mergeSort(right,n-mid);
    merge(left,right,arr,mid,n-mid);
}


int main()
{
    int n;
    cout << "Enter the number of elements you want" << endl;
    cin >> n;
    
    int arr[n];
    cout << "Enter the elements" << endl;
    for(int k=0;k<n;k++){
        cin >> arr[k];
    }
    mergeSort(arr,n);
    cout << "Sorted arrays is: ";
    for(int k=0;k<n;k++){
        cout << " " << arr[k];
    }
}
