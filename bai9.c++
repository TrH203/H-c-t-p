#include<iostream>
#include<math.h>
using namespace std;
int check(int n){
    if (n <= 1) return 0;
    for(int i = 2 ; i <= sqrt(n); i++){
        if(n % i == 0){
            return 0;
        }
    }
    return n;
}
int main(){
    int n, tong=0;
    cin >> n;
    int a[n];
    for(int i=0; i < n; i++){
        cin >> a[i];
        tong += check(a[i]);
    }
    cout << tong;
}