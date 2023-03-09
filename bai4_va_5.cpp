#include <iostream>
using namespace std;
int check(int a,int b){
    return a*b != 0;
}
int UCLN(int a, int b){
    if (a==b) 
        return a;
    if (a>b)
        return UCLN(a-b,b);
    if (b>a)
        return UCLN(a,b-a);
}
int UCLN1(int a, int b){
    int temp = a>b?a:b;
    for(int i = temp;i>=1;i--){
        if (a%i == 0 && b%i == 0) return i;
    }
    return 1;
}
int BCNN(int a, int b){
    return (a*b)/UCLN(a,b);
}
int main(){
    int a,b;
    cin >> a >> b;
    if (check(a,b)){
        cout << "UCLN(Loop) la: " << UCLN1(a,b) << endl;
        cout << "UCLN(recursion) la "<<UCLN(a,b) << endl;
        cout << "BCNN la "<< BCNN(a,b);
    }
    else cout << a + b;
}
    

