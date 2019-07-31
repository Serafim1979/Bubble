#include<iostream>
/////////////////////////////////////////////////////
using std::cout;
using std::cin;
using std::endl;
/////////////////////////////////////////////////////
void b_sort(int arr[], int size);
void show_array(int arr[], int size);
/////////////////////////////////////////////////////
int main()
{
	const int size = 5;
	int arr[size] = {12, 4, 90, 7, 1};

	show_array(arr, size);
	cout << endl;

	b_sort(arr, size);
	show_array(arr, size);
	cout << endl;

	system("pause");
	return 0;
}
/////////////////////////////////////////////////////
void b_sort(int arr[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		bool flag = false;
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = true;
			}
		}
		if (!flag)
		{
			break;
		}
	}
}
/////////////////////////////////////////////////////
void show_array(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}