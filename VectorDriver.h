/* File: VectorDriver.cpp
 * Athr: Dimitri Zarzhitsky
 * Date: October 16, 2002
 *
 * Desc: provides the basic framework and examples for an introduction to
 *       the STL::vector, iterators, and the algorithms facilities.
 *
 * Edited by: Rafe Cooley
 * Date: October 1, 2017 (the future)
 *

 Leonardo Garcia
 10/15/18
 Desc: Driver for Lab5
 */
typedef unsigned long ulong;

#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

// fill vector that has pre-allocated space with consecutive numbers
void fill_vector(vector<short> &data) {
  for (ulong i=0; i<data.size(); i++) {
    data.at(i) = i;
  }
}

// print our vector in a fancy way
void print(const vector<short> &data) {
  if (data.empty()) {
    cout << "<empty>";
  } else {
    cout << "<" << data.at(0);
    for (ulong i=1; i<data.size(); i++) {
      cout << ", " << data.at(i);
    }
    cout << ">";
  }
}

// use iterator to sum the elements of a vector
short compute_sum(const vector<short> &data) {
  std::vector<short>::const_iterator iter = data.begin();

  short sum = 0;
  while (iter != data.end()) {
    sum += *iter;
    iter++;
  }

  return sum;
}

//add_numbers: adds 10 random numbers to the data vector
void add_numbers(vector<short> &data)
{
	int rnum = 0;
	for (int i = 1; i <= 10; i++) {
		rnum = rand() % 100 + 1;
		data.push_back(rnum);
	}
}

//print_even: prints all the elements in the data vector that are stored at an even index
void print_even(const vector<short>& data)
{
	if (data.empty()) {
		cout << "<empty>";
	}
	else {
		cout << "<" << data.at(0);
		for (ulong i = 1; i<data.size(); i++) {
			if (i % 2 == 0)
			{
				cout << ", " << data.at(i);
			}
	
		}
		cout << ">";
	}
}

//is_present: checks if an element is present in a vector by iterating through and checking each element.
bool is_present(const vector<short> &data, short value)
{
	std::vector<short>::const_iterator iter = data.begin();

	short sum = 0;
	while (iter != data.end()) {
		if (*iter != value)
		{
			iter++;
		}
		else
		{
			cout << "True.  That number is an element in the vector" << endl;
			return true;
		}
	}
	cout << "False. That number is not an element in the vector." << endl;
	return false;
}

//sort function



// TODO: implement add_numbers DONE
// TODO: implement print_even DONE
// TODO: implement is_present DONE
// TODO: implement std::sort function DONE
