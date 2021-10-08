#include <bits/stdc++.h>
using namespace std;
int main() {
	int time, sum, a, b, c, h = 9*60;
	cin >> a;
	sum = (15 * (a/2)) + (5*(a-(a/2))) + (45*a);
	if (a%2==0) {
		sum-=15;
	} else {
		sum-=5;
	}
	cout << (h+sum)/60 << ' ' << (h+sum)%60;
}