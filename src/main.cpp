#include <iostream>

int main()
{
	std::cout << "Hello world" << std::endl;
	
	// static code analyzer test
	int a[3] = {1, 2, 3};
	std::cout << a[0] << " " << a[2] << std::endl;
	return 0;
}

