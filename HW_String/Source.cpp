#include<iostream>
#include <stdlib.h>
#include<time.h>
#include<string>
using namespace std;
//������� ���������� ���������� � ������
int polindrom(string word) {
	int s = word.length();
	for (int i = 0; i < s; i++)
		word[i] = toupper(word[i]);
	for (int i = 0; i < s / 2; i++) {
		if (word[i] != word[s - i - 1]) {
			return false;
		}
		return true;
	}
}
int polindromStr(string s) {
	string s2 = s;
	int s1 = s.length();
	int n = s1 - 1;
	for (int i = 0; i < (s1 / 2); i++) {
		swap(s[i], s[n]);
		n -= 1;
	}
	if (s2 == s)
		return true;
	else
		return false;
}

int find(string w) {
	

	int counter = 0;
	for (int i = 0; i < w.length(); i++)
		if (w[i] == ' ' || w[i] == '!' || w[i] == '?' || w[i] == ',' || w[i] == '.')
			counter++;
	

	return counter;
}

int main() {
setlocale(LC_ALL, "ru");
srand(time(NULL));
string str,res;


 cout << "������ 1\n";
str = "Good morning!";
cout << "����������� ������: " << str << endl;
char sym='o';
for (int i = 0; i < str.length(); i++)
	if (str[i] == sym)
		res += sym;
cout << "����� ������ = " << res << endl;

cout << "������ 2\n";
cout << "������� �����: ";
getline(cin,str);
(polindromStr(str) == 1) ? cout << "TRUE"<<endl : cout << "FALSE" <<endl;



cout <<"������ 3\n";
cout<<"������� ������: ";
getline(cin, str);
cout<<find(str);





system("pause>nul");
return 0;
}