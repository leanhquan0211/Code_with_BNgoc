#include <iostream>
using namespace std;
int main() {
	int n, m;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cin >> m;
	int t = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			t += a[j];
			if (t == m) {
				cout << "[" << i << "," << j << "]";
				return 0;
			}
		}
		t = 0;
	}
	cout << "dell co.";
}
