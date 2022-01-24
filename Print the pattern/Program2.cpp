#include <iostream>
using namespace std;
int main()
{
   int i, j, k, gap, count = 0;
   for (i = 1; i <= 10; i++) //for printing the top half
   {
      for (gap = 10; gap > i; gap--) //for printing the spaces
         cout << " ";

      for (j = 1; j <= i; j++) //for printing the numbers
      {
         count++;
         if (count == 10)
            count = 0;
         cout << count;
      }

      for (k = 1; k <= i - 1; k++)
      {
         count--;
         if (count == -1)
            count = 9;
         cout << count;
      }

      cout << endl;
   }

   int a, b, c, space, count_1 = 9; //for printing the bottom half

   for (a = 1; a < 10; a++)
   {
      for (space = 1; space <= a; space++)
         cout << " ";
      for (b = 1; b <= 10 - a; b++)
      {
         cout << count_1;
         count_1++;
         if (count_1 == 10)
            count_1 = 0;
      }
      if (count_1 != 0)
         count_1 = count_1 - 1;
      else
         count_1 = 9;
      for (c = 1; c <= 10 - a - 1; c++)
      {
         count_1--;
         if (count_1 == -1)
            count_1 = 9;
         cout << count_1;
      }
      count_1 = count_1 - 1;
      cout << endl;
   }
   return 0;
}
