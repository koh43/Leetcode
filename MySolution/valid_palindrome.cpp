#include <iostream>
#include <format>
#include <string>

using namespace std;

int main() {
	string s{ "0P" };

	bool flag{true};

	int l{ 0 };
	int r = s.size();

	int lc{};
	int rc{};

	while (l < r) {
		lc = tolower(s[l]);
		rc = tolower(s[r]);
		if ((lc < 'a' || lc > 'z') && (lc < '0' || lc > '9')) {
			l += 1;
			continue;
		}
		if ((rc < 'a' || rc > 'z') && (rc < '0' || rc > '9')) {
			r -= 1;
			continue;
		}
		if (lc != rc) {
			flag = false;
			break;
		}
		else {
			l += 1;
			r -= 1;
		}
	}

	if (flag) {
		cout << format("``{}'' is a palindrome", s) << endl;
	}
	else {
		cout << format("``{}'' is not a palindrome", s) << endl;
	}
}
