//
#include <iomanip>
#include <iostream>
using namespace std;
void getInput(int &num){
  cout << "Which action would you like to do ?\n" << "2:Switching 2 values\n" << "3:Switching 3 values\n" << "4:Switching 4 values\n" << "Any:End application.\n" <<endl;
  cin >> num;
}
void getInput(int &val1, int &val2){
  cout << "Input 2 values\n";
  cin >> val1 >> val2;
}
void swap(int &val1, int &val2){
  int N;
  N = val1;
  val1 = val2;
  val2 = N;
  cout << "Swapped numbers are " << val1 << ", " << val2 <<endl;
}
void getInput(int &val1, int &val2, int &val3){
  cout << "Input 3 values\n";
  cin >> val1 >> val2 >> val3;
}
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
void getInput(int &val1, int &val2, int &val3, int &val4){
  cout << "Input 4 values\n";
  cin >> val1 >> val2 >> val3 >> val4;
  }
void swap(int &val1, int &val2, int &val3, int &val4){
  int N;
  N = val1;
  val1 = val2;
  val2 = val3;
  val3 = val4;
  val4 = N;
  cout << "Swapped numbers are " << val1 << ", " << val2 << ", " << val3 << ", " << val4 <<endl;
}
int main (){
  int num;
  int val1, val2, val3, val4;
  getInput(num);
  switch(num){
    case 2:
      getInput(val1,val2);
      swap(val1,val2);
      break;
    case 3:
      getInput(val1,val2,val3);
      swap(val1,val2,val3);
      break;
    case 4:
      getInput(val1,val2,val3,val4);
      swap(val1,val2,val3,val4);
      break;
    default:
      break;
    }
}

// complete the Overloading function swap( )
// swap ( ) function has the difference number of parameters from 2 to 4
// For example, swap(10, 20); swap(10, 20, 30); swap(10, 20, 30, 40)
