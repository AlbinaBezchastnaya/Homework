#include <iostream>
#include <string>

using namespace std;

int IsKPeriodic(const string& txt, const string& pat)
{
	int k = 0;
	for (int i = 0; i < txt.size(); i++)
	{
		for (int j = 0; j < pat.size(); j++)
		{
			cout << pat[j] << " " << txt[i] << endl;
			cout << pat.size() << endl;
			cout << txt.size() << endl;

			if (pat[j] != txt[i])
			{
				return -1;
				break;
			}
			if (pat[j] == txt[i] && j != pat.size() - 1)
			{
				i++;
			}
			if (pat[j] == txt[i] && j == pat.size() - 1)
			{
				k = j + 1;
			}
		}
	}
	return k;
}

int main()
{
	setlocale(LC_ALL, "");
	string txt;
	string pat;
	cout << "Введите текст: " << endl;
	cin >> txt;
	cout << "Введите паттерн: " << endl;
	cin >> pat;
	string txtt = "abcabcabcabcabcabc";
	cout << txtt << endl;
	string patt = "abc";
	int k = IsKPeriodic(txtt, patt);
	cout << "Кратность строк равна: " << k << endl;

}