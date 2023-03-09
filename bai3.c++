#include <iostream>
using namespace std;
void kiemtraTamGiac(int a, int b, int c) {
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) cout << "deu";
        else if (a == b || b == c || a == c) cout << "can";
        else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) cout << "vuong";
        else cout << "thuong";
    } else cout << "Day khong phai tam giac";
}
int main() {
    int a, b, c;
    cout << "a: "; cin >> a;
    cout << "b: "; cin >> b;
    cout << "c: "; cin >> c;
    kiemtraTamGiac(a, b, c);
}
