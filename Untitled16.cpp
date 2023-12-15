#include <iostream>

using namespace std;

int main()
{
	//1'den 100'e kadar tek sayıları yazdıralım.. 
	int a;
	a = 1;
	while(a<100)
	{
		cout << a << " ";
		a += 2;
	}
	
	cout << endl;
	
	for(int b = 1; b<100; b +=2)
	{
		cout << b << " ";
	}
	
	cout << endl;
	
	int c= 1;
	do
	{
		cout << c << " ";
		c += 2;
	}
	while(c<100);
	
	cout << endl;
	
	int d = 1;
	while(d<100)
	{
		if(d % 2 ==1)
		{
			cout << d << " ";
		}
		d++;
	}
	
	cout << endl;
	
	for (int e = 1; e<100; e++)
	{
		if(e % 2 == 1)
		{
			cout << e << " ";
		}
	}
	
	return 0;
}