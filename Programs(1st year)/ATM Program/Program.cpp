#include <iostream>
#include <string>
using namespace std;

string userID[20];
string password[20];
int balance[20];
int choice, users = 0;
int total_deposit = 0;
class newaccount
{
public:
   void setdetails()
   {
      cout << "\nCreate a new user id- ";
      cin >> userID[users];
      cout << "\nCreate a password- ";
      cin >> password[users];
      balance[users] = 0;
      users++;
      cout << "\nYour account has been successfully created " << endl;
   }
};

class delete_account
{
public:
   string userID1;
   string password1;
   int i;

   void getdetails()
   {
      cout << "Enter your userId and password for deleting the account" << endl;
      cout << "Enter your userid: ";
      cin >> userID1;
      cout << "Enter ur password: ";
      cin >> password1;
      for (i = 0; i < users; i++)
      {
         if ((userID[i] == userID1) && (password[i] == password1))
         {

            for (int j = i + 1; j < users; j++)
            {
               userID[j - 1] = userID[j];
               password[j - 1] = password[j];
               balance[j - 1] = balance[j];
            }
            users--;
            cout << "Your account has been deleted successfully" << endl;
            break;
         }
      }
   }
};

class login
{
public:
   string userID2;
   string password2;

   void login_account()
   {
      int choose;
      int withdraw, deposit, k;
      cout << "*********** login details **********" << endl;
      cout << "\nEnter your user id: ";
      cin >> userID2;
      cout << "\nEnter your password: ";
      cin >> password2;
      for (k = 0; k < users; k++)
      {
         if ((userID[k] == userID2) && (password[k] == password2))
         {
            cout << "\nYou have successfully loged in" << endl;
            cout << "\nChoose any option: " << endl;
            cout << "\n1-Deposit money" << endl;
            cout << "\n2-Withdraw money" << endl;
            cout << "\n3-Check balance" << endl;
            cout << "\nEnter your choice: ";
            cin >> choose;
            switch (choose)
            {
            case 1:
            {
               cout << "Enter the money to be deposited- ";
               cin >> deposit;
               balance[k] = balance[k] + deposit;
               cout << deposit << " has been deposited";
               cout << "\nYour current balance is :" << balance[k];
               break;
            }

            case 2:
            {
               cout << "Enter money to be withdrawn- ";
               cin >> withdraw;
               balance[k] = balance[k] - withdraw;
               cout << withdraw << " has been withdrawn";
               cout << "\nCurrent balance is: " << balance[k];
               break;
            }

            case 3:
            {
               cout << " Available balance in your account is " << balance[k];
               break;
            }

            default:
               cout << "Wrong option chosen. Please enter the correct option";
               cout << endl;
               break;
            }
         }
         else
         {
            cout << "Login or Password Did Not Match, Try Again";
         }
      }
   }
};

class info
{
public:
   void getinfo()
   {
      cout << "Total no of users are: " << users << endl;
      cout << "Total amount available is: ";
      for (int a = 0; a < users; a++)
      {
         total_deposit = total_deposit + balance[a];
      }
      cout << total_deposit << endl;
   }
};

int main()
{
   while (1)
   {
      cout << "************ WELCOME TO ONLINE BANK **************" << endl;
      cout << endl;
      cout << "Enter one of the following option " << endl;
      cout << "\n1-New account" << endl;
      cout << "\n2-Login" << endl;
      cout << "\n3-Quit" << endl;
      cout << "\n4-Delete an account" << endl;
      cout << "\n5-Total no of users and total deposit information ";
      cout << "\nEnter your choice: ";
      cin >> choice;
      cout << endl;

      if (choice == 1)
      {
         newaccount obj1;
         obj1.setdetails();
      }
      else if (choice == 2)
      {

         login obj2;
         obj2.login_account();
      }
      else if (choice == 3)
      {
      }

      else if (choice == 4)
      {
         delete_account obj4;
         obj4.getdetails();
      }
      else if (choice == 5)
      {
         info obj5;
         obj5.getinfo();
      }
      else
      {
         cout << "error" << endl;
      }
      cout << endl;
   }
   return 0;
}
