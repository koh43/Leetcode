#include <iostream>
#include <vector>
#include <format>

using namespace std;

int main() {
	vector<int> height{ 4,2,0,3,2,5 };
	int n = height.size();
	int l = 0;
	int r = n - 1;
	int lmax = height[l];
	int rmax = height[r];
	int tw{ 0 };

	while (l < r) {
		if (lmax <= rmax) {
			lmax = max(height[++l], lmax);
			tw += lmax - height[l];
		}
		else {
			rmax = max(height[--r], rmax);
			tw += rmax - height[r];
		}
	}
	cout << "Trapped Water: " << tw << endl;
}