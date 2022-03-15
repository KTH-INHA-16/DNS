#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <queue>
#include <deque>
#include <stack>

using namespace std;



char arr[500001] = { 0, };

int main(void)
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


	int R = 0, B = 0;
	int N;
	cin >> N;

	int sum = 0;
	int size = 0;

	char tmp;
	for (int i = 0,pt=0; i < N; i++)
	{
		cin >> tmp;

		if (i == 0)
		{
			arr[pt] = tmp; 
			size++; 
			pt++;
		}
		else if (i != 0 && arr[pt - 1] != tmp)
		{
			arr[pt] = tmp; 
			size++; 
			pt++;
		}
	}
	

	
	for (int i = 0; i < size-1; i++)
	{
		if (arr[i] == 'R')
			R++;
		else if (arr[i] == 'B')
			B++;
	}
	if (R < B)
		sum += 1 + B;
	else
		sum += 1 + R;

	cout << sum;
	

	return 0;

}
