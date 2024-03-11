#include<iostream>
#define CANDIDATE1 "| PARTY C++        | <NISHA AHAMED> |    001   |"
#define CANDIDATE2 "| PARTY C          | <KRISHNA>      |    002   |"
#define CANDIDATE3 "| PARTY PYTHON     | <MAYURI>       |    003   |"
#define CANDIDATE4 "| PARTY JAVA       | <SAMEERA>      |    004   |"
#define CANDIDATE5 "| PARTY JAVASCRIPT | <ARUN KUMAR>   |    005   |"
#define NOTA       "|               NOTA                |    006   |"
using namespace std;

int vote1=0;
int vote2=0;
int vote3=0;
int vote4=0;
int vote5=0;
int nota_vote=0;
int choice;

void vote_cast()
{
	cout<<"---------"<<endl;
	cout<<"|PARTIES|"<<endl;
	cout<<"---------"<<endl;
	cout<<endl;
	cout<< CANDIDATE1 <<endl;
	cout<< CANDIDATE2 <<endl;
	cout<< CANDIDATE3 <<endl;
	cout<< CANDIDATE4 <<endl;
	cout<< CANDIDATE5 <<endl;
	cout<< NOTA <<endl;
	cout<<endl;
	cout<<"ENTER THE NUMBER OF THE CANDIDATES FROM THE LIST ABOVE IN BELOW CHOICE LIST  ";
	cout<<endl;
	
	cout<<"Enter your choice =";
	cin>>choice;
	cout<<endl;
	
	
	switch(choice)
	{
		case 1:vote1++;
		break;
		case 2:vote2++;
		break;
		case 3:vote3++;
		break;
		case 4:vote4++;
		break;
		case 5:vote5++;
		break;
		case 6:nota_vote++;
		break;
	}
	cout<<"THANKS FOR YOUR VOTING !!!"<<endl;
	cout<<endl;
	
}
void vote_count()
{
	cout<<"--------------"<<endl;
	cout<<"| VOTE COUNT |"<<endl;
	cout<<"--------------"<<endl;
	cout<<endl;
	cout<< CANDIDATE1 << vote1 <<endl;
	cout<< CANDIDATE2 << vote2 <<endl;
	cout<< CANDIDATE3 << vote3 <<endl;
	cout<< CANDIDATE4 << vote4 <<endl;
	cout<< CANDIDATE5 << vote5 <<endl;
	cout<< NOTA << nota_vote <<endl;
	cout<<endl;
}
 void leading_candidate()
 {
 	cout<<" # LEADING CANDIDATE #"<<endl;
	 cout<<endl; 
 	if(vote1>vote2&&vote1>vote3&&vote1>vote4&&vote1>vote5){
 		cout<<CANDIDATE1<<" is leading "<<endl;
	 }
 	else if(vote2>vote1&&vote2>vote3&&vote2>vote4&&vote2>vote5){
 		cout<<CANDIDATE2<<" is leading "<<endl;
	 }
	else if(vote3>vote1&&vote3>vote2&&vote3>vote4&&vote3>vote5){
 		cout<<CANDIDATE3<<" is leading "<<endl;
	 }
	else if(vote4>vote1&&vote4>vote2&&vote4>vote3&&vote4>vote5){
 		cout<<CANDIDATE4<<" is leading "<<endl;
	 }
	else if(vote5>vote1&&vote5>vote2&&vote5>vote3&&vote5>vote4){
 		cout<<CANDIDATE5<<" is leading "<<endl;
	 }
	else{
		cout<< "NO WINNING CHANCE BECAUSE NOTA IS HIGH"<<endl;
	}
	cout<<endl;
 }
  int main()
  {
  	int age;
  	cout<<endl;
  	cout<<"-------------------------------------WELCOME FOR VOTING--------------------------------------"<<endl;
  	cout<<endl;
  	cout<<"Enter your age =  ";
  	cin>>age;
  	cout<<endl;
  	
  	if(age>=18)
  	{
  		do
		  {
		  	cout<<"--------------------------------------"<<endl;
  			cout<<" WELCOME TO TAMILNADU VOTING COUNTER "<<endl;
  			cout<<"--------------------------------------"<<endl;
  			cout<<endl;
  			cout<<" 1. VOTE CAST "<<endl;
  			cout<<" 2. VOTE COUNT "<<endl;
  			cout<<" 3. LEADING CANDIDATE "<<endl;
  			cout<<" 0. EXIT "<<endl;
  			cout<<endl;
  			
  			cout<<" Enter your choice : ";
  			cin>>choice;
  			cout<<endl;
  			cout<<endl;
  			
  			
  			switch(choice)
  			{
  				case 1: vote_cast();
				break;
  				case 2: vote_count();
				break;
  				case 3: leading_candidate();
				break;
  				deafult: cout<<" Error "<<endl;
  				break;
  				
			  }
		  }
		while(choice!=0);
	}
	else
	{
	  	cout<<" YOU ARE NOT ELIGIBLE FOR VOTING "<<endl;
	}
	  return 0;
  }
