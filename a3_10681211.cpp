
#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	float mark;
	char option;
	do{
	
	cout <<"input your mark"<<endl;
	cin >>mark;
	if(mark>100)
	{
		cout <<"You have exceeded the limit"<<endl;
	}
	else if(mark>=79.5 )
	{
		cout<<"EXCELLENT! You had an 'A'"<<endl;
	}
	else if(mark>=74.5)
	{
		cout << "BRAVO! You had a 'B+'"<<endl;
	}
	else if(mark>=65.5)
	{
		cout <<"WELL DONE! You had a 'B'"<<endl;
	}
	else if(mark>=59.5)
	{
		cout<<" You had a 'C+'"<<endl;
	}
	else if (mark>=55.5)
	{
		cout<<" You had a 'C'"<<endl;
	}
	else if(mark>=49.5)
	{
		cout<<"You had a 'D+'"<<endl;
	}
	else if(mark>=44.5)
	{
		cout<<"You had a 'D'"<<endl;
	}
	else if(mark>=39.5)
	{
		cout<<"You had an 'E'"<<endl;
	}
	else if (mark<39.5)
	{
		cout<<"You had an 'F'."<<endl;
	}

	cout<<"Do you want to continue y/n ?";
	option=getche();
	cout<<endl;
	
}
		while(option=='y');
	
	return 0;
}
