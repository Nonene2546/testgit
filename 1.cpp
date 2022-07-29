#include<iostream>
using namespace std;
int main() {
  int h,m;
  scanf("%d.%d", &h,&m);
  if (h > 24 || m > 59 || h == 0)
  {
    printf("ERROR!");
    return 0;
  }
  if (h >= 12) // PM
  {
      if (h - 12 < 10)
      {
        cout << '0';
      }
      cout << h - 12;
  }
  else // AM
  {
      if (h < 10) // 00-09
      {
        cout << '0';
      }
      cout << h;
  }
  cout << '.';
  if (m < 10)
  {
    cout << '0';
  }
  cout << m;
  if (h >= 12)
  {
    cout << " PM";
  }
  else
  {
    cout << " AM";
  }
 return 0;
}