#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  int n;
  int choice;

  cout << "\t\tWelcome to guess number game \n\n " << endl;
  while (1)

  {
    cout << "1.Normal (10 chances)" << endl;
    cout << "2.Medium (7 chances)" << endl;
    cout << "3.Difficult (5 chances)" << endl;
    cout << "press 0 to end game " << endl;

    int DifficultyChoice;
    cout << "Enter difficulty choice :" << endl;
    cin >> DifficultyChoice;

    srand(time(0));
    int n = rand() % 100 + 1;
    int Choice;
    // cout<<"the random number.. is :"<<n<<endl;

    if (DifficultyChoice == 1)
    {

      int cleft = 10;
      cout << "YOU have 10 choices " << endl;
      for (int i = 0; i < 10; i++)
      {

        cout << "Enter the number" << endl;
        cin >> Choice;

        if (Choice == n)
        {
          cout << "You win ! " << Choice << " is the secret number " << endl;

          cout << "Play the game again with us!!\n\n"
               << endl;

          break;
        }
        else
        {
          cout << "Nope, " << Choice << " is not the right number\n";

          if (Choice > n)
          {
            cout << "The number is smaller than the secret number " << endl;
          }
          else
          {
            cout << "The number is greater than the secret number " << endl;
          }
          cleft--;
          cout << cleft << " choice left " << endl;

          if (cleft == 0)
          {
            cout << "You couldn't find the secret number, it was " << n << ", You lose!!\n\n"
                 << endl;
            cout << "Play the game again with us!!\n\n"
                 << endl;
          }
        }
      }
    }

    if (DifficultyChoice == 2)
    {

      int cleft = 7;
      cout << "YOU have 7 choices " << endl;
      for (int i = 0; i < 7; i++)
      {

        cout << "Enter the number" << endl;
        cin >> Choice;

        if (Choice == n)
        {
          cout << "You win ! " << Choice << " is the secret number " << endl;
          cout << "Play the game again with us!!\n\n"
               << endl;

          break;
        }
        else
        {
          cout << "Nope, " << Choice << " is not the right number\n";

          if (Choice > n)
          {
            cout << "The number is smaller than the secret number " << endl;
          }
          else
          {
            cout << "The number is greater than the secret number " << endl;
          }
          cleft--;
          cout << cleft << " choice left " << endl;

          if (cleft == 0)
          {
            cout << "You couldn't find the secret number, it was " << n << ", You lose!!\n\n"
                 << endl;
            cout << "Play the game again with us!!\n\n"
                 << endl;
          }
        }
      }
    }

    if (DifficultyChoice == 3)
    {

      int cleft = 5;
      cout << "YOU have 5 choices " << endl;
      for (int i = 0; i < 5; i++)
      {

        cout << "Enter the number" << endl;
        cin >> Choice;

        if (Choice == n)
        {
          cout << "You win ! " << Choice << " is the secret number " << endl;
          cout << "Play the game again with us!!\n\n"
               << endl;

          break;
        }
        else
        {
          cout << "Nope, " << Choice << " is not the right number\n";

          if (Choice > n)
          {
            cout << "The number is smaller than the secret number " << endl;
          }
          else
          {
            cout << "The number is greater than the secret number " << endl;
          }
          cleft--;
          cout << cleft << " choice left " << endl;

          if (cleft == 0)
          {
            cout << "You couldn't find the secret number, it was " << n << ", You lose!!\n\n"
                 << endl;
            cout << "Play the game again with us!!\n\n"
                 << endl;
          }
        }
      }
    }
  }
}