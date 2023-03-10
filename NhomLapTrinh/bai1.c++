#include <iostream>
#include <math.h>
using namespace std;
void tinhPtrinhBac2(int a, int b, int c){
    float delta = b*b - 4*a*c;
    if (delta < 0){
        cout << "PT vn";
    }
    else if (delta == 0){
        cout << "PT co nghiem kep\n";
        cout << "x1 = x2 = " << (-b*1.0)/2*a;
    }
    else{
        cout << "PT co 2 nghiem\n";
        cout << "x1 = " << ((-b)+sqrt(delta))/2*a*1.0 << endl;
        cout << "x2 = " << ((-b)-sqrt(delta))/2*a*1.0;
    }
}

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    tinhPtrinhBac2(a,b,c);
}
