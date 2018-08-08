#include <iostream>
#include <conio.h>
using namespace std;

class atm
{
    int p;
    int b=50000;
    int w=0;
public :
    int l,a,m=0;
    void enterpin()
    {
        for(int i=1;i<=4;i++)
        {
           char ch=getch();
            cout << "*";
            ch=ch-48;
            m=(m*10)+ch;
        }
        getch();
        if(m==1234)
        {
            l=m;
            cout << "\nCorrect pin Entered\n";
        }
        else
            cout << "\nIncorrect pin Entered\nYou aren't allowed to access this ATM account\n";
    }
    void show()
    {
cout <<"\n\nPress the following numbers according to your convenience\n";
cout <<"1 - Balance left \n";
cout <<"2 - Withdraw Cash \n";
cout <<"3- Change pin \n";
cout <<"4 - Exit \n";
    cin >> a;
    }
    void displaybalance()
    {
        b=b-w;
       cout << "Current balance = " << b;
    }
    void withdraw()
    {
        cout << "Enter the amount of money you want to withdraw\n";
        cin >> w;
        if(w>50000)
        cout << "You don't have enough money\n";
    }
    void changepin()
    { int n=0;int t=0;
           cout << "Enter new pin\n";
            for(int i=1;i<=4;i++)
        {
          char ch=getch();
            cout << "*";
            ch=ch-48;
            t=(t*10)+ch;
        }
            cout << "Enter new pin again to confirm\n";
             for(int j=1;j<=4;j++)
        {
            char cr=getch();
            cout << "*";
            cr=cr-48;
            n=(n*10)+cr;
        }
        if (n==t)
        {
            cout << "Pin successfully changed\n";
            p=n;
        }
        else
            cout << "TRY AGAIN and Enter correct password \n";
    }
    void exit()
    {}
};

int main()
{
    atm ob;
       while(ob.a!=4){
    cout << "\nEnter pin\n";
    ob.enterpin();
if(ob.l==1234)
{
    ob.show();
switch(ob.a)
{
case 1:
    ob.displaybalance();
    break;
case 2:
    ob.withdraw();
    ob.displaybalance();
    break;
case 3:
    ob.changepin();
    break;
case 4:
    ob.exit();
    break;
}
}
}
}
