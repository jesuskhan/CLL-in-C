#include <iostream>
using namespace std;

int insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int j = i-1;
//         element where i is pointing
        int x = arr[i];
        while(arr[j] > x && j >= 0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = x;
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
    insertionSort(arr,n);
    cout << "Sorted arrays is ";
    for(int k=0;k<n;k++){
        cout << " " << arr[k];
    }
}
