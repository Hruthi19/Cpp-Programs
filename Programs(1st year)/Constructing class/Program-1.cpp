#include <iostream>
#include <string.h>
using namespace std;

class Article
{
   char Article_Name[100];
   int Article_num;
   double Article_price;
   static int No_of_objects;

public:
   Article() //Default Constructor
   {
      strcpy(Article_Name, "Not set");
      Article_num = 0;
      Article_price = 0.0;
      No_of_objects++;
   }

   Article(char s[], int number, double cost) // Parameterised Constructor
   {
      strcpy(Article_Name, s);
      Article_num = number;
      if (cost > 0)
         Article_price = cost;
      else
         Article_price = 0.0;

      No_of_objects++;
   }

   void print() //To display objects on screen
   {
      cout << "Article Name : " << Article_Name << endl;
      cout << "Article Number : " << Article_num << endl;
      cout << "Article price : " << Article_price << endl;
   }

   inline void setName(char s[]) //Access methods for data members
   {
      strcpy(Article_Name, s);
   }

   inline string getName() //Access methods for data members
   {
      return Article_Name;
   }

   inline void setnum(int number) //Access methods for data members
   {
      Article_num = number;
   }

   inline int getnum() //Access methods for data members
   {
      return Article_num;
   }

   inline void setprice(double cost) //Access methods for data members
   {
      Article_price = cost;
   }

   inline double getprice() //Access methods for data members
   {
      return Article_price;
   }
};

int Article::No_of_objects = 0; //Static data member

Article global_obj("Global Article", 1, 2.0); //Global article object

void test()
{
   Article obj1("Local article of test function", 3, 4.00);
   static Article obj2("static local article of test function", 4, 5.00);
   obj1.print();
   obj2.print();
   cout << "test() function is terminated.\n"
        << endl;
}

int main()
{
   global_obj.print();
   Article local_main("Main function article", 2, 3.00); //Local object declaration
   local_main.setName("Main function article (Name Modified)");
   local_main.print();

   test(); //calling of test function

   return 0;
}
