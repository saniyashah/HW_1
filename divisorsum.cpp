#include <iostream>
using namespace std;
int main()
{
	int x;
	int k;
	int count=0;
	for (x=1;x<1001;x++)
		{for (k=1;k<=(x/2);k++)
			{if (x % k ==0)
				count=count+k;}
	}
	cout <<count << endl;
	return 0;
}
