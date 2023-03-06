#include<iostream>
using namespace std;
void chuyenSangNhiPhan(int n){
    if (n > 0){
        cout << n%2;  
        chuyenSangNhiPhan(n/2);
    }
}


int main(){
    int n;
    cin >> n;
    chuyenSangNhiPhan(n);
}