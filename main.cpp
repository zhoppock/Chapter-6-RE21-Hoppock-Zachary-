#include <iostream>
using namespace std;

int main()
{
  const int ROWS = 10;
  const int COLUMNS = 10;
  int values[ROWS][COLUMNS];
  for (int i = 0; i < ROWS; i++)
    for (int j = 0; j < COLUMNS; j++)
      values[i][j] = 0;

  for (int i = 0; i < COLUMNS; i++)
  {
	  cout << "--";
  }
  cout << "-" << endl;

  for (int i = 0; i < ROWS; i++)
  {
    for (int j = 0; j < COLUMNS; j++)
    {
      cout << "|" << values[i][j];
    }
    cout << "|" << endl;
  }
  
  for (int i = 0; i < COLUMNS; i++)
  {
    cout << "--";
  }
  cout << "-" << endl;

}