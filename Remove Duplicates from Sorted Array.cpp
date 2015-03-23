#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(int A[], int n) {
	if(0 == n)
		return 0;
	int now = 0;
	for(int index = 0; index < n; ++index) {
		if( A[now] != A[index] ) {
			A[++now] = A[index];
		}
	}
	return now + 1;
}


int main(int argc, char *argv) {
	int A[] = {1, 1, 2, 3, 3};
	printf("%d\n",  removeDuplicates(A, sizeof(A)/sizeof(int)));

	getchar();
	return 0;
}