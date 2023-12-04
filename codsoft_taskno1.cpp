#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int random_number(int min, int max)
{
	srand(time(0));
	return rand()%(max-min+1)+min;
}

int main()
{
	int choice;
	do
	{
		cout<<"Choose an option:\n";
		cout<<"1. Play game\n";
		cout<<"2. Exit game\n";
		cout<<"Enter your choice: ";
		cin>>choice;
		
		switch(choice)
		{
			case 1:
			{
				cout<<"Enter the minimum number: ";
				int min_number;
				cin>>min_number;
				
				cout<<"Enter the maximum number: ";
				int max_number;
				cin>>max_number;
				
				int random_num=random_number(min_number, max_number);
				int guess_of_user;
				
				do
				{
					cout<<"Enter your guess (between "<<min_number<<" and "<<max_number<<"): ";
					cin>>guess_of_user;
					if(guess_of_user==random_num)
					{
						cout<<"Congratulations! You guessed the correct number.\n";
						break;
					}
					else if(guess_of_user<random_num)
					{
						cout<<"Too low! Try again.\n";
                    }
					else
					{
						cout<<"Too high! Try again.\n";
					}
				}
				while(true);
				break;
			}
			case 2:
				cout<<"Exiting the game. Goodbye!\n";
				break;
				default:
				cout<<"Invalid number\n";
		}
	}
	while(choice!=2);
	return 0;
}