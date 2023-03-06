#include<iostream>
using namespace std;
void kiemtraTamGiac(int a, int b, int c){
    if (a+b > c && a+c > b && b+c > a){
        if (a == b && b == c){
            cout << "Day la tam giac deu";
        }
        else if (a == b || b == c || a == c){
            cout << "Day la tam giac can";
        }
        else if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
            cout << "Day la tam giac vuong";
        }
        else{
            cout << "Day la tam giac thuong";
        }
    }
    else{
        cout << "Day khong phai tam giac";
    }
    
}

int main(){
    int ab,bc,ac;
    cout << "Nhap canh ab: "; cin >> ab;
    cout << "Nhap canh bc: "; cin >> bc;
    cout << "Nhap canh ac: "; cin >> ac;
    kiemtraTamGiac(ab,bc,ac);
}