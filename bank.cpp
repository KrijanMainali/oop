#include<iostream>
using namespace std;

class bank1
{
    public:
    int account_number;
    string name;
    int balance;
    int deposit;
    int withdraw;
    int choice;

    public:
    int get_account_number()
    {
        return account_number;
    }
    string get_name()
    {
        return name;
    }
    int get_balance()
    {
        return balance;
    }
    int get_deposit()
    {
        return deposit;
    }
    int get_withdraw()
    {
        return withdraw;
    }
};

class bank2 : public bank1
{   
    public:

   inline void get_data()
    {
        cout<<"Input enter your account number"<<endl;
        cin>>account_number;
        cout<<"Input enter your name"<<endl;
        cin>>name;
        cout<<"Input enter your balance"<<endl;
        cin>>balance;
        cout<<"Input enter the amount you wnat to deposit"<<endl;
        cin>>deposit;
        cout<<"********************************************************"<<endl;
     }

     inline void user_choice()
     {
        cout<<"What you want to do"<<endl<<"press 1 for your info"<<endl<<"2.balance enquiry"<<endl<<"3.To withdraw amount"<<endl;
        cout<<"*********************************************************"<<endl;
        cout<<"Input enter your choice"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
            {
                cout<<"Your account name is "<<name<<endl;
                cout<<"Your account number is "<<account_number<<endl;
                cout<<"********************************************************"<<endl;
                break;
            }
            case 2:
            {
                cout<<"Your balnce is "<<balance<<endl;
                cout<<"********************************************************"<<endl;
                break;
            }
            case 3:
            {
                cout<<"Enter the amount you want to withdraw "<<endl;
                cin>>withdraw;
                cout<<"********************************************************"<<endl;
                break;
            }
        }
     }    
};

 int main()
 {
        bank2 b1;
        b1.get_data();
        b1.user_choice();
        b1.balance+=b1.deposit;
        if (b1.balance>=b1.withdraw)
        {
            cout<<"Withdrawing your amount"<<endl;
            b1.balance-=b1.withdraw;
            cout<<"your new balnce is "<<b1.balance<<endl;
        }
        else
        {
            cout<<"You dont have sufficient balance in your account"<<endl;
        }
        cout<<"You can take your cash and your ATM card"<<endl;
        return 0;
 }