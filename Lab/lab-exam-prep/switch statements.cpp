#include <iostream>

using namespace std;

int main(){
	
	
	//	Switch statements
	int a = 2;
	switch (a)
//	{
//		case (1):
//		cout<<"ONE"<<endl;
//	case (2):
//		cout<<"TWO"<<endl;
//	case (3):
//		cout<<"THREE"<<endl;
//	case (4):
//		cout<<"FOUR"<<endl;
//	
//	}

	{
		case (1):
			{
				int choice1;
				cout<<"enter 1: ";
				cin>>choice1;
				if (choice1 == 1)
				{
					cout<<"1: One"<<endl;
				}
				else
				cout<<"NOT ONE"<<endl;
			}
			break;
		case (2):
			{
				int choice2;
				cout<<"enter 2: ";
				cin>>choice2;
					if(choice2 == 2)
					{
						for (choice2 = 1; choice2 <= 4; choice2++)
						cout<<"choice 2 in if and for loop"<<endl;
					}
					else
					for (choice2 = 1; choice2 <=2; choice2++)
					{
						cout<<"choice in else"<<endl;
					}
			}
			break;
		case (3):
			cout<<"THREE"<<endl;
			break;
		default:
			cout<<"NOT ONE, TWO or THREE"<<endl;
	}
	
	
	return 0;
}
