#include <iostream>
using namespace std;

void reverseString(char* str) {
	char* end = str;
	while (*end) end++;
	end--;

	while (str < end) {
		swap(*str, *end);
		str++;
		end--;
	}
}


int main()
{
	char str[100];

	cout << "Enter a string: ";
	cin.getline(str, 100);

	reverseString(str);

	cout << "Reversed string: " << str << endl;
	return 0;

}

void addTen(int* a, int* b) {
	*a += 10;
	*b += 10;
}

void swapByValue(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "After Swapping The Values: a = " << a << ", b = " << b << endl;
}

void swapByReference(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void sortArray(int* arr, int n) {
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}

/*int n;
cout << "Enter The Number Of Elements In The Array: " << endl;
cin >> n;

int* arr = new int[n];

cout << "Enter" << n << "integers: ";
for (int i = 0; i < n; i++) {
	cin >> arr[i];
}

sortArray(arr, n);

cout << "Sorted array: ";
for (int i = 0; i < n; i++) {
	cout << arr[i] << "";
}
cout << endl;*/
