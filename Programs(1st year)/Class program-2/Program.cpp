#include <iostream>

using namespace std;

class employee
{
public:
   string emp_name;
   int emp_id;

   void getdata()
   {
      cout << "\nEnter employee name: ";
      cin >> emp_name;
      cout << "\nEnter employee id: ";
      cin >> emp_id;
   }

   const void putdata()
   {
      cout << "\nEmployee name: " << emp_name;
      cout << "\nEmployee ID: " << emp_id;
   }
};

class manager : public employee
{
public:
   string title;
   int golf_club;

   void getdata()
   {

      employee::getdata();
      cout << "\nEnter the title of the employee: ";
      cin >> title;
      cout << "\nEnter the golf club dues of the employee: ";
      cin >> golf_club;
   }

   void putdata()
   {
      employee::putdata();
      cout << "\nTitle: " << title;
      cout << "\nGolf club dues: " << golf_club;
      cout << endl;
   }
};

class scientists : public employee
{
public:
   int article_num;

   void getdata()
   {
      employee::getdata();
      cout << "\nEnter the number of articles published by the employee: ";
      cin >> article_num;
   }

   void putdata()
   {
      employee::putdata();
      cout << "\nNo.of Articles published: " << article_num;
      cout << endl;
   }
};

class labourers : public employee
{
public:
   void getdata()
   {
      employee::getdata();
   }

   void putdata()
   {
      employee::putdata();
   }
};

int main()
{
   int i, n;
   char ch;
   cout << "How many employee details you want to enter: ";
   cin >> n;
   for (i = 0; i < n; i++)
   {
      cout << "Enter the type of employee you want to enter the data: ";
      cout << "\n(a).Manager\t(b).Scientists\t(c).Labourers: ";
      cin >> ch;

      if (ch == 'a')
      {
         manager m[50];
         m[i].getdata();
         m[i].putdata();
         cout << endl;
      }

      else if (ch == 'b')
      {
         scientists s[50];
         s[i].getdata();
         s[i].putdata();
         cout << endl;
      }

      else if (ch == 'c')
      {
         labourers l[50];
         l[i].getdata();
         l[i].putdata();
         cout << endl;
      }

      else
         cout << "Wrong character entered";
   }
   return 0;
}
