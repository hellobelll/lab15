#include <iostream>
using namespace std;

int main(){
int a = 5;
char b = 'A',&c = b;
int* x = &a;
int**z = &x;
char *y = &b;
cout << a << " " << b << " " << c << " " << x << " " << (void *)y << " " << z << endl;
cout << &a << " " << (void*)&b << " " << (void*)&c << " " << &x << " " << &y << " " << &z << endl;
c = 'F';
cout << a << " " << b << " " << c << " " << x << " " << (void *)y << " " << z << endl;
*y = 'W';
cout << a << " " << b << " " << c << " " << x << " " << (void *)y << " " << z << endl;
*x = 6;
cout << a << " " << b << " " << c << " " << x << " " << (void *)y << " " << z << endl;
**z = 7;
cout << a << " " << b << " " << c << " " << x << " " << (void *)y << " " << z << endl;
return 0;
}
