#include <iostream> 
#include <algorithm> 
using namespace std;
//�����.���������� �������.


int main()
{ 
	setlocale(LC_ALL, "ukr");
	const int length = 10;
	int arr[length] = { };
	for (int i = 0; i < length; i++)
	{
		cout << "������� ����� : " ;
		cin >> arr[i];
	}

	for (int startIndex = 0; startIndex < length - 1; ++startIndex)
	{

		int smallestIndex = startIndex;


		for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
		{

			if (arr[currentIndex] < arr[smallestIndex])

				smallestIndex = currentIndex;
		}


		swap(arr[startIndex], arr[smallestIndex]);
	}

	cout << "\n__________������ ����������__________\n"<<endl;
	for (int index = 0; index < length; ++index)
		cout << arr[index] << ' ';

	return 0;

}