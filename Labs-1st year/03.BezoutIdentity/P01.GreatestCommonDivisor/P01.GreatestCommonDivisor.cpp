#include<iostream>
#include<cmath>
using namespace std
;
int main() {

	const int rows = 4;
		
	int a, b, t, cols = 1, ta, tb;

	cin >> a >> b;

	if (a < b) 
	{
		t = a;
		a = b;
		b = t;
	}

	ta = a;
	tb = b;

	while (tb != 0) 
	{
		t = tb;
		tb = ta % tb;
		ta = t;
		cols++;
	}

	int* arr[rows];

	for (auto& i : arr)
	{
		i = new int[cols] {0};
	}

	arr[0][0] = a;
	arr[0][1] = b;
	arr[2][0] = arr[3][1] =1;

	ta = a;
	tb = b;

	int j = 2;

	while (tb != 0) 
	{
		arr[0][j] = ta % tb;
		arr[1][j - 1] = ta / tb;
		t = tb;
		tb = ta % tb;
		ta = t;
		j++;
	}

	cout << "Bezout table: " << endl;

	for(int i = 2; i < cols; i++) 
	{
		arr[2][i] = arr[1][i - 1] * arr[2][i - 1]
		+ arr[2][i - 2];
		arr[3][i] = arr[1][i - 1] * arr[3][i - 1]
		+ arr[3][i - 2];
	}

	for (auto& i : arr)
	{
		for (int j = 0; j < cols; j++) 
		{
			cout << i[j] << "\t";
		}

		cout << endl;
	}

	cout << "Equations: " << endl;

	for (int i = 0; i < cols; i++)
	{
		cout << arr[0][i] << " = " << pow(-1, i)
			* arr[2][i] << "*" << a;

		cout << (pow(-1, i + 1) > 0 ? "+" : "-")
			<< arr[3][i] << "*" << b << endl;
	}

	for (auto& i : arr)
	{
		delete[] i;
		i = nullptr;
	}

}