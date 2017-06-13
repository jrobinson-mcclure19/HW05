//////////////////////////
// Jalen Robinson-McClure
// CS 172-1
// June 14th, 2017
// EX05_02 
/////////////////////////

#include <iostream>
#include <string>
using namespace std;
// templete
template<typename T>
// is sorted function
bool isSorted(const T list[], int size)
{
	// compares numbers in the list
	for (int i = 0; i < size; i++)
	{
		T currentMin = list[i];
		T nextNum = list[i + 1];
		for (int j = i + 1; j < size; j++)
		{
			// displays true or false if sorted
			if (currentMin > nextNum)
			{
				return false;
			}
			else
				return true;
		}
	}

}

int main()
{
	// list1
	int list1[] = { 3,2,4,1 };
	isSorted(list1, 4);
	// list2
	double list2[] = { 1.0, 2.0, 3.0, 4.0 };
	isSorted(list2, 4);
	// list3
	string list3[] = { "Atlanta", "Denver", "Chicago", "Dallas" };
	isSorted(list3, 4);

	return 0;
}