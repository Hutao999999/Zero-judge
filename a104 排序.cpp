#include <iostream>

using namespace std;

int main()
{
  int n;

  while (cin >> n)
  {
    int arr[n];

    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < i; j++)
      {
        if (arr[j] > arr[i])
        {
          int tmp = arr[i];
          arr[i] = arr[j];
          arr[j] = tmp;
        }
      }
    }

    for (int i = 0; i < n; i++)
    {
      cout << arr[i] << " ";
    }

    cout << endl;
  }
}