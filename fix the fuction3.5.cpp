#include <iostream>
using namespace std;

int sum(const int x, const int y)
{
	return x+y;
}

int main ()
{
	std::cout<<sum(1,2);
	return 0;
}
