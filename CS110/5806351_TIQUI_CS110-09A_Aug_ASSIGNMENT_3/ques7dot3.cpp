/**********************************
 * @author: Brandon Tiqui         *
 * @date  : 09.25.09              *
 * Question 7.3: ques7dot3.cpp    *
 * Shows solution without errors. *
 **********************************/
//this program computes how much money will
 //accumulate after so many years of investing
  #include <iostream>
  using namespace std;
  double Balance = 0.0; 
  double Interest;
  double YearlyCont;
  int NumYears;
 //this function computes one year of investment
  double newBalance(double balance);
  int main () {
   cout << "How much money will you deposit"
      << " each year?" << endl;
   cin >> YearlyCont;
     cout << "What interest rate will you get"
    <<"(enter 5% as .05)?" << endl;
   cin >> Interest;
   cout << "How many years will you invest?" 
    << endl;
   cin >> NumYears;
   for(int i = 1; i <= NumYears; i++) // ERROR #1 fixed by removing the third semicolon
    Balance = newBalance(Balance);
   cout << "Money at end of investment: " 
    << Balance << endl;
   return 0;
  }
  double newBalance(double balance) {
 //add in this year’s deposit
    balance = balance + YearlyCont;
 //add in this year’s interest
    balance = (Interest + 1.0) * balance; // ERROR #2 fixed by replacing Balance with balance
    return balance;
 }
