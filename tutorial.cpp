#include <TutorialConfig.h>

#include <iostream>
#include <vector>

int main()
{
	std::vector<int> version = { VERSION_MAJOR, VERSION_MINOR, VERSION_BUGFIX, VERSION_BUILD};
	for (auto it = version.begin(); it != version.end(); ++it)
		{
		std::cout << *it;
		if (it != version.end() - 1)
			std::cout << ".";
		}
	
	return 0;
}