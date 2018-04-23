#include <fstream>
#include <iostream>
using namespace std;
main()
{
	string buff;
	ofstream fout("text.txt");
	getline(cin, buff);
	fout << buff;
		fout.close();
		return 0;
}
