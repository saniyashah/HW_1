#include <iostream>
using namespace std;
bool is_perfect(long int n);
int main()
{int n;
	cout<<"Enter a number ";
	cin >> n ;
	if (n==0)
		{
			cout<<"Goodbye";
		}
	else
	{
		if (is_perfect(n))
		{
			cout <<n;
			cout<< " is perfect" <<endl;
		}
		else
		{
			cout <<n;
			cout<<" is not perfect"<<endl;
		}
	}

	
	return 0;
}
bool is_perfect(long int n)
{
	int count=0;
	int k;
	for (k=1;k<=(n/2);k++)
	{
		if (n % k ==0)
		count=count+k;
	}
	if (count==n)
		return true;
	else
		return false;
	return 0;
}