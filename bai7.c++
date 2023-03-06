#include<iostream>
using namespace std;
string chuyenSangNhiPhan(int n){
    if (n > 0){
        return chuyenSangNhiPhan(n/2) + to_string(n%2);
    }
    return "";
}


int main(){
    int n;
    cin >> n;
    cout << chuyenSangNhiPhan(n);
}