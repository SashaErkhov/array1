#include <iostream>

using arrty = unsigned long long int;

int main()
{
	const arrty len = 20;
	arrty arr1[len];
	for (size_t i = 0; i != len; ++i)
	{
		arr1[i] = rand() % 10 + 1;
		std::cout << arr1[i] << " ";
	}
	std::cout << std::endl;

	arrty now[len];
	int mnow = 0;
	int count = 1;
	int mcnt = 0;
	for (size_t i = 0; i != len-1; ++i)
	{
		if (arr1[i]<arr1[i+1])
		{
			++count;
			now[count-1] = i;
		}
		else
		{
			if (mcnt < count)
			{
				mcnt = count;
				mnow = now[1];
			}
			count = 1;
		}
	}
	std::cout << mnow << std::endl;
	std::cout << mcnt<<std::endl;
	std::system("pause");
    return 0;
}

