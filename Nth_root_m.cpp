// You are given two positive numbers N and M.
//  You have to return the Nth root of M. 
//  If the Nth root of M is not an integer, return -1.
// Nth root of an integer M is a number, which, raised to the power N, 
// gives M as a result
#include <bits/stdc++.h>
using namespace std;


double nthRoot(int A, int N)
{

	double xPre = rand() % 10;


	double eps = 1e-3;


	double delX = INT_MAX;


	double xK;


	while (delX > eps)
	{
		xK = ((N - 1.0) * xPre +
			(double)A/pow(xPre, N-1)) / (double)N;
		delX = abs(xK - xPre);
		xPre = xK;
	}

	return xK;
}

int main()
{
	int N = 4;
	int A = 81;

	double nthRootValue = nthRoot(A, N);
	cout << "Nth root is " << nthRootValue << endl;

	

	return 0;
}
