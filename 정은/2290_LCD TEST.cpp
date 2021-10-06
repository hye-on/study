#include <iostream>
#include <string>
using namespace std;

int s = 0;
string n = "";
int temp[10][7] = {
		{1,1,1,0,1,1,1}, //0
		{0,0,1,0,0,1,0}, //1
		{1,0,1,1,1,0,1}, //2
		{1,0,1,1,0,1,1}, //3
		{0,1,1,1,0,1,0}, //4
		{1,1,0,1,0,1,1}, //5
		{1,1,0,1,1,1,1}, //6
		{1,0,1,0,0,1,0}, //7
		{1,1,1,1,1,1,1}, //8
		{1,1,1,1,0,1,1}  //9
};

void monitor(char c, int index) {
	int x = c - '0';
	if (index % 3 == 0) {
		cout << " ";
		if (temp[x][index] == 1)
			for (int i = 0; i < s; i++)
				cout << "-";
		else
			for (int i = 0; i < s; i++)
				cout << " ";
		cout << "  ";
	}
	else {
		if (temp[x][index] == 1)
			cout << "|";
		else
			cout << " ";
		if (index % 3 == 1)
			for (int i = 0; i < s; i++)
				cout << " ";
		else
			cout << " ";
	}
}

int main() {
	cin >> s >> n;

	for (int i = 0; i < n.size(); i++)
		monitor(n[i], 0);
	cout << "\n";

	for (int i = 0; i < s; i++) {
		for (int j = 0; j < n.size(); j++)
			for (int k = 1; k < 3; k++)
				monitor(n[j], k);
		cout << "\n";
	}

	for (int i = 0; i < n.size(); i++)
		monitor(n[i], 3);
	cout << "\n";

	for (int i = 0; i < s; i++) {
		for (int j = 0; j < n.size(); j++)
			for (int k = 4; k < 6; k++)
				monitor(n[j], k);
		cout << "\n";
	}

	for (int i = 0; i < n.size(); i++)
		monitor(n[i], 6);
	cout << "\n";

	return 0;
}
