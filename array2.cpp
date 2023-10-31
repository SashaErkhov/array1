#include <iostream>
#include <ctime>

using arrty = unsigned long long int;
const arrty len = 20;

int counterArray(arrty arr1[])
{
	/*arrty now[len];
	int mnow = 0;*/
	int count = 1;
	int mcnt = 0;
	for (size_t i = 0; i != len-1; ++i)
	{
		if (arr1[i]<arr1[i+1])
		{
			++count;
			/*now[count-1] = i;*/
		}
		else
		{
			if (mcnt < count)
			{
			mcnt = count;
			/*mnow = now[1];*/
			}
			count = 1;
		}
	}
	return mcnt;
}



int main()
{
	
	arrty N[len];
	for (size_t i = 0; i != len; ++i)
	{
		N[i] = i + 1;
		std::cout << N[i]<<" ";
	}
	std::cout << std::endl;

	srand(time(0));
	arrty Ncopy[len] = { N[0] };
	arrty NIndex[len];
	for (size_t i = 0; i != len; ++i)
	{
		NIndex[i] = 1;
	}
	for (size_t i = 1; i != len; ++i)
	{
		while (true)
		{
			int r = rand() % len;
			if (NIndex[r] != 0)
			{
				Ncopy[i] = N[r];
				NIndex[r] = 0;
				break;
			}
		}
	}
	for (int i = 0; i != len; ++i)
	{
		std::cout << Ncopy[i] << " ";
	}
	std::cout << std::endl;

	/*for (size_t i = 0; i != len; ++i)
	{
		arr1[i] = rand() % 10 + 1;
		std::cout << arr1[i] << " ";
	}
	std::cout << std::endl;*/



	std::system("pause");
    return 0;
}

