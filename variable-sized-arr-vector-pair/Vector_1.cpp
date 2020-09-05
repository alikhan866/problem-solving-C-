#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<utility>
using namespace std;
class A {
public:
	vector<int> getVector(int s) {
		int val;
		vector <int> A;
		for (int j = 0; j < s; j++) {
			cin >> val;
			A.push_back(val);
		}
		return A;
	}
};

int main() {
	A obj;
	int n, q, size, val1, val2;
	cin >> n;
	cin >> q;
	vector<vector<int>> A;
	vector<pair<int, int>> P;

	for (int i = 0; i < n; i++) {
		cin >> size;
		A.push_back((obj.getVector(size)));
	}

	for (int i = 0; i < q; i++) {
		cin >> val1;
		cin >> val2;
		P.push_back(make_pair(val1, val2));
	}

	vector<pair<int, int>> ::iterator it;

	for (it = P.begin(); it != P.end(); it++) {
		cout << A[(*it).first][(*it).second] << endl;
	}
	return 0;
}
