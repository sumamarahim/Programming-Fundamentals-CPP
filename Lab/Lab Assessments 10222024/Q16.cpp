// Name: Sumama Rahim
// Reg# F24BSCS-039
// Dated: 10232024
//
// Lab Work
//
// Q16.	(25.5 * 3.5 - 3.5 * 3.5) / (40.5 - 4.5)

// Program start
#include <iostream>
using namespace std;

int main(){
	cout<<"**** (25.5 * 3.5 - 3.5 * 3.5) / (40.5 - 4.5) ****"<<endl;
	float a = 25.5, b = 3.5, c = 3.5, d = 3.5, e = 40.5, f = 4.5, expression;
	expression = (a*b-c*d)/(e-f);
	/**
		Rule:
			1. bracket
			2. multiplication
			3. division
			4. minus
	*/
	
	cout<<"\nOutput of this expression is: "<<expression; 
	
	return 0;
}
