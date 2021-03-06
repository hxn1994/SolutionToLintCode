// ConsoleApplication1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

vector<int> mergeSortedArray(vector<int> &A, vector<int> &B);

int main()
{
	vector<int> A{ 1 };
	vector<int> B{ 1 };

	vector<int> C;


	C = mergeSortedArray(A, B);

	for (int i = 0; i < C.size(); i++)
		cout << C[i] << '\t';

	cout << endl;

    return 0;
}

vector<int> mergeSortedArray(vector<int> &A, vector<int> &B) {
	// write your code here
	vector<int> C;

	int i = 0, j = 0;

	while (i < A.size() && j < B.size())
	{
		if (A[i] <= B[j])
		{
			C.push_back(A[i++]);
		}
		else
		{
			C.push_back(B[j++]);
		}
	}

	while (i < A.size())
	{
		C.push_back(A[i++]);
	}

	while (j < B.size())
	{
		C.push_back(B[j++]);
	}

	return C;
}