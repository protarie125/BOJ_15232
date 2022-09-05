#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int r, c;
	cin >> r >> c;

	for (auto i = 0; i < r; ++i) {
		for (auto j = 0; j < c; ++j) {
			cout << '*';
		}
		cout << '\n';
	}

	return 0;
}