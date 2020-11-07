#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <bitset>
#include <stack>
#include <string>

using namespace std;

int main()
{
	//1.1
	vector<int> mas;
	ifstream P;
	ofstream Q;
	P.open("file.txt");
	int t;
	while (!P.eof()) {
		P >> t;
		mas.push_back(t);
	}
	int x = mas.size();
	cout << x;
	cout << "\n";
	int l = 0;
	sort(mas.begin(), mas.end());
	for (l; l < x;l++) {
		cout << mas[l]<< " ";
	}
	Q.open("file1.txt");
	for (int i = 0; i < x; i++)
		Q << mas[i] << " ";

	//1.2
	int chislo;
	cin >> chislo;
	bitset<5> b1(chislo);
	cout << b1 << endl;


	//1.3
	stack <int> s1;
	while (chislo != 0) {
		s1.push(chislo % 2);
		chislo = chislo / 2;
	}
	int i;
	
	while (!s1.empty())
	{
		cout << s1.top();
		s1.pop();
	}
	system("pause");
	return 0;
}