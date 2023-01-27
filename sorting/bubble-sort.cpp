#include <iostream>
using namespace std;

int bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
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
    bubbleSort(arr,n);
    cout << "Sorted arrays is ";
    for(int k=0;k<n;k++){
        cout << " " << arr[k];
    }
}
