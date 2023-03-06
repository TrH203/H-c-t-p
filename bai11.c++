#include<iostream>
using namespace std;
int a[1000];
void chen(int n, int tmp, int k){
    for(int i=n; i>=tmp; i--){
        a[i] = a[i-1];
    }
    a[tmp] = k;
}
int timViTri(int n, int k){
    int tmp = 0;
    if (k > a[n-1]) return n;

    for(int i = 0; i < n;i++){
        if (k >= a[i]){
            tmp = i;
            break;
        }
    }
    
    return tmp;
}
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    int k;
    cout << "Nhap k :"; cin >> k;
    chen(n, timViTri(n,k), k);
    n++;

    for (int i =0; i<n;i++){
        cout <<a[i] << " ";
    }
}
