#include <iostream>
#include <string>
#include <cstring>

const int len = 20;
unsigned long long int A[len];
long double B[len];
unsigned long long int count = 0;
long double C[len];
unsigned long long int D[len];

template <typename T>
void space(T cnt)
{
	for (int i = 0; i != cnt; ++i)
	{
		std::cout << ' ';
	}
}

//template <typename T>
//T maximum(T n[],int len)
//{
//	T max = 0;
//	for (int i = 0; i != len; ++i)
//	{
//		if (max < n[i]) max = n[i];
//	}
//	return max;
//}

template <typename T>
std::string binary(T n)
{
	std::string output = "";
	while (n != 0)
	{
		output = char(n % 2 + 48) + output;
		n /= 2;
	}
	return output;
}

#ifdef DEBUG
void tester()
{
	std::cout << "10 = " << binary(10);
	std::cout << "8 = " << binary(8);
	std::cout << "1 = " << binary(1);
	std::cout << "0 = " << binary(0);
}
#endif // DEBUG



int main()
{
#ifdef DEBUG
	tester();
	return 0;
#endif // DEBUG

	std::cout << "N= ";
	for (int i = 0; i != len; ++i)
	{
		A[i] = i+1;
		std::cout << A[i] << " ";
	}
	std::cout << std::endl;
	
	std::cout << "2 = ";
	for (int i = 0; i != len; ++i)
	{
		count += A[i];
		B[i] = count;
		std::cout << B[i] << " ";
	}
	std::cout << std::endl;
	count = 0;
	std::cout << "3 = ";
	for (int i = 0; i != len; ++i)
	{
		count += A[i]*A[i];
		A[i] = count;
		std::cout << A[i] << " ";
	}
	std::cout << std::endl;
	//A-3
	//B-2
	std::cout << "/ = ";
	for (size_t i = 0; i != len; ++i)
	{
		C[i] = A[i] / B[i];
		std::cout << C[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "4 = ";
	for (size_t i = 0; i != len; ++i)
	{
		std::string bin = binary(A[i]);
		int count = 0;
		for (int i = 0; i != bin.length(); ++i)
		{
			if (bin[i] == '1')
			{
				++count;
			}
		}
		D[i] = count;
		std::cout << D[i] << " ";
	}
	std::cout << std::endl;
	//unsigned long long int maxA = maximum(A,len);
	///*unsigned long long int maxA = maximum(A, len);
	//unsigned long long int maxA = maximum(A, len);*/

	for (size_t i = 0; i != len; ++i)
	{
		std::cout << A[i];
		space(std::to_string(A[len - 1]).length() - std::to_string(A[i]).length());
		std::cout << "      ";
		space(std::to_string(B[len - 1]).length() - std::to_string(B[i]).length());
		std::cout << B[i]<<std::endl;
	}


	std::system("pause");
    return 0;
}

