#include <iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	int test_cases, temp, i, j, k, sum, arr_cases, min_sum;
	vector<int>cases;
	bool ran;
	cin >> test_cases;
	for (j = 0; j < test_cases; j++) {
		cin >> arr_cases;
		cases.clear();
		for (i = 0; i < arr_cases; i++) {
			cin >> temp;
			cases.push_back(temp);
		}
		sort(cases.begin(), cases.end());
		min_sum = 1000000000;
		for (i = 0; i < arr_cases; i++) {
			sum = 0;
			ran = false;
			for (k = 0; k < arr_cases; k++)
				if (i != k) {
					sum += abs(cases[i] - cases[k]);
					ran = true;
				}
			if (sum < min_sum&&ran)
				min_sum = sum;
		}
		cout << min_sum << endl;
	}
	return 0;
}