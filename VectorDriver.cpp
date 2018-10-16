/*
Leonardo Garcia
10/15/18
Desc: Lab5: creates multiple vectors, can order them, and can test to see if a value is contained witin a vector
*/

#include "VectorDriver.h"
#include <algorithm>

int main() {
  cout << "  ..:: B E G I N  S A M P L E  C O D E  ::.." << endl << endl;
  vector<short> sample_vector(5);

  //vector to test the add_numbers function
  vector<short> test_vector(0);

  //vector to be sorted to test sort function
  vector<short> test_vector2(0);
  int number;

  cout << "new vector: ";
  print(sample_vector);
  cout << endl;

  fill_vector(sample_vector);

  cout << "filled vector: ";
  print(sample_vector);
  cout << endl;

  cout << "sum of vector's elements: " << compute_sum(sample_vector) << endl;

  cout << endl << "   ..::  E N D   S A M P L E  C O D E  ::.." << endl;

  //adds 10 random numbers to an empty test vector
  cout << "\ntest vector: ";
  add_numbers(test_vector);
  print(test_vector);
  cout << endl;

  //tests what happens if the add numbers function is called on the same vector
  cout << "\ntest vector 2: ";
  add_numbers(test_vector);
  print(test_vector);
  cout << endl;

  //prints even elements
  cout << "\neven elements of test vector: ";
  print_even(test_vector);
  cout << endl;

  //tests to see if a number is in the vector
  cout << "\nEnter a Number to see if it is in the test vector: ";
  cin >> number;
  is_present(test_vector, number);

  // small vector with 5 random elements to be sorted (test vector 2)
  int rnum = 0;
  for (int i = 1; i <= 5; i++) {
	  rnum = rand() % 100 + 1;
	  test_vector2.push_back(rnum);
  }

  //just prints out a new test vector
  cout << "\nHere is an unsorted vector: ";
  print(test_vector2);
  cout << endl;
  
  //sort function: uses the built in functions from the STL to sort providing the beginning and end of the vector.
  std::sort(test_vector2.begin(), test_vector2.end());
  cout << "\nHere is the same vector sorted: ";
  print(test_vector2);
  cout << endl;

  system("pause");
  return 0;
}
