#include"Item.h"

int main()
{
	//Item* item = new Weapon("°Ë", "°Ì³ª¼À", 10, 1000, 100);
	//item->Describe();

	std::string test = "testtt mam aa";
	std::string save = "";

	test = test.substr(test.find(" ") + 1);
	save = test.substr(0, test.find(" "));
	std::cout << save << std::endl;

	return 0;
}