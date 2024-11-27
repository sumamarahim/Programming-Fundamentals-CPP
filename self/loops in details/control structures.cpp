/***

	Practicing - Control Structures with examples

***/

#include <iostream>


using namespace std;

//bool accept()
//	{
//		cout<<"Wanna proceed? (y/n): "<<endl;
//		char answer;
//		
//		cin>>answer;
//		
////		if (answer == 'y')
////		{
////			return true;
////		}
////		return false;
//		
//		switch (answer)
//		{
//			case 'y':
//				return true;
//			case 'n':
//				return false;
//			default:
//				cout<<"I'll get no for this\n";
//		}
//	}



//getch(), getche(), gets(), puts(), 



//int oddEven()
//{
//	program 3
//	int num;
//
//	cout<<"enter a number: ";
//
//	
//	cin>>num;
//
//		// 1
//	bool even, odd;
//	even = (num % 2 == 0); // returns 1 if even else odd
//	odd = (num % 2 == 1); // returns 1 if odd else even
////	cout<<even;
////	cout<<odd;
//
//	if (even == true)
//	{
//		cout<<"Even"<<endl;
//	}
//	else
//	{
//		cout<<"Odd"<<endl;
//	}
//	// OR 
//	if (even == 1)
//	{
//		cout<<"Even"<<endl;
//	}
//	else
//	{
//		cout<<"Odd"<<endl;
//	}
//	
//	// 2
//	if ((num % 2) == 0)
//	{
//		cout<<"Even number you entered"<<endl;
//	}
//	else 
//	{
//		cout<<"Odd number you entered"<<endl;
//	}
//}


int main()
	{
//		cout<<accept();

//HSSC-II Chap: 4
//program 1

//		cout<<"enter a number: ";
//		int num1, num2, sum, prod;
//		
//		cin>>num1;
//		cout<<"enter second number: ";
//		cin>>num2;
//		
//		if (num1 > 0)
//		{
//			sum = num1 + num2;
//			prod = num1 * num2;
//			
//			cout<<"\nSum: "<<sum<<endl;
//			cout<<"\nProd: "<<prod<<endl;
//			
//		}

////program 2
//	cout<<"Enter marks out of 100: ";
//	int marks;
//	
//	cin>>marks;
//	
//	if (marks >= 33)
//	{
//		cout<<"You are promoted to next level"<<endl;
//	}
	
//// program 3
//	// odd or even
//	
//		int num;
//
//	cout<<"enter a number: ";	
//	cin>>num;
//	
////	// 1
////	bool even, odd;
////	even = (num % 2 == 0); // returns 1 if even else odd
////	odd = (num % 2 == 1); // returns 1 if odd else even
//////	cout<<even;
//////	cout<<odd;
////
////	if (even == true)
////	{
////		cout<<"Even"<<endl;
////	}
////	else
////	{
////		cout<<"Odd"<<endl;
////	}
////	// OR 
////	if (even == 1)
////	{
////		cout<<"Even"<<endl;
////	}
////	else
////	{
////		cout<<"Odd"<<endl;
////	}
////	
////	// 2
////	if ((num % 2) == 0)
////	{
////		cout<<"Even number you entered"<<endl;
////	}
////	else 
////	{
////		cout<<"Odd number you entered"<<endl;
////	}
//
//	// 3 using function
//	cout<<oddEven();


//	// program 4: +, -, or zero
//	int n1;
//	
//	cout<<"enter a number: ";
//	cin>>n1;
//	
//	if (n1 < 0)
//	{
//		cout<<"Negative number"<<endl;
//	}
//	
//	else
//	if(n1 > 0)
//	{
//		cout<<"Positive number"<<endl;
//	}
//	
//	else
//	{
//		cout<<"ZERO"<<endl;
//	}
	
	
	
////	// program 5: grades as per marks
////	
//
//	cout<<"Enter your obtained marks out of 100: ";
//	int marks;
//	char grade;
//	cin>>marks;
//	
//	 // 1
//	if (marks >= 80 && marks <= 100)
//	{
//		cout<<"A"<<endl;
//	}
//	else if (marks >= 70 && marks < 80)
//	{
//		cout<<"B"<<endl;
//	}
//	else if (marks >= 60 && marks < 70)
//	{
//		cout<<"C"<<endl;
//	}
//	else if (marks >= 50 && marks < 60)
//	{
//		cout<<"D"<<endl;
//	}
//	else if (marks < 50 && marks >= 0)
//	{
//		cout<<"F"<<endl;
//	}
//	else
//	{
//		cout<<"You entered wrong marks"<<endl;
//	}
//	
//	
//	// method 2
//	if (marks >= 80)
//	grade = 'A';
//	else if (marks >= 70)
//	grade = 'B';
//	else if (marks >= 60)
//	grade = 'C';
//	else if (marks >= 50)
//	grade = 'D';
//	else if (marks < 50)
//	grade = 'F';
//	
//	else
//	{
//		cout<<"Entered wrong marks"<<endl;
//	}
//	
//	cout<<grade<<endl;

// // Program 6: print name of the day, rep by 1 to 7 using switch statement
//
//	int day;
//	cout<<"Enter 1 to 7 for days: ";
//	cin>>day;
//	
//	switch (day)
//	{
//		case 1:
//			cout<<"Monday"<<endl;
//			break;
//		case 2:
//			cout<<"Tuesday"<<endl;
//			break;
//		case 3:
//			cout<<"Wednesday"<<endl;
//			break;
//		case 4:
//			cout<<"Thursday"<<endl;
//			break;
//		case 5:
//			cout<<"Friday"<<endl;
//			break;
//		case 6:
//			cout<<"Satureday"<<endl;
//			break;
//		case 7:
//			cout<<"Sunday"<<endl;
//			break;
//		default:
//			cout<<"Not a day"<<endl;
//			break;
//	}
//	// without break statement it does print all after the met case
//	cout<<"after switch statement"<<endl;

//	// program 7: check vowel or consonant character (switch will be suitable in this case)
//	
//	char vowel;
//	cout<<"Enter a character to check for vowel or consonant"<<endl;
//	
//	cin>>vowel;
	
//	// method 1
//	switch (vowel)
//	{
//		case 'a':
//			cout<<"It's a VOWEL"<<endl;
//			break;
//		case 'e':
//			cout<<"It's a VOWEL"<<endl;
//			break;
//		case 'i':
//			cout<<"It's a VOWEL"<<endl;
//			break;
//		case 'o':
//			cout<<"It's a VOWEL"<<endl;
//			break;
//		case 'u':
//			cout<<"It's a VOWEL"<<endl;
//			break;
//		
//		default:
//			cout<<"It's a CONSONANT"<<endl;
//			break;
//	}
//	
	
//	// method 2
//	switch (vowel)
//	{
//		case 'a':
//		case 'e':
//		case 'i':
//		case 'o':
//		case 'u':
//			cout<<"It's a VOWEL"<<endl;
//			break;
//		
//		default:
//			cout<<"It's a CONSONANT"<<endl;
//			break;
//	}

//	// program 8: use of nested else if
//	int marks;
//	
//	cout<<"Enter marks between 0 and 100: ";
//	cin>>marks;
//	
//	if (marks >= 0 && marks <= 100)
//	{
//		if (marks >= 33)
//		{
//			cout<<"You are passed";
//		}
//		else
//		{
//			cout<<"You are not able to achieve your next level";
//		}
//	}
//	else
//	{
//		cout<<"Invalid marks"<<endl;
//	}


//	// program 9: prints four times a statement in loop
//	
//	for (int i = 1; i <= 4; i++)
//	{
//		cout<<"This is a statement in loop"<<endl;
//	}
	

//	// program 10: use loop to print all positve odd number b/w 0 and 20
//	
//	// method 1
//	for (int i = 1; i <= 20; i += 2)
//	{
//		cout<<i<<" ";
//	}
//	cout<<endl;
//	
//	// method 2
//	for (int i = 0; i <= 20; i += 2)
//	{
//		if (i > 19)
//		break; // without break it will print 21 as well but we have check to print less than 20
//		cout<<i+1<<" ";
//	
//	}
//	cout<<endl;


//	// the above with while loop

//	int i = 0;
//	while (i <= 20)
//	{
//		if (i < 20)
//		break;
//		cout<<i<<" ";
//		i += 2;
//	}
//	
//	while (i <= 20)
//	{
//		cout<<i<<" ";
//		i++;
//	}
	
//	int j = 1;
//	while (j <= 20)
//	{
//		cout<<j<<" ";
//		j += 2;
//	}


//	// program 11: prints sum of all numbers from 0 to 15 using while loop
//	
//	int i = 0;
//	int sum = 0;
//	
//	while (i <= 15)
//	{
//		sum = sum + i;
//		i++;
//	}
//	cout<<"the sum of all numbers from 0 to 15 is: "<<sum;


	// program 12: print square of a number until user prints 0 and print good bye at end, use while loop

//	simple output

//	enter a number: 7
//	returns 49
//	enter a number: 5
//	returns 25
//	enter a number: 0
//	Good Bye!
//	
	// method 1
//	int i = 0;
//	while ( i >= 0)
//	{
//		cout<<"enter a number (0 to terminate): ";
//		cin>>i;
//		
//		if (i == 0)
//		{
//			cout<<"Good Bye!";
//			return 0;
//		}
//		else
//		{
//			cout<<"Square is: "<<i*i<<endl;
//		}
//		
//		i++;
//	}
	
	// use for loop for the above program
	
//	for (int i = 0; i >= 0; i++)
//	{
//		cout<<"Enter a number (0 to terminate): ";
//		cin>>i;
//		
//		if ( i == 0 )
//		{
//			cout<<"Good Bye!";
//			break;
//		}
//		else
//		{
//			cout<<"The square is: "<<i*i<<endl;
//		}
//	}
	
//	// above program using do-while loop
//	
//	int i = 0;
//	
//	do
//	{
//		cout<<"Enter a number (0 to terminate): ";
//		cin>>i;
//		
//		if (i == 0)
//		{
//			cout<<"Good Bye!";
//			break;
//		}
//		else
//		{
//			cout<<"The square is: "<<i*i<<endl;
//		}
//		i++;
//	}
//	while(i >= 0);

	// method 2
	
//	 int num;
//	 cout<<"Enter a number (0 to terminate): ";
//	 cin>>num;
//	 
//	 while (num != 0)
//	 {
//	 	cout<<num*num<<endl;
//	 	cout<<"Enter a number (0 to terminate): ";
//	 	cin>>num;
//	 }
//		cout<<"Good Bye!"<<endl;
	 	
	 	
	 	// program 13: enter 2 numbers to print product, show that and ask for y to continue and n for ending
	 	// use all loops
	 	
	 	// using for loop
	 	
//	 	for(int i = 0; i >= 0; i++)
//	 	{
//	 		int a, b;
//	 		cout<<"Enter 2 numbers for product"<<endl;
//	 		cin>>a>>b;
//	 		cout<<"Product is: "<<a*b<<endl;
//	 		cout<<"Y to continue or N to exit: ";
//	 		char ch;
//	 		cin>>ch;
//	 		if (ch == 'y')
//	 		{
////	 			cout<<"Enter 2 numbers fro product: ";
////	 			cin>>a>>b;
////	 			cout<<a*b<<" is ";
//				return true;
//			}
//			else if (ch == 'n')
//			{
//				cout<<"Good Bye!"<<endl;
//				return 0;
//				//break;
//			}
//			else
//			{
//				cout<<"Try N or Y"<<endl;
//			}
//		}
		
		
		
//		// using while loop
//	 	int i = 0;
//	 	while(i >= 0)
//	 	{
//	 		int a, b;
//	 		cout<<"Enter 2 numbers for product"<<endl;
//	 		cin>>a>>b;
//	 		cout<<"Product is: "<<a*b<<endl;
//	 		cout<<"Y to continue or N to exit: ";
//	 		char ch;
//	 		cin>>ch;
//	 		if (ch == 'y' || ch == 'Y')
//	 		{
//				i++;
//			}
//			else if (ch == 'n' || ch == 'N')
//			{
//				cout<<"Good Bye!"<<endl;
////				return 0;
//				break;
//			}
//			else
//			{
//				cout<<"Try N or Y"<<endl;
//			}
//		}
	
	
//	// using do-while loop
//	
//	int i = 0;
//	do 
//	{
//		cout<<"Enter 2 numbers for product: "<<endl;
//		int a, b;
//		cin>>a>>b;
//		cout<<"Product is: "<<a*b<<endl;
//		cout<<"Do you wanna continue? (Y or N)"<<endl;
//		char ch;
//		cin>>ch;
//		
//		switch (ch)
//		{
//			case 'y':
//				i++;
//				break;
//			case 'n':
//				cout<<"Good Bye!"<<endl;
//				return 0;
//				break;
//			default:
//				cout<<"Try N or Y"<<endl;
//		}
//	}
//	while (i >= 0);

//		// method 2 
//		
//		int a, b, prod;
//		char ch;
//		
//		do
//		{
//			cout<<"Enter 2 numbers"<<endl;
//			cin>>a>>b;
//			cout<<a*b<<endl;
//			cout<<"Wanna continue? (Y or N):";
//			cin>>ch;
//			
//		}
//		while (ch != 'n');


		// program 14: use of continue and break in loops
			// all positive numbers less than 15, skip between 5 and 10
		
//		// using do-while
		// (can't be done with do-while loop)
//		int i = 1;
//		do
//		{
//			if (i > 5 && i < 10)
//			continue;
//			cout<<i<<" ";
//			i++;
//		}
//		while(i <= 15);
		
//		// using for
//		for (int i = 1; i <= 15; i++)
//		{
//			if(i>5 && i<10)
//			continue;
//			cout<<i<<" ";	
//		}

////		// using while
//		int i = 1;
//		
//		while(i <= 15)
//		{
//			if (i > 5 && i < 10)
//			continue;
//		
//		i++;
//		}

		// exit() function
		// used to terminate the C++ program before normal termination and exit to the OS
		// some compiler need library : stdlib.h
		
//		// exit(value);
//		int n = 3;
////		int n = -3;
//		if (n > 0)
//		cout<<"Positive"<<endl;
//		else
//		exit(0);

		// program 15: nested loop
		
		/**
			*****
			*****
			*****
			*****
		**/
		
//		// with for loop
//		for (int rows = 1; rows <= 4; rows++) // rows
//		{
//			for (int column = 1; column <= 10; column++) // columns
//			{
//				cout<<"*";
//			}
//			cout<<endl; // transfer printing to the next line
//		}
		
		// same with while loop
//		int rows = 1;
//		int columns = 1;
//		while (rows <= 4) // rows
//		{
//			for (columns = 1; columns <= 10; columns++) // columns
//			{
//				cout<<"*";
//			}
//			cout<<"\n"; // transfering to the next line
//			rows++;
//		}
		
		// same with do-while loop
		
//		do // rows
//		{
////			int columns = 1;
////			while(columns <= 10) // columns, using while loop
////			{
////				cout<<"*";
////				columns++;
////			}
//			
////			for (columns = 1; columns <= 10; columns++) // columns, using for loop
////			{
////				cout<<"*";
////			}
//
////			columns = 1;
////			do // columns, using do-while loop
////			{
////				cout<<"*";
////				columns++;
////			}
////			while (columns <= 10); // condition for columns
//
//
//			cout<<endl; // transfering to the next line
//			rows++;
//		}
//		while(rows <= 4); // condition for rows

	// program 16: for loop inside while loop
	/**
		1
		12
		123
		1234
		12345
	**/
//	
//	int rows = 1;
//	while (rows <= 5) // rows
//	{
//		for (int columns = 1; columns <= rows; columns++) // columns
//		{
//			cout<<columns<<" ";
//		}
//		cout<<endl; // transfering to the next line
//		rows++; // increment in rows
//	}

		// Review: write the following with switch satement
//		int choice, x = 7, y = 5;
//		cout<<"Enter choice: ";
//		cin>>choice;
//		if (choice == 1)
//		{
//			cout<<"SUM: "<<x+y<<endl;
//		}
//		else if(choice == 2)
//		{
//			cout<<"PRODUCT: "<<x*y<<endl;
//		}
//		else
//		{
//			cout<<"AVERAGE: "<<(x+y)/2<<endl;
//		}
//		
//		// solution
//		
//		switch (choice)
//		{
//			case 1:
//				cout<<"SUM: "<<x+y<<endl;
//				break;
//			case 2:
//				cout<<"PRODUCT: "<<x*y<<endl;
//				break;
//			default:
//				cout<<"AVERAGE: "<<(x+y)/2<<endl;
//		}


//	// Q: 
//	int k, sum;
//	k = 1, sum = 0;
//	
//	while(k < 9)
//	{
//		sum = sum + k;
//		cout<<k<<" "<<sum;
//		k = k+2;
//	}
//		// expected output
////		1 1
////		3 4
////		5 9
////		7 16
////		without endl
			
			
//			// Q: check this
//			int a, b, c;
//			a = 0; b = 1; c = 2;
//			a = b + c; // 1+2
//			b = ++a; // 1
//			c = b++; // c = 1 but in next call b will be 2 and then c will be 3
//			cout<<a<<" "<<b<<" "<<c<<endl;
//			// expected output

	
			// question: xi
			
//			for (int rows = 5; rows >= 1; rows--)
//			{
//				for (int columns = 1; columns <= rows; columns++)
//				{
//					cout<<columns<<" ";
//				}
//				cout<<endl; // transfering to the next line
//			}
//			
//			for (int rows = 1; rows <= 5; rows++)
//			{
//				for (int columns = rows; columns <= 5; columns++)
//				{
//					cout<<columns<<" ";
//				}
//				cout<<endl;
//			}


			// Chapter 4: Lab Activities
			// 1: read a number to print its square if it is > 10 else print cube of it
			
//			int num, square, cube;
//			cout<<"Enter number: ";
//			cin>>num;
//			square = num * num;
//			cube = num * num * num;
//			
//			if (num > 10)
//			{
//				cout<<square<<endl;
//			}
//			else
//			{
//				cout<<cube<<endl;
//			}

			// print largest among 3 numbers
			
//			int n1, n2, n3;
//			cout<<"Enter 3 numbers: "<<endl;
//			cin>>n1>>n2>>n3;
//			
//			if (n1 > n2 && n1 > n3)
//			{
//				cout<<n1<<" is greater"<<endl;
//			}
//			else if (n2 > n1 && n2 > n3)
//			{
//				cout<<n2<<" is greater"<<endl;
//			}
//			else
//			{
//				cout<<n3<<" is greater"<<endl;
//			}


			// read a letter and print whether it is lower or UPPER case letter
			// ASCII for small letters are b/w 96 and 124 and caps letters are b/w 65 and 97
			
//			char letter;
//			cout<<"Enter a lower or UPPER case letter"<<endl;
//			cin>>letter;
//			
//			if(letter > 64 && letter < 97)
//			{
//				cout<<"It is UPPER CASE LETTER"<<endl;
//			}
//			
//			else if(letter > 97 && letter < 124)
//			{
//				cout<<"It is lower case letter"<<endl;
//			}

			// read an integer and print its multiplicative table upto 20
			
//			int integer;
//			cout<<"Enter a number for its table: ";
//			cin>>integer;
//			int i = 1;
//			
//			while(i <= 20)
//			{
//				cout<<integer<<" * "<<i<<"\t= "<<i*integer<<endl;
//				i++;
//			}

			// read Basic Pay (BP) to calculate Net Pay (NP) based on following formula
			/**
				NP = BP + HR (House Rent)
				BP < 30000 then HR is 30%
				BP >= 30000 & <= 50000 then HR is 35%
				BP > 50000 then HR is 40%
			**/
			
//			int basic_pay, net_pay, house_rent;
//			cout<<"What is your Basic Pay: ";
//			cin>>basic_pay;
//			
//						
//			// conditions
//			if (basic_pay < 30000)
//			{
//				house_rent = (30*basic_pay)/100;
//				net_pay = basic_pay + house_rent;
//				cout<<"Your Net Pay is Rs. "<<net_pay<<endl;
//			}
//			else if (basic_pay >= 30000 && basic_pay <= 50000)
//			{
//				house_rent = (35*basic_pay)/100;
//				net_pay = basic_pay + house_rent;
//				cout<<"Your Net Pay is Rs. "<<net_pay<<endl;
//			}
//			else
//			{
//				house_rent = (40*basic_pay)/100;
//				net_pay = basic_pay + house_rent;
//				cout<<"Your Net Pay is Rs. "<<net_pay<<endl;
//			}
			
			
			
			// produce a table of equivalent of Fahrenheit and Celsius with increment of 5 from 50 to 100
			/***
				formula: c = (5/9)(f-32)
				fahrenheit	celsius
				50				9.90
				55				12.65
				.				.
				.				.
				.				.
				100				37.40
			***/
			
//			for (int temp = 50; temp <= 100; temp = temp + 5)
//			{
//			
//				float fahrenheit_celsius;
//				fahrenheit_celsius = (temp - 32)*0.56;
//				cout<<"Fahrenheit\tCelsius"<<endl;
//				cout<<temp<<"\t\t"<<fahrenheit_celsius<<endl<<endl;
//			}

			// print the sum of the following sequence using for loop and while loop
			//  30 + 33 + 36 + .... + 60
			
//			int sum = 0;
//			
//			for (int i = 30; i <= 60; i = i+3)
//			{
//				sum = sum + i;
//			}
//			cout<<sum;
			
			
			
			// with some extra work
			
//			int sum = 0;
//			for (int i = 30; i <= 60; i = i+3)
//			{
//				sum = sum + i;
//				cout<<i;
//				
////				if (i >= 30 && i < 60)
//				// OR both are ok, depends on logic
//				if (i < 60)
//				{
//					
//				cout<<" + ";
////					break;		// stops entire iteration
//					continue; // stops current iteration
//					
//				}
//								
//			}
//			cout<<" = "<<sum;
			
			// print all positive odd number upto 50 but skip only the divisible of 5 by using continue statement
			
//			for (int i = 1; i <= 50; i = i+2)
//			{
//				if (i % 5 == 0)
//				{
//					continue;
//				}
//				cout<<i<<" ";
//			}

			/// read an integer and print its fatorial
			// factorial of 4 is 1 * 2 * 3 * 4 = 24
			
//			int num, fact = 1;
//			cout<<"Enter a num for factorial: ";
//			cin>>num;
//			int i;
//			for (i = 1; i <= num; i++)
//			{
//				fact = fact * i;
//			}
//			cout<<fact;

			//	read all coeficients of a,b and c of quadratic equation
			/**
				ax^2+bx+c = 0
				print real solution of x
				
				if 
				x = (-b+- sqrt(b^2-4ac))2*a
				
				NOTE:
				if b^2-4ac = 0 then only 1 real solution
				if > 0 then 2 real solutions
				if < 0 then "No Real Solution"
				
			**/
			
//			// NEED TO SOLVE IT
//			int a, b, c, form;
//			cout<<"Enter the coeficients of ax^2 + bx + c = 0"<<endl;
//			cout<<"a = ";
//			cin>>a;
//			cout<<"\nb = ";
//			cin>>b;
//			cout<<"\nc = ";
//			cin>>c;
////			int bb, ac;
////			bb = b*b, ac = a*c;
////			form = bb-4*ac;
//			form = ((b*b)-(4*a*c));
//			
//			if (form < 0)
//			{
//				cout<<"NO REAL SOLUTION"<<endl;
//			}
//			else if (form > 0)
//			{
//				cout<<"2 REAL SOLUTIONs"<<endl;
//			}
//			else
//			{
//				cout<<"ONLY 1 REAL SOLUTION"<<endl;
//			}



  return 0;
}
