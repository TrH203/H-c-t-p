#include<iostream>
using namespace std;
int soBP(int n){
    if (n < 4) return n;
    return soBP(n-1) + soBP(n-2);
}

int main(){
    int n;
    cin >> n;
    cout << soBP(n);
}