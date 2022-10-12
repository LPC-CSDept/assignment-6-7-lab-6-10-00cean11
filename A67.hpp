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
void swap (int &val1, int &val2, int &val3){
  if (val1 < val2 && val1 < val3){
  if (val2 < val3){
    cout << val1 << ", " << val2 << ", " << val3 << endl;
  } else {
    cout << val1 << ", " << val3 << ", " << val2 << endl;
  }
} else if (val2 < val1 && val2 < val3){
  if (val1 < val3){
    cout << val2 << ", " << val1 << ", " << val3 << endl;
  } else {
    cout << val2 << ", " << val3 << ", " << val1 << endl;
  }
} else if (val3 < val1 && val3 < val2){
  if (val1 < val2){
    cout << val3 << ", " << val1 << ", " << val2 << endl;
  } else {
    cout << val3 << ", " << val2 << ", " << val1 << endl;
  }
}
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
