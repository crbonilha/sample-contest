#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b;
	scanf("%d %d", &a, &b);

	int c = 0;
	for(int i=0; i<1e9; i++) {
		c += rand()%(i+1);
	}

	printf("%d\n", a+b);
	return 0;
}

