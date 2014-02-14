#include <iostream>
using namespace std;
int main()
{

	
	double myList[4];
	if(!cin.eof()) 
	cin>> myList[0];
	if(!cin.eof()) 
	cin>> myList[1];
	if(!cin.eof()) 
	cin>>myList[2];
	if(!cin.eof()) 
	cin>>myList[3];

	while (true)
	{
		//if(myList[3]==(myList[2])+1==(myList[1])+2==(myList[0])+3)
if(myList[3]==(myList[2])+1 && myList[3]==(myList[1])+2 && myList[3]==(myList[0])+3)
			{
			cout<<"Quadruplet Found ";
			cout<<myList[0];
			cout<<myList[1];
			cout<<myList[2];
			cout<<myList[3];
			break;
			}
		myList[3]=myList[2];
		myList[2]=myList[1];
		myList[1]=myList[0];
		cin>> myList[0];

		if(cin.eof()) 
			break;
	}
return 0;
}
		


