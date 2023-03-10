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
    cin >> n;
    cout << daonguoc(n);
}