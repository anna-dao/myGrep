//Grep - like program that search for substring in the stdin and prints lines that contain substring(expected usage of this program: 
//“cat pubspec.lock | grep sha256 “)

#include <iostream>
#include <string>

void myGrep(char* argv);

int main(int argc, char* argv[])
{
	if (argc == 2)
		myGrep(argv[1]);
	else
		std::cout << "Unfortunately, the program couldn't recognize data" << std::endl;
	system("pause");
	return 0;
}

void myGrep(char* argv)
{
	std::string text;
	std::cout << "Please enter text, where " << argv << " has to be found:" << std::endl;
	std::getline(std::cin, text);
	if (text.find(argv) == std::string::npos)
		std::cout << "Not found" << std::endl;
	else
		std::cout << text << std::endl;
}