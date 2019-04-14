#include<iostream>
#include<cstdlib>
#include<ctime>

int *getRandNumPtr()
{
	int x=rand();
	return &x;
}

int main()
{
	int *randNumPtr=getRandNumPtr();
	cout<<*randNumPtr;
	return 0;
}