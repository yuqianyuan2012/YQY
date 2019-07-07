#include<string>
#include<iostream>

using namespace std;


int main()
{
	string strIn;
	cin >> strIn;
	int strLen = strIn.length();
	int letters = 0;
	int nums = 0;
	int otherWords = 0;
	for (int i = 0; i < strLen; i++)
	{
		if (isdigit(strIn[i]))
			nums++;
		else if (isalpha(strIn[i]))
			letters++;
		else
			otherWords++;
	}
	cout << nums << letters << otherWords << endl;
	return 0;

}