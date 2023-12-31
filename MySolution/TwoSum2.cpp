#include <iostream>
#include <format>
#include <vector>

using namespace std;

template <typename T>
void print_vec(const vector<T>& v) {
	if (v.empty()) {
		cout << "Empty Vector..." << endl;
		return;
	}
	for (auto e : v) {
		cout << e << " ";
	}
	cout << endl;
	return;
}

int main() {
	vector<int> numbers{ 5, 25, 75 };
	vector<int> res{};
	int target{ 100 };

	int l = 0;
	int r = numbers.size() - 1;
	
	while (l < r) {
		if (numbers[l] + numbers[r] == target) {
			res.push_back(l + 1);
			res.push_back(r + 1);
			break;
		}
		else if (numbers[l] + numbers[r] < target) {
			l += 1;
		}
		else {
			r -= 1;
		}
	}

	print_vec(res);
}