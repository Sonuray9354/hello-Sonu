#include<bits/stdc++.h>
using namespace std ;

/*  Mini Project - ATM
     -> Check Balance
     -> Cash Withdraw
     -> User Details
     -> Update Mobile Number 
*/



class atm
{
private:
          long int account_No;
          string name ;
          int PIN;
          double balance ;
          string mobile_No;


public:
      
       void setData(long int account_No_a , string name_a , int PIN_a, double balance_a, string mobile_No_a)
       {
         account_No = account_No_a ;
         name       =  name_a;
         PIN        = PIN_a;
         balance = balance_a;
         mobile_No = mobile_No_a;
       }
      
      long int getAccountNo()
      {
        return account_No;
      }

      string getName()
      {
        return name;
      }

    int getPIN()
    {
        return PIN;
    }

    double getBalance()
    {
        return balance;
    }

    string getMobile()
    {
        return mobile_No;
    }

     void setMobile(string mob_prev , string mob_new)
     {
        if(mob_prev == mobile_No){
            mobile_No =mob_new;
          cout<<endl<<" Sucessfully  Updated Mobile Number ";
          _getch();
        }

    else{
        cout<<endl<<" Incorrect !!! Old Mobile No ";
    }
     }

     void cashWithdraw(int amount_a)
     {
        if 
     }

}


int main()
{
cout<<
;

return 0;
}