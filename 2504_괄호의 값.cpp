#include <iostream>
#include <stack>
#include <string>
using namespace std;

stack<char> st;

int main() {
	string input;
	cin >> input;

	int result = 0, temp = 1;
	bool wrong = false;

	for (int i = 0; i < input.size(); i++) {
		if (input[i] == '(') {
			temp *= 2;
			st.push('(');
		}
		else if (input[i] == '[') {
			temp *= 3;
			st.push('[');
		}
		else if (input[i] == ')') {
			if (st.empty() || st.top() != '(') {
				wrong = true;
				break;
			}
			if (input[i - 1] == '(')
				result += temp;
			st.pop();
			temp /= 2;
		}
		else if (input[i] == ']') {
			if (st.empty() || st.top() != '[') {
				wrong = true;
				break;
			}
			if (input[i - 1] == '[')
				result += temp;
			st.pop();
			temp /= 3;
		}
	}

	if (wrong || !st.empty())
		cout << 0 << '\n';
	else
		cout << result << '\n';

	return 0;
}
