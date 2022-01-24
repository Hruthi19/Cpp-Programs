#include <iostream>
#include <string.h>
using namespace std;

//------------------------------------------------------------------------------
//Function to count occurence of each character
//------------------------------------------------------------------------------
void OccuranceChars(char str[], int len)
{
   //rep_char counts different repeated characters
   for (int i = 0; i < len; i++)
   {
      int count = 1; //resets count to 1
      int flag = 0;
      for (int j = i + 1; j < len; j++)
      {
         if ((str[j] >= 'a' && str[j] <= 'z') || (str[j] >= 'A' && str[j] <= 'Z'))
            //Will take input of only alphabets
            if (str[i] == str[j])
            {
               str[j] = '0'; //changes repeated character to 0
               count++;
            }
            else if (str[i] == '0')
            {
               flag = 1; //to avoid printing
               break;
            }
      }
      if (flag == 0 && str[i] != ' ')
         cout << "\n " << str[i] << " occurs : " << count << " times";
   }
   return; //returns back to main function
}

//------------------------------------------------------------------------------
//Function to count number of consonants, vowels and blank space
//------------------------------------------------------------------------------
void isCounting(char str[], int len)
{
   int vowel = 0, consonant = 0, space = 0;

   for (int i = 0; str[i] != '\0'; i++)
   {
      if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
          str[i] == 'o' || str[i] == 'u' || str[i] == 'A' ||
          str[i] == 'E' || str[i] == 'I' || str[i] == 'O' ||
          str[i] == 'U')
         vowel++;
      else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
         consonant++;
      else if (str[i] == ' ')
         space++;
   }
   cout << "\nVOWELS: " << vowel << endl;
   cout << "CONSONANTS: " << consonant << endl;
   cout << "BLANK SPACES: " << space << endl;
   return; //returns back to main function
}

//------------------------------------------------------------------------------
//Function to check whether given character is present or not
//------------------------------------------------------------------------------
void isChar(char str[], char ch, int len)
{
   int i, j;
   for (i = 0; i < len; i++)
   {
      if (str[i] == ch)
         break;
   }

   if (str[i] == ch)
   {
      cout << ch << " is present " << endl;
      for (j = i + 1; j < len; j++)
         cout << str[j];
   }
   else
      cout << ch << " is not present";

   return; //returns back to main function
}
//------------------------------------------------------------------------------
//main function
//------------------------------------------------------------------------------
int main()
{

   char str[50];
   cout << "Enter the string: " << endl;
   cin.getline(str, 50); //inputting the string

   int length = strlen(str); //length of given string

   //sending to function to find occurance of each characters
   OccuranceChars(str, length);

   //sending to a function for counting characters, vowels or consonants
   isCounting(str, length);

   char ch;
   cout << "\nEnter the character you wanted to search: ";
   cin >> ch;

   //sending to check whether present or not
   isChar(str, ch, length);

   return 0;
}
