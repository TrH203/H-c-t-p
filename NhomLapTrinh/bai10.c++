#include<iostream>
#include<math.h>
using namespace std;
int check(int n){
    int tongc=0, tongl = 0;
    while(n>0){
        if (n%10 % 2 == 0) tongc += n%10;
        else tongl += n%10;
        n /= 10;
    }
    return tongc == tongl;
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