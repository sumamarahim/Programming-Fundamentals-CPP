/**
Nature of the problem, Problem origin, Problem solution idea

Sometimes it is very hard to say that who need blockchain. I was worry on that how to tell any 
company they need blockchain or not.  It comes to my mind when I was working on presentation 
on "Blockchain" topic. Then I drew a flowchart for it started working on it.

I believe it needs more improvements

Dated: 12/14/2024, Time Created: 2203 and Completed On: 0007 (12/15/2024), Total Time Taken is 2 hours and 4 minutes
Sumama Rahim

**/

#include <iostream>
using namespace std;

// returns if no need to implement any blockchain
int no_need_bc()
{
	string msg = "You don't need to implement any Blockchain"; 
	cout<<"\n\t\t*** Final Study ***\n";
	cout<<"\n****** "<<msg<<" ******"<<endl;
	return 0;
}

// returns if public blockchain should be implement
int use_public_bc()
{
	string msg = "You have to use public Blockchain network";
	cout<<"\n\t\t*** Final Study ***\n";
	cout<<"\n****** "<<msg<<" ******"<<endl;
	return 0;
}

// return if private blockchian should be implement
int use_private_bc()
{
	string msg = "You have to use private Blockchain network";
	cout<<"\n\t\t*** Final Study ***\n";
	cout<<"\n****** "<<msg<<" ******"<<endl;
	return 0;
}

// question: any control who can make changes to blockchain s/w?
int any_control_sw_changes()
{
	char answer;
	cin>>answer;
	switch (answer)
	{
		case 'y':
			cout<<use_private_bc();
			break;
		case 'n':
			cout<<use_public_bc();
			break;
		default:
			cout<<"Wrong input use only 'y' or 'n'"<<endl;
	}
	return 0;
}


// question: is data private or not?
int is_data_private()
{
	char answer;
	cin>>answer;
	switch (answer)
	{
		case 'y':
			cout<<use_private_bc()<<endl;
			break;
		case 'n':
			cout<<"\tAny control on who can make changes to the Blockchain software? ";
			cout<<any_control_sw_changes()<<endl;
			break;
		default:
			cout<<"Wrong input, please use only 'y' or 'n'"<<endl;
			break;
	}
}

int main()
{
	char answer;
	string wrong_input_msg = "wrong input please try only 'y' or 'n'";
	// Start - Possible questions - to find the need of Blockchain 
	string q1 = "Is traditional DB fullfil all your needs?";
	string q2 = "Can multiple parties update data?";
	string q3 = "Do all parties trust each other?";
	string q4 = "Do all parties trust 3rd party?";
	string q5 = "Are you worried about data altered and do you need multiple copies of data?";
	string q6 = "Are you deal in private data?";
	
	// End - Possible questions
	
	// display some important info
	cout<<"\n\t\t\tNOTE\n\t\t******************"<<endl;
	cout<<"This is a basic program to solve following problems: "<<endl;
	cout<<"1. Do you need blockchain network?"<<endl;
	cout<<"2. If yes, which type network you have to use?"<<endl;
	cout<<"\n*************************************************************\n"<<endl;

	// actual program starts here

	// question number 1 - working properly
	cout<<"\t"<<q1<<" ";
	cin>>answer;
	switch (answer)
	{
		case 'y':
			cout<<no_need_bc()<<endl;
			break;
		case 'n':
			{
					// question 2
				cout<<"\t"<<q2<<" ";
				cin>>answer;
				switch (answer)
				{
					case 'n':
						cout<<no_need_bc()<<endl;
						break;
					case 'y':
						{
							// questoin 3
							cout<<"\t"<<q3<<" ";
							cin>>answer;
							switch (answer)
							{
								case 'y':
									{
										// question 5
										cout<<"\t"<<q5<<" ";
										cin>>answer;
										switch (answer)
										{
											case 'y':
												{
													cout<<"\t"<<q6<<" ";
													cout<<is_data_private()<<endl;
												}
												break;
											case 'n':
												{
													cout<<no_need_bc()<<endl;
												}
												break;
											default:
												cout<<"Wrong input, please try 'y' or 'n' only"<<endl;
										}		
									}
									break; // to jump question 5 use goto here
								case 'n':
									{
											// question 4
										cout<<"\t"<<q4<<" ";
										cin>>answer;
										switch (answer)
										{
											case 'y':
												cout<<no_need_bc()<<endl;
												break;
											case 'n':
												{
													// question 6
													cout<<"\t"<<q6<<" ";
													cout<<is_data_private()<<endl;
													
												}
												break;
											default:
												cout<<"Wrong input, please try  'y' or 'n'"<<endl;
												break;
										}
									}
							}
							
						}
						
						break;
					default:
						cout<<wrong_input_msg;
						break;
				}
			}
			break;
		default:
			cout<<wrong_input_msg;
			break;
	}

	return 0;
}
