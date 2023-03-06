#include<iostream>
using namespace std;
int daonguoc(int n){
    int rs=0;
    while(n > 0){
        rs = rs*10 + n%10;
        n /=10;
    }
    return rs;
}
int main(){
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << "So dao nguoc cua "<< n << " la: " << daonguoc(n);
}