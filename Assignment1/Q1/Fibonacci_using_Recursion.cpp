#include <bits/stdc++.h>
using namespace std;

unsigned long long fib(int n){
	if(n <= 1){
		return n;
	}
	return fib(n-1) + fib(n-2);
}
long current_time(){
	struct timespec ts;
	timespec_get(&ts, CLOCK_MONOTONIC);
	return ts.tv_sec*pow(10,9) + ts.tv_nsec;
}

int main(){
	int N=100;
	long start = current_time();
	for(int i = 0; i<N; i++){
		cout<<fib(i)<< " ";
	}
	long end = current_time();
	cout << endl << "Time taken(in ns): " << end - start;
	return 0;
}
