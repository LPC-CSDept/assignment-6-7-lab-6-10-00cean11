//
#include <iomanip>
#include <iostream>
using namespace std;
// void getInput(int &val1, int &val2){
//   cout << "Input 2 values\n";
//   cin >> val1 >> val2;
// }
void swap(int &val1, int &val2){
  int N;
  N = val1;
  val1 = val2;
  val2 = N;
  cout << val1 << ", " << val2 <<endl;
}
// void getInput(int &val1, int &val2, int &val3){
//   cin >> val1 >> val2 >> val3;
// }
void swap(int &num1, int &num2, int &num3)
{
  int max, remainder;

  if (num1 > num2 && num1 > num3)
  {
    max = num1;
  }
  else if (num2 > num3)
  {
    max = num2;
  }
  else
  {
    max = num3;
  }

  int smallest = num1;
  int min;
  if (num2 < min)
    min = num2;
  if (num3 < min)
    min = num3;

  if (num1 != min && num1 != max)
  {
    remainder = num1;
  }
  if (num2 != min && num2 != max)
  {
    remainder = num2;
  }
  if (num3 != min && num3 != max)
  {
    remainder = num3;
  }
  num1 = min;
  cout << "**************************************************" << endl;
  cout << "Test value num1 " << num1 << endl;
  cout << "**************************************************" << endl;
  num2 = remainder;
  num3 = max;
}
// void getInput(int &val1, int &val2, int &val3, int &val4){
//   cin >> val1 >> val2 >> val3 >> val4;
//   }
void swap(int &val1, int &val2, int &val3, int &val4){
  int N;
  N = val1;
  val1 = val2;
  val2 = val3;
  val3 = val4;
  val4 = N;
  cout << val1 << ", " << val2 << ", " << val3 << ", " << val4 <<endl;
}

// complete the Overloading function swap( )
// swap ( ) function has the difference number of parameters from 2 to 4
// For example, swap(10, 20); swap(10, 20, 30); swap(10, 20, 30, 40)
