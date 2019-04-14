#include <iostream>
#include <cstlib>
#include<ctime>

int main()
{
	srand(time(0));
	int randNum=rand();
	std::cout<<"A random numer:"<<randNum<<endl;
	return 0;
}