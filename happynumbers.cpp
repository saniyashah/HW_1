#include <iostream>
using namespace std;

int main()
{
	int i;
	int j;
	int number;
	int count=0;
	int m;
	int k;
	int count2=0;
	for(number=1;count2<10000;number++)
	{
		m=number;
		count=0;
		while(count!=1 && count!=4)
		{
			count=0;
			while(m>0)
			{
			k=m%10;
			k=k*k;
			count=count+k;
			m=m/10;
			//cout<<"i is: "<< i << " m is "<<m<<" count is "<< count<< endl;
			}
			m=count;
			/*for(j=0;j<i;j++)
			{
				myList[j]=myList[i]*myList[i];
				count=count+myList[j];
				cout<<count;
			}
		*/
		}
		if(count==1)
		{
			
			count2=count2+1;
			if ((count2%10)==0)
				cout<<number<<endl;
			else
				cout<<number<< " " ;
			count=0;

		}
		else
			count=0;
				
			
	}
	return 0;
}