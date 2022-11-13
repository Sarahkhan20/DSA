#include <iostream>
using namespace std;
int uniqueNo (int a[], int size)
{
  int temp = 0,i;
  if (temp==0)
    {
      cout << "Unique element is: "<<a[i];
    }
  //loop for traversal
  for (i = 0; i < size; i++)
    {
      //loop for comparing
      int count = 0;
      for (int j = 1; j < size; j++)
	{
	  if (a[i] == a[j])
	    {
	      count++;
	      temp = count;
	    }
if (temp==0)
    {
      cout << "Unique element is: "<<a[i];
    }
	}

    }
  
  return 0;
}

int main ()
{
  int a[4] = { 1, 1, 1,5 };
  int size;
  uniqueNo (a, 4);
  return 0;
}

