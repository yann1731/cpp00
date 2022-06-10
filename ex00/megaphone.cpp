#include <iostream>
#include <string>
#include <algorithm>

int main(int argc, char **argv)
{
	int i = 0;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << "\n";
		return (0);
	}
	else
	{
		while (argv[++i])
		{
			for (int j = 0; argv[i][j]; j++)
				argv[i][j] = std::toupper(argv[i][j]);
			std::cout << argv[i];
		}
	}
	return (0);
}