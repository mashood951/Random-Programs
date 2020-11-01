#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name;
	cout << "Enter a name : " << endl;
	getline(cin, name);
	for (int i = 0; i < name.size(); i++)
	{
		cout << (int)name[i] << endl;
	}
	system("pause");
	return 0;
}
