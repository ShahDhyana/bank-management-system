#include<iostream>
using namespace std;

class account
{
private:
    string name;
    int accno;
    string atype;
public:
	account()
	{
		name="";accno=0;atype="";
	}
    void  getAccountDetails()
    {
        cout<<"\nEnter Customer Name : ";
        cin>>name;
        cout<<"Enter Account Number  : ";
        cin>>accno;
        cout<<"Enter Account Type    : ";
        cin>>atype;
    }
    void displayDetails()
    {
        cout<<"\n\nCustomer Name : "<<name;
        cout<<"\nAccount Number  : "<<accno;
        cout<<"\nAccount Type    : "<<atype;
    }
    int getaccno()
    {
    	return accno;
	}
};
class current_account : public account
{
private:
    float balance;
public:
	current_account()
	{
		balance=0;
	}
	void c_displayAll()
	{
		displayDetails();
		c_display();
	}
    void c_display()
    {
        cout<<"\nBalance :"<<balance;
    }
    void c_deposit()
    {
        float deposit;
        cout<<"\nEnter amount to Deposit :  ";
        cin>>deposit;
        balance = balance + deposit;
    }
    void c_withdraw()
    {
        float withdraw;
        cout<<"\n\nBalance : "<<balance;
        
        if(balance > 1000)
        {
        	cout<<"\nEnter amount to be withdraw :";
        	cin>>withdraw;
            balance=balance-withdraw;
            cout<<"\nBalance Amount After Withdraw: "<<balance;
        }
        else
        {
            cout<<"\n Insufficient Balance";
        }
 
    }
 
 
};
 
class saving_account : public account
{
private:
    float sav_balance;
public:
	saving_account()
	{
		sav_balance=0;
	}
	void s_displayAll()
	{
		displayDetails();
		s_display();
	}
    void s_display()
    {
        cout<<"\nBalance :  "<<sav_balance;
    }
    void s_deposit()
    {
        float deposit,interest;
        cout<<"\nEnter amount to Deposit :  ";
        cin>>deposit;
        sav_balance = sav_balance + deposit;
        interest=(sav_balance*2)/100;
        sav_balance=sav_balance+interest;
    }
    void s_withdraw()
    {
        float withdraw;
        cout<<"\nBalance :- "<<sav_balance;
        
        if(sav_balance > 500)
        {
        	cout<<"\nEnter amount to be withdraw : ";
        	cin>>withdraw;
            sav_balance=sav_balance-withdraw;
            cout<<"\nBalance Amount After Withdraw: "<<sav_balance;
        }
        else
        {
            cout<<"\n Insufficient Balance";
        }
    }
};
 
 
 
int main()
{
    current_account c1[10];
    saving_account s1[10];
    char type;int ano,f=0;
    cout<<"\nEnter S for saving customer and C for current a/c customer : ";
    cin>>type;
    int choice;
    if(type=='s' || type=='S')
    {
    	for(int i=0;i<3;i++)
        	s1[i].getAccountDetails();
        while(1)
        {
            cout<<"\nChoose Your Choice"<<endl;
            cout<<"1)   Deposit"<<endl;
            cout<<"2)   Withdraw"<<endl;
            cout<<"3)   Display Balance"<<endl;
            cout<<"4)   Display with full Details"<<endl;
            cout<<"5)   Display All Accounts"<<endl;
            cout<<"6)   Exit"<<endl;
            
            cout<<"Enter Your choice: ";
            cin>>choice;
            switch(choice)
            {
            case 1 :
            	cout<<"\nEnter Account Number = ";cin>>ano;
            	for(int i=0;i<3;i++)
            	{
            		if(ano==s1[i].getaccno())
            		{
            			f=1;
            			s1[i].s_deposit();
            			break;
					}
				}
				if(f==0)
				{
					cout<<"\nInvalid Account Number ";
				}
                
                break;
            case 2 :
            	cout<<"\nEnter Account Number = ";cin>>ano;
            	for(int i=0;i<3;i++)
            	{
            		if(ano==s1[i].getaccno())
            		{
            			f=1;
            			s1[i].s_withdraw();
            			break;
					}
				}
				if(f==0)
				{
					cout<<"\nInvalid Account Number ";
				}
                
                break;
            case 3 :
            	cout<<"\nEnter Account Number = ";cin>>ano;
            	for(int i=0;i<3;i++)
            	{
            		if(ano==s1[i].getaccno())
            		{
            			f=1;
            			s1[i].s_display();
            			break;
					}
				}
				if(f==0)
				{
					cout<<"\nInvalid Account Number ";
				}
                
                break;
            case 4 :
            	cout<<"\nEnter Account Number = ";cin>>ano;
            	for(int i=0;i<3;i++)
            	{
            		if(ano==s1[i].getaccno())
            		{
            			f=1;
            			s1[i].displayDetails();
            			s1[i].s_display();
            			break;
					}
				}
				if(f==0)
				{
					cout<<"\nInvalid Account Number ";
				}
                
                break;
            case 5:
            	cout<<"\n --------------------- \n";
            	for(int i=0;i<3;i++)
            	{
            		s1[i].s_displayAll();
				}
				cout<<"\n --------------------- \n";
				cout<<endl;
				break;
            case 6 :
                goto end;
            default:
                cout<<"\n\nEntered choice is invalid,\"TRY AGAIN\"";
            }
        }
    }
    else if(type=='c' || type=='C')
    {
    	for(int i=0;i<3;i++)
        	c1[i].getAccountDetails();
        while(1)
        {
            cout<<"\nChoose Your Choice"<<endl;
            cout<<"1)   Deposit"<<endl;
            cout<<"2)   Withdraw"<<endl;
            cout<<"3)   Display Balance"<<endl;
            cout<<"4)   Display with full Details"<<endl;
            cout<<"5)   Display All Accounts"<<endl;
            cout<<"6)   Exit"<<endl;
            cout<<"Enter Your choice: ";
            cin>>choice;
            switch(choice)
            {
            case 1 :
            	cout<<"\nEnter Account Number = ";cin>>ano;
            	for(int i=0;i<3;i++)
            	{
            		if(ano==c1[i].getaccno())
            		{
            			f=1;
            			c1[i].c_deposit();
            			break;
					}
				}
				if(f==0)
				{
					cout<<"\nInvalid Account Number ";
				}
                
                
                break;
            case 2 :
            	cout<<"\nEnter Account Number = ";cin>>ano;
            	for(int i=0;i<3;i++)
            	{
            		if(ano==c1[i].getaccno())
            		{
            			f=1;
            			c1[i].c_withdraw();
            			break;
					}
				}
				if(f==0)
				{
					cout<<"\nInvalid Account Number ";
				}
                
                break;
            case 3 :
            	cout<<"\nEnter Account Number = ";cin>>ano;
            	for(int i=0;i<3;i++)
            	{
            		if(ano==c1[i].getaccno())
            		{
            			f=1;
            			c1[i].c_display();
            			break;
					}
				}
				if(f==0)
				{
					cout<<"\nInvalid Account Number ";
				}
                
                break;
            case 4 :
            	cout<<"\nEnter Account Number = ";cin>>ano;
            	for(int i=0;i<3;i++)
            	{
            		if(ano==c1[i].getaccno())
            		{
            			f=1;
            			c1[i].displayDetails();
            			c1[i].c_display();
            			break;
					}
				}
				if(f==0)
				{
					cout<<"\nInvalid Account Number ";
				}
                
                
                break;
            case 5:
            	cout<<"\n --------------------- \n";
            	for(int i=0;i<3;i++)
            	{
            		c1[i].c_displayAll();
				}
				cout<<"\n --------------------- \n";
				cout<<endl;
				break;
            case 6 :
                goto end;
            default:
                cout<<"\n\nEntered choice is invalid,\"TRY AGAIN\"";
            }
        }
    }
    else
    {
        cout<<"\nInvalid Account Selection";
    }
end:
    cout<<"\nThank You for Banking with us..";
    return 0;
}