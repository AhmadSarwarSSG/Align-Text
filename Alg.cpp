//BSEF19M034-Ahmad Sarwar
#include "Alg.h"
#include<iostream>
using namespace std;
Align Align::printrightaligned(int a)
{
	Align obj;
	int a_1;
	a_1 = a;
	int mul = a_1;
	char* check;
	check = new char[a_1];
	int Count = 0;
	int m = 0;
	int n = 0;
	int f = 0;
	int g = 0;
	int a2 = 0;
	int k = 0;
	while (aplha[k] != '\0')//To count the number of alphabets
	{
		a2++;
		k++;
	}
	int n1 = 0;
	do
	{
		cout << "\n";//To move to the next line
		cout << "\t\t\t\t\t\t\t\t";//to add space bfore
		for (int i = n; i <= mul; i++)
		{
			if (i <= mul)
			{
				if (aplha[i] == ' ' || aplha[i] == '\0')//checking apfter every space or teminating character
				{
					for (int j = 0; j < mul - i; j++)
					{
						check[j] = ' ';//gives space before line if entements are less than desired elemnts
					}
					m = g;
					for (int j = mul - i; j <= a_1; j++)
					{
						check[j] = aplha[m];//Sotre the element after spaces
						m++;
						n = i;
					}
				}
			}
		}
		n = n + 1;
		n1 = n;
		int m = n;
		mul = n + a_1;
		g = n;
		for (int i = 0; i < a_1; i++)
		{
			cout << check[i];//Prints the final string
		}
		f++;
	} while (n <= a2);// it runs until the last word
	return obj;
}
Align Align::printleftaligned(int a)
{
	Align obj;
	int a_1;
	a_1 = a;
	int mul = a_1;
	char* check;
	check = new char[a_1];
	int Count = 0;
	int m = 0;
	int n = 0;
	int f = 0;
	int g = 0;
	int a2 = 0;
	int k = 0;
	while (aplha[k] != '\0')// to count total aplhabets
	{
		a2++;
		k++;
	}
	int n1 = 0;
	do
	{
		cout << "\n";//Moving to next line
		for (int i = n; i <= mul; i++)
		{
			if (aplha[i] == ' ' || aplha[i] == '\0')//checking words after space
			{
				if (i <= mul)
				{
					m = g;
					for (int j = mul - i; j < a_1; j++)
					{
						check[j] = ' ';//Print space after line completion in place of empty spaces
					}
					for (int j = 0; j < i - n1; j++)
					{
						check[j] = aplha[m];//Gets the total alphabets of line
						m++;
						n = i;
					}
				}
			}
		}
		n1 = n;
		n = n + 1;
		mul = n + a_1;
		g = n;
		for (int i = 0; i < a_1; i++)
		{
			cout << check[i];//Final Prints the line
		}
		f++;
	} while (n <= a2);//Runs until the final alphabets
	return obj;
}
