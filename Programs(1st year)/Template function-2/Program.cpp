#include <iostream>

using namespace std;

template <class x>
x max(x &a, x &b, x &c) //Template function
{
   if ((a > b) && (a > c))
      return a;

   else if ((b > a) && (b > c))
      return b;

   else
      return c;
}

int main()
{
   char ch;
   cout << "Enter the type of elements you want to enter: ";
   cout << "\na.Integer\tb.Double\tc.Character : \t";
   cin >> ch;
   cout << endl;
   switch (ch)
   {
   case 'a': //Integer
   {
      int a, b, c;
      cout << "Enter the value of a: ";
      cin >> a;
      cout << "Enter the value of b: ";
      cin >> b;
      cout << "Enter the value of c: ";
      cin >> c;

      int v = max(a, b, c); //Maximum of integer values
      cout << "\nThe maximum of the three elements is: " << v;
      break;
   }

   case 'b': //Double
   {
      double a, b, c;
      cout << "Enter the value of a: ";
      cin >> a;
      cout << "Enter the value of b: ";
      cin >> b;
      cout << "Enter the value of c: ";
      cin >> c;

      double v = max(a, b, c); //Maximum of douvle values
      cout << "\nThe maximum of the three elements is: " << v;
      break;
   }

   case 'c': //Character
   {
      char a, b, c;
      cout << "Enter the value of a: ";
      cin >> a;
      cout << "Enter the value of b: ";
      cin >> b;
      cout << "Enter the value of c: ";
      cin >> c;

      char v = max(a, b, c); //Maximum of character values
      cout << "\nThe maximum of the three elements is: " << v;
      break;
   }

   default:
      cout << "\nWrong character entered";
      break;
   }
}
