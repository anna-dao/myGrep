//Grep - like program that search for substring in the stdin and prints lines that contain substring(expected usage of this program: 
//“cat pubspec.lock | grep sha256 “)

#include <iostream>
#include <string>
#include <fstream>

void myGrep(char* word, char* filename);

int main(int argc, char* argv[])
{
	if (argc >= 2)
		myGrep(argv[1], argv[2]);
	else
		std::cout << "Unfortunately, the program couldn't recognize data" << std::endl;
	system("pause");
	return 0;
}

void myGrep(char* word, char* filename)
{
	std::ifstream file(filename);
	if (!file.is_open())
	{
		std::cout << "Could not open the file." << std::endl;
		return;
	}
	std::string line;
	std::getline(file, line);
	if (line.find(word) == std::string::npos)
		std::cout << "Not found" << std::endl;
	else
		std::cout << line << std::endl;
}