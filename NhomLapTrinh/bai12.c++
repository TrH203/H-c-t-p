#include<iostream>
using namespace std;
int BnS(int a[],int n, int k){
    int dem = 0;
    int l=0,r=n,mid;
    mid = (l + r) / 2;
    while(dem < n){
        if(k > a[mid]){
            l = mid + 1;
        }
        else if (k < a[mid]){
            r = mid;
        }
        else{
            return mid;
        }
        mid = (l+r)/2;
        dem ++;
    }
    return -1;
}
int main(){
    int n,k;
    cin >> n;
    cin >> k;
    int a[n];
    for(int i =0 ; i<n;i++){
        cin >> a[i];
    }
    cout << BnS(a, n, k);

}