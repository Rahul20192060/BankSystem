
#include<conio.h>
#include<stdio.h>
#include<iostream>
using namespace std;

class bank
{
    char name[100],add[100],y;
    int balance, amount;
public:
    void open_account ();
    void deposite_money();
    void withdraw_money ();
    void display_account();
};
void bank::open_account()
{
    cout<<"Enter your full name ::";
    cin.ignore();
    cin.getline(name,100);
    cout<<"Enter your adress::";
    cin.ignore();
    cin.getline(add,100);
    cout<<"what type of account you want to open saving (s) or current (c):: ";
    cin>>y;
    cout<<"Enter amount for deposit :: ";
    cin>>balance;
    cout<<"Your account is created ";

}
void bank::deposite_money()
{
    int a ;
    cout<<"Enter how much money you want to deposit::";
    cin>>a;
    balance+=a;
    cout<<"Your total deposit amount\n";
}
void bank::display_account()
{
    cout<<"Enter the name ::"<<name<<endl;
    cout<<"Entered your aderess ::"<<add<<endl;
    cout<<"Type of account that you open ::"<<y<<endl;
    cout<<"Amount you deposit ::"<<balance<<endl;

}
void bank::withdraw_money()
{
    cout<<"withdraw ::";
    cout<<"Enter your amount for withdrawing ";
    cin>>amount;
    balance=balance-amount;
    cout<<"Now your total amount is left ::"<<balance;
}

int main()
{
    int ch,x,n;
    bank obj;
    do
    {
    cout<<"WELLCOME TO BANK OF CALCUTTA\n";
    cout<<"------------------------------\n";
    cout<<"01)open account \n";
    cout<<"02)deposit money \n";
    cout<<"03)withdraw money \n";
    cout<<"04)display account\n";
    cout<<"05)Exit\n";
    cout<<"please sir, select the option from above ";
    cin>>ch;

    switch(ch)
    {

        case 1:"01)open account \n";
        obj.open_account ();
        break;
        case 2:"02)deposit money \n";
        obj.deposite_money();
        break;
        case 3:"03)withdraw money \n";
        obj.withdraw_money ();
        break;
        case 4:"04)display account\n";
        obj.display_account();
        break;
        case 5:
            if(ch==5)
            {
               cout<< "exit";
            }
        default:
            cout<<"This is not exit please try again ";

    }
    cout<<"\n do you want to select next step then please press::y\n";
    cout<<"if you want to exit then please press:: N ";
    x=getch();
    if(x=='n' || x=='N')
    cout<<"exit";
    }
    while (x=='y' || x=='Y');


 getch();
 return 0;




}

