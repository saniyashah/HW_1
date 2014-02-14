// Program to check for the multipbase palindromicity

#include <iostream>
using namespace std;

#define MAX_NUM 100

int main()
{
	int number;
	int myList[MAX_NUM];
	int i, j, x;
	int count=0;

	cout<<"Enter a number to test for palindromicity: ";
	cin>>number;

	int savenum=number;

	for(x=2;x<number;x++) // Loop from 2 to number-1
	{
		count=0;
		for(i=0;i<MAX_NUM;i++) // convert to the base
		{
			myList[i]=number%x;
			number=number/x;
			if(number==0)
				break;
		}
		i++;   // Length of the converted number

		for(j=0;j<i;j++) // Check for palindromicity
		{
			if(myList[j]==myList[i-(j+1)])
			{
				count++;
				if(count==(i/2)) //Did we reach half way?
				{
					cout<<x<<endl;
					break;
				}
			}
			else
				break;
		}
		number = savenum;   // Restore the number
	}
	return 0;
}