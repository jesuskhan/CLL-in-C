#include <iostream>
using namespace std;

void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){         // No need to access last element as it will be at its position
        int min = i;
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        if(min != i){
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }        
    }
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
    selectionSort(arr,n);
    cout << "Sorted arrays is: ";
    for(int k=0;k<n;k++){
        cout << " " << arr[k];
    }
}
