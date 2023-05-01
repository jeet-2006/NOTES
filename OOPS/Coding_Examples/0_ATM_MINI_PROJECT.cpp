#include<bits/stdc++.h>
using namespace std;

class atm
{
    long int accNo;
    string name;
    int PIN;
    double bankBalance;
    string mobNo;
public:
    void setData(int accNo_a,string name_a,int PIN_a,double bankBalance_a,string mobNo_a)
    {
        accNo = accNo_a;
        name = name_a;
        PIN = PIN_a;
        bankBalance = bankBalance_a;
        mobNo = mobNo_a;
    }
    long int getAccNo()
    {
        return accNo;
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
        return bankBalance;
    } 
    string getMobNo()
    {
        return mobNo;
    }
    void cashWithdrawal(int amount)
    {
        if(amount > 0 && amount < bankBalance)
        {
            bankBalance -= amount;
            cout<<"Collect Your Cash"<<endl;
            cout<<"Available Balance: "<<bankBalance<<endl;
        }
        else
        {
            cout<<"Enter valid amount"<<endl;
        }
    }
    void getUserDetails()
    {
        cout<<"name -> "<<name<<endl;
        cout<<"Account Number -> "<<accNo<<endl;
        cout<<"Mobile NUmber -> "<<mobNo<<endl;
        cout<<"Bank Balance -> "<<bankBalance<<endl;
    }
    void update_Num(string prev_num,string new_num)
    {
        if(prev_num == mobNo)
        {
            mobNo = new_num; 
            cout<<"Update Successfully:)"<<endl;
        }
        else
        {
            cout<<"Please Enter Valid Mo No"<<endl;
        }
    }
};
int main()
{
    atm user1;
    user1.setData(123456789,"jayesh joshi",2006,999999.0,"9876543210");

    long acc_no;
    int pin;
    cout<<endl<<"******WELCOME TO ATM******"<<endl<<endl;
    do
    {
        cout<<"Enter Your Acoount_No :"<<endl;
        cin>>acc_no;

        cout<<"Enter Your PIN :"<<endl;
        cin>>pin;

        if(acc_no == user1.getAccNo() && pin == user1.getPIN())
        {
            do
            {
                int amount;
                string old_num,new_num;

                cout<<"******WELCOM "<<user1.getName()<<endl<<endl;
                cout<<"Select Options:"<<endl;
                cout<<"1. Check Balance"<<endl;
                cout<<"2. Cash Withdrawal"<<endl;
                cout<<"3. View User Details"<<endl;
                cout<<"4. Update Mobile No"<<endl;
                cout<<"5. Exit"<<endl;

                int choice;
                cin>>choice;

                switch(choice)
                {
                    case 1: 
                        cout<<"Your BankBalance is -> "<<user1.getBalance()<<endl;
                        break;
                    
                    case 2:
                        cout<<"Enter Amount Please:"<<endl;
                        cin>>amount;
                        user1.cashWithdrawal(amount);
                    
                    case 3:
                        cout<<"User Details: "<<endl;
                        user1.getUserDetails();

                    case 4:
                        cout<<"Enter Old Number:"<<endl;
                        cin>>old_num;
                        cout<<"Enter new Number"<<endl;
                        cin>>new_num;
                        user1.update_Num(old_num,new_num);
                    case 5:
                        exit(0);
                    
                    default:
                        cout<<"Enter valid input"<<endl;
                }
            }while(1);

        }
        else
            cout<<"User Does not exist"<<endl;
    } while (1);
    
    


}