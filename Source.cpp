#include <iostream>
#include <bitset>

int main()
{
	int output[] = { 6192, 32508, 65534, 65534, 32764, 8176, 1984, 256};
	char key[] = "love";

	//for each row in the field
	for(int i = 0; i < 8; i++)
	{
		//	for each column in the field
		for(int j = 0; j < 32; j++)
		{
			if((1 << j) & output[i])
			{
				std::cout << key[j%4];
			}
			else
			{
				std::cout << " ";
			}
		}
		std::cout << std::endl;
	}
	return 0;
}