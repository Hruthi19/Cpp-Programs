#include <iostream>
using namespace std;
template <class x>
double avg(x &A, int &n) //Template function
{
   double avg, sum = 0;
   for (int i = 0; i < n; i++)
   {
      sum = sum[i];
      avg = sum / double(n);
   }
   return avg;
}
int main() //Main function
{
   int n;
   cout << "enter the size of the array: ";
   cin >> n;
   char ch;
   cout << "Enter the type of the array: ";
   cout << "\n(a)Integer\t(b)Long\t(c)Double\t(d)Character\t";
   cin >> ch;
   cout << endl;
   switch (ch)
   {
   case 'a': //For integer type array
   {
      int A[100];
      for (int i = 0; i < n; i++)
      {
         cout << "Enter the integer elements of the array: ";
         cin >> A[i];
      }
      int a = avg(A, n); //Average of integer values
      cout << "\nThe average of the array elements is: " << a;
      break;
   }

   case 'b': //For long type array
   {
      long A[100];
      for (int i = 0; i < n; i++)
      {
         cout << "Enter the long elements of the array: ";
         cin >> A[i];
      }
      long a = avg(A, n); //Average of long values
      cout << "\nThe average of the array elements is: " << a;
      break;
   }

   case 'c': //For double type array
   {
      double A[100];
      for (int i = 0; i < n; i++)
      {
         cout << "Enter the long elements of the array: ";
         cin >> A[i];
      }
      double a = avg(A, n); //average of double values
      cout << "\nThe average of the array elements is: " << a;
      break;
   }

   case 'd': //For character type array
   {
      char A[100];
      for (int i = 0; i < n; i++)
      {
         cout << "Enter the long elements of the array: ";
         cin >> A[i];
      }
      char a = avg(A, n); //Average of character values
      cout << "\nThe average of the array elements is: " << a;
      break;
   }

   default:
      cout << "Wrong character entered";
      break;
   }

   return 0;
}
