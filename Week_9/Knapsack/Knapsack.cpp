#include <bits/stdc++.h>
using namespace std;

struct Item {
	int value, weight;
	Item(int value, int weight)
	{
	this->value=value;
	this->weight=weight;
	}
};

bool cmp(struct Item a, struct Item b)
{
	double r1 = (double)a.value / (double)a.weight;
	double r2 = (double)b.value / (double)b.weight;
	return r1 > r2;
}

double fractionalKnapsack(int W, struct Item arr[], int n)
{
	sort(arr, arr + n, cmp);
	for (int i = 0; i < n; i++)
	{
		cout << arr[i].value << " " << arr[i].weight << endl;
	}
	int curWeight = 0; 
	double finalvalue = 0.0; 
	for (int i = 0; i < n; i++) {
		if (curWeight + arr[i].weight <= W) {
			curWeight += arr[i].weight;
			finalvalue += arr[i].value;
		}
		else {
			int remain = W - curWeight;
			finalvalue += arr[i].value
						* ((double)remain
							/ (double)arr[i].weight);
			break;
		}
	}
	return finalvalue;
}

int main()
{
	int W = 16; 
	Item arr[] = { { 6, 6 }, { 10, 2 }, { 3, 1 }, {5, 8 },{1, 3},{3, 5}};
	int n = sizeof(arr) / sizeof(arr[0]);
	double ans = fractionalKnapsack(W, arr, n);
	cout << "Maximum value = "<< ans ;
	return 0;
}
