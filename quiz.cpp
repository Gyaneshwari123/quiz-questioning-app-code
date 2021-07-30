//QUIZ APP

#include<iostream>
#include<windows.h>

using namespace std;

void ShowMenu()
{
	cout<<"=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n";
	cout<<"=*=*=*=*=*=*=*=*=*=*=*=# QUIZ #=*=*=*=*=*=*=*=*=*=*=*=*=\n";
	cout<<"=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n\n\n\n\n\n\n\n";
	
	cout<<"1. NEW QUIZ"<<endl<<"2. HIGHEST SCORE"<<endl<<"3. EXIT"<<endl<<endl<<endl;
	}
int main()
{
	system("COLOR 57 ");
	string questions[10]={
	" Q.1 Which one is not a correct variable type in C++",
	"Q.2 Which operation is used as Logical 'AND'",
	"Q.3 A C++ code line ends with ___",
	"Q.4 Default constructor has ____ arguments.",
	"Q.5 A class whose objects can not be created is known as _____",
	"Q.6 In CPP, members of a class are ______ by default.",
	"Q.7 In C++ Program, inline fuctions are expanded during ____",
	"Q.8 Which of the following is the address operator?",
	"Q.9 C++ is a ___ type of language.",
	"Q.10 The brain of  computer system is____"
	};

string options[10]={
"1. float	2. real		3. double	4. int",
"1. Operator-&	2. Operator-||	3. Operator-&&	4. Operator +",
"1. A Semicolon (;)	2. A Fullstop(.)	3.  A Comma (,)		4. A Slash (/)",
"1. No argument		2. One Argument		3. Two Argument		4. None of these",
"1. Absurd Class	2. Dead Class	3. Super Class	4. Abstract Class",
"1. Public	2. Private	3. Protected	4. Static",
"1. Run Time	2. Compile Time		3. Debug Time	4. Coding Time",
"1. @	2. #	3. &	4. %",
"1. High-level Language		2. Low-level Language		3. Middle-level Language		4. none of the above ",
"1. ALU		2. Control Unit		3. Mother Board		4. CPU"
};

int ans[10]={2, 3, 1, 1, 4, 2, 1, 3, 3, 4 };

string PlayerName;

int highestScore =0;

char ch='y';

while(ch=='y')
{
	int CurrentResult=0;
	string CurrentPlayer;
	system("CLS");
	ShowMenu();
	int menu;
	cin>>menu;
	
	switch(menu)
	{
		case 1:
			

			cout<<"ENTER YOUR NAME: "<<endl<<endl;
			cin>>CurrentPlayer;
			
			for(int i=0; i<10; i++){
			system("COLOR 37");
			system("CLS");
			cout<<"=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n";
			cout<<"=*=*=*=*=*=*=*=*=*=*=*=# QUIZ START #=*=*=*=*=*=*=*=*=*=*=*=\n";
			cout<<"=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n\n\n\n\n\n\n\n";
				int op;
				cout<<questions[i]<<endl<<endl;
				cout<<options[i]<<endl<<endl;
				cout<<"Enter options: ";
				cin>>op;
				if(op==ans[i]){
					CurrentResult++;
					if(CurrentResult>highestScore){
						highestScore=CurrentResult;
						PlayerName=CurrentPlayer;
						}
				}
			}
			cout<<"\n\n\n"<<"==*==*==//==*==*==\n\n"<<"YOUR SCORE: "<<CurrentResult<<endl;
			break;
			
			case 2:
			system("COLOR F9");
			cout<<"=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n";
			cout<<"=*=*=*=*=*=*=*=*=*=*=*=# HIGHEST SCORE #=*=*=*=*=*=*=*=*=*=*=\n";
			cout<<"=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n\n\n\n\n";
			cout<<"Highest Score: "<< highestScore<<" By "<<PlayerName<<endl<<endl;
			break;
			
			case 3:
			system("COLOR 64");
			cout<<"THANK YOU for using this App...";
			exit(0);
			break;
			default:
			cout<<"Wrong Selection";
				
	}
	
	cout<<"Do you want to continue y/n ?";
	cin>>ch;
	}
}

