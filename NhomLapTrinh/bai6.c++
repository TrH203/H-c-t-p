#include<iostream>
using namespace std;
int giaithua(int n){
    if (n<=2){
        return n;
    }
    else{
        return n * giaithua(n-1);
    }
}

int main(){
    int n;
    cin >> n;
    cout << giaithua(n);
}