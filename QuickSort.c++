#include<iostream>
using namespace std;
int n;
void quickSort(int arr[], int left, int right) {
    int i = left, j = right;
    int pivot = arr[(i + j) / 2];
    cout << arr[i] << " " << arr[(i + j) / 2] << " " << arr[j] << endl;
    for(int i =0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    while (i <= j) {
        while (arr[i] < pivot) {
            i++;
        }
        while (arr[j] > pivot) {
            j--;
        }
        if (i <= j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    if (left < j) {
        quickSort(arr, left, j);
    }
    if (i < right) {
        quickSort(arr, i, right);
    }
}
int main(){
    cin >> n;
    int a[n];
    for(int i =0;i<n;i++){
        cout << "a["<<i<<"] ";
        cin >> a[i];
    }
    quickSort(a,0,n-1);
}
