#include <iostream>
#include <math.h>       /* pow */
#include <cstring>
#include <vector>
#include <algorithm>    // std::min
using std::cout;
using std::endl;


void main(){

	const int n = 20;       // Generate the first n numbers

	std::vector<int> v(n);
	v[0] = 1;

	int i2 = 0;             // Index for 2
	int i5 = 0;             // Index for 5

	int x2 = 2 * v[i2];     // Next two candidates
	int x5 = 5 * v[i5];

	for (int i = 1; i != n; ++i)
	{
		int m = std::min(x2, x5);
		std::cout << m << " ";
		v[i] = m;

		if (x2 == m)
		{
			++i2;
			x2 = 2 * v[i2];
		}
		if (x5 == m)
		{
			++i5;
			x5 = 5 * v[i5];
		}
	}

	std::cout << std::endl;





























/*
	int arr1[10];
	int arr2[10];
	std::vector< int > arr;
	std::vector< int > arrr;

	for (int i = 0; i < 10; i++)
	{
		arr1[i] = pow(2,i);
		arr2[i] = pow(5,i);
	}



	for (int i = 0; i < 10; i++){
		int k = 0;
		for (int j = 0; j < 10; j++){
			k = i + 1;
			if (arr1[i] * arr2[j] > arr1[k]){
				arrr.push_back(arr1[i] * arr2[j]);
				break;
			}
			else
			{
				arrr.push_back(arr1[i] * arr2[j]);
			}

		}

	}





















	
	for (int i = 0; i < 10; i++){
		int k = 0;
		arr.push_back(arr1[i]);
		for (int j = 0; j < 10; j++){
			k = i + 1;
			if (arr1[i] <= arr2[j])
				if (arr1[k] <= arr2[j]){
					break;
				}
				else
				{
					arr.push_back(arr2[j]);
					break;
				}
		}
		
	}*/


	system("pause");
}