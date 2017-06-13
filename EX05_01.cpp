///////////////////////////
// Jalen Robisnon-McClure
// CS 172-1
// 06/14/2017
// EX05_01 
///////////////////////////

#include <iostream>
#include <string>
using namespace std;
// template
template<typename T>
// linear search function
T linearSearch(T list[], T key, T arraySize)
{
	// uses key to display what position in function
	for (int i = 0; i < arraySize; i++)
	{
		if (key == list[i])
			return i;
	}
	return -1;
};

int main()
{
	// list 1 and displays what part of array matches
	int list1[] = { 1,2,3,4 };
	cout << "The array displays: " << linearSearch(list1, 2, 4) << endl;
	double list2[] = { 1.0, 2.0, 3.0, 4.0 };
	// list 1 and displays what part of array matches
	cout << "The array displays: " << linearSearch(list2, 4, 4) << endl;
	// list 1 and displays what part of array matches
	string list3[] = { "Atlanta", "Denver", "Chicago", "Dallas" };
	cout << "The array displays: " << linearSearch(list3, 4, 4) << endl;

	return 0;
}


