

#include <iostream>
#include <fstream>
#include <string>


using namespace std;





int main()
{
	char Content[80];
	ifstream InputFile;

	InputFile.open("C0605_Study.txt");
	
	while (InputFile.getline(Content, 80)
	{

		cout << Content << endl;


	}

	InputFile.close();
	
	
	










/*
	FILE* fp = fopen("C0605_Study.txt", "r");

	char c = 0;
	char line[80];

	while (fgetc(line, 80, fp) != nullptr)
	{
		cout << line;


	}

	fclose(fp);
*/

	return 0;

}