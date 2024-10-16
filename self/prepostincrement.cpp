#include <iostream>

using namespace std;

int main() {
	// Pre and Post Increment Exercise

	// Mixed Pre and Post increment
	int a = 10, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z;
	b = ++a;	// b = 11;
	c = a++;	// c = 11 then a = 11+1;
	d = a++ + a; // d = 12 + 13 = 25
	e = ++a + a; // e = 14 + 14 = 28
	f = a + a++; // f = 15 (increment by 1 first) + 14 then a = 14+1 = 29
	g = a + ++a; // g = 16 + 16 = 32, a = 16
	h = a + ++a + a++; // h = 17 + 17 + 17 (then a =  17 + 1) = 51
	i = a + a++ + ++a; // i = 19 + 19 (then a = 19) + 19 = 57

	cout<<"output of a: "<<a<<endl;
	cout<<"output of ++a: "<<b<<endl;
	cout<<"output of a++: "<<c<<endl;
	cout<<"output of a++ + a: "<<d<<endl;
	cout<<"output of ++a + a: "<<e<<endl;
	cout<<"output of a + a++: "<<f<<endl;
	cout<<"output of a + ++a: "<<g<<endl;
	cout<<"output of a + ++a + a++: "<<h<<endl;
	cout<<"output of a + a++ + ++a: "<<i<<endl;
	cout<<"in last value of \"a\" is: "<<a<<endl;

	x = 17;
	y = x + ++x + x++;
	cout<<"Value of x + ++x + x++ if x = 17: "<<y<<endl<<"and value x is "<<x<<endl; // y = 18 + 17+1 + 18 (then returns x=19) = 54

	// IMPORTANT TO NOTE
	// Rule to remember
	// 1st runs pre then simple variable and finally post 


	// j = 10;
	// cout<<2 + j++<<endl<<j<<endl<<j + j++<<endl<<j<<endl<<j + ++j<<endl<<j;


}