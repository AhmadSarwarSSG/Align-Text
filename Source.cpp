//BSEF19M034-Ahmad Sarwar
#include<iostream>
#include<string>
#include"Alg.h"
using namespace std;
int main()
{
		char check[1000];//Stirng
		cout << "Enter Your String:";
		cin.getline(check, 1000);
		int a=10;
		Align right(check);
		right.printrightaligned(a);
		int b=10;
		Align left(check);
		left.printleftaligned(b);
		return 0;
}