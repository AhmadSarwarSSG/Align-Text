#pragma once
//BSEF19M034-Ahmad sarwar
class Align
{
private:
	char aplha[1000];
public:
	Align()
	{

	}
	Align(char a[1000])//Setting the String
	{
		for (int i = 0; i < 1000; i++)
		{
			aplha[i] = a[i];
		}
	}
	Align printrightaligned(int);
	Align printleftaligned(int);
};
