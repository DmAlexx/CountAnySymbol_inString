#include <iostream>

int main()
{
	char ch;
	int counter = 0;
	std::string str;
	std::cout << "Enter string or 0 to break" << std::endl;

	while (true)
	{
		std::cin >> str;
		if (str == "0")
		{
			break;
		}
		else
		{
			std::cout << "Enter symbol that you want to count" << std::endl;
			std::cin >> ch;
			for (int i = 0; i < str.size(); ++i)
			{
				if (str[i] == ch)
				{
					++counter;
				}
			}
			std::cout << "count of " << ch << " = " << counter << std::endl;
		}
	}
	return 0;
}