#include <iostream>
using namespace std;
class publication
{
public:
   char title[100];
   float price;
   char pub_name[20];
   int address;
   void getdata()
   {
      cout << "\nEnter the title: ";
      cin >> title;
      cout << "\nEnter the price: ";
      cin >> price;
      cout << "\nEnter the publisher name: ";
      cin >> pub_name;
      cout << "\nEnter the address: ";
      cin >> address;
   }
   void putdata()
   {
      cout << "\nTitle: " << title;
      cout << "\nPrice: " << price;
      cout << "\nPublisher name: " << pub_name;
      cout << "\nAddress: " << address;
      cout << endl;
   }
};

class book : public publication
{
public:
   int page_count;
   void getdata()
   {
      publication::getdata();
      cout << "\nenter the number of pages: ";
      cin >> page_count;
   }
   void putdata()
   {
      publication::putdata();
      cout << "\nPage count: " << page_count;
      cout << endl;
   }
};

class tape : public publication
{
public:
   float play_time;
   void getdata()
   {
      publication::getdata();
      cout << "\nenter the playing time: ";
      cin >> play_time;
   }
   void putdata()
   {
      publication::putdata();
      cout << "Playing time:" << play_time;
   }
};

int main()
{
   int n, i;
   char ch;
   cout << "\nEnter the no of books or tapes to be added: ";
   cin >> n;
   for (i = 0; i < n; ++i)
   {
      cout << "\nis it a (a)book or (b)tape: ";
      cin >> ch;

      switch (ch)
      {
      case 'a':
         book *pt[50];
         pt[i] = new book();
         pt[i]->getdata();
         pt[i]->putdata();
         break;

      case 'b':
         tape *ptr[50];
         ptr[i] = new tape();
         ptr[i]->getdata();
         ptr[i]->putdata();
         break;

      default:
         cout << "Wrong character entered";
      }
   }
   return 0;
}
