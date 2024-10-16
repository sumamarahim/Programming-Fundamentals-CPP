#include <iostream>

using namespace std;

int main() {
	// Pre and Post Decrement Exercise

	// Mixed Pre and Post Decrement
	int a = 10, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z;
	b = --a;	// b = 9;
	c = a--;	// c = 9 then a = 9-1;
	d = a-- + a; // d = 8 + 8 = 16 / 15 and a = 7
	e = --a + a; // e = 6 + 6 = 12 and a = 6
	f = a + a--; // f = 6 + 6 = 12 / 11 and a = 5
	g = a + --a; // g = 4 + 4 = 8 and a = 4
	h = a + --a + a--; // h = 3 + 3 + 3 = 9 and a = 2
	i = a + a-- + --a; // i = 1 + 1 + 1 = 3 and a = 0

	cout<<"output of a: "<<a<<endl;
	cout<<"output of --a: "<<b<<endl;
	cout<<"output of a--: "<<c<<endl;
	cout<<"output of a-- + a: "<<d<<endl;
	cout<<"output of --a + a: "<<e<<endl;
	cout<<"output of a + a--: "<<f<<endl;
	cout<<"output of a + --a: "<<g<<endl;
	cout<<"output of a + --a + a--: "<<h<<endl;
	cout<<"output of a + a-- + --a: "<<i<<endl;
	cout<<"in last value of \"a\" is: "<<a<<endl;

	x = 17;
	y = x + --x + x--; // y = 16 + 16 + 16 = 48 and x = 15
	cout<<"Value of x + --x + x-- if x = 17: "<<y<<endl<<"and value x is "<<x<<endl; // y = 18 + 17+1 + 18 (then returns x=19) = 54

	// IMPORTANT TO NOTE
	// Rule to remember
	// 1st runs pre then simple variable and finally post 


	// j = 10;
	// cout<<2 + j+<<endl<<j<<endl<<j + j+<<endl<<j<<endl<<j + +j<<endl<<j;


}