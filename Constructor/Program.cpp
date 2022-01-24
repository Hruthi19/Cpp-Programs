#include <iostream>
#include <string>
using namespace std;
class Member
{
private:
   int mem_number;
   string mem_name, mem_birthday;
   static int *ptrBoss;

public:
   Member(int n, string s, string b)
   {
      mem_number = n;
      mem_name = s;
      mem_birthday = b;
   }

   string getname()
   {
      return mem_name;
   }

   int getnumber()
   {
      return mem_number;
   }

   string getbirthday() const
   {
      return mem_birthday;
   }

   void display()
   {
      cout << "\nMember number: \t" << mem_number;
      cout << "\nMember name: \t" << mem_name;
      cout << "\nBirthday: \t" << mem_birthday;
      cout << endl;
   }

   static void setBoss(int chair_person)
   {
      ptrBoss = new int(chair_person);
   }

   static int getBoss()
   {
      return *ptrBoss;
   }
};

int *Member::ptrBoss = NULL;
int main()
{
   Member m1(1, "Michael", "11/07/2002");
   Member m2(2, "Barry", "5/2/1988");

   cout << m1.getnumber() << endl;
   cout << m1.getname() << endl;
   cout << m1.getbirthday() << endl;
   m1.display();
   cout << endl;

   cout << m2.getnumber() << endl;
   cout << m2.getname() << endl;
   cout << m2.getbirthday() << endl;
   m2.display();

   Member::setBoss(m1.getnumber());
   cout << "Chariperson is member number " << Member::getBoss();
   return 0;
}
