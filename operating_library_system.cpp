#include<iostream>
#include<string>
using namespace std;

class library
{
 private:
 
  string book_name,author,publisher;
  int book_id,quan;
 
 
 public:
 
  library()
  {
   book_id=0;quan=0;book_name="null";author="null";publisher="null";
  }
 
  void get()
  {
   cout<<"\nEnter book ID           = ";
   cin>>book_id;
   cout<<"Enter book name         = ";
   cin>>book_name;
   cout<<"Enter the author        = ";
   cin>>author;
   cout<<"Enter publisher         = ";
   cin>>publisher;
   cout<<"Enter quantity of issue = ";
   cin>>quan;

  }
 
void display()
{
 
  cout<<"\n"<<book_id<<"\t"<<book_name<<"\t"<<author<<"\t"<<publisher<<"\t"<<quan;
}
void issue_book(int q)
{
    quan=quan-q;
    cout<<"\nQuantity Updated...";
}
int getbook_id()
{
    return book_id;
}
int getquan()
{
    return quan;
}
};

int main()
{
	int BOOK_ID,flag=0,Quantity;
	library l[3];
	for(int i=0;i<3;i++)
	{
		l[i].get();
	}
		
	cout<<"\n----------Data Available in Library -------------\n";
	for(int i=0;i<3;i++)
	{
		l[i].display();
	}
	cout<<"\n--------------------------------------------------\n";
	cout<<"\nEnter Book ID to be issued = ";
	cin>>BOOK_ID;
 
	for(int i=0;i<3;i++)
	{
		if(BOOK_ID==l[i].getbook_id())
		{
			flag=1;
			cout<<"Congratulations your book is available!!\n";
			cout<<"Enter the quantity to be issued = ";
			cin>>Quantity;
     
			if(Quantity+1<l[i].getquan())
			{
				l[i].issue_book(Quantity);
				cout<<"Congratulations your Book is Issued\n";
     		}
     		break;
 		}
	}
	if(flag==0)
	{
		cout<<"Book is Not issued ";
	}
	for(int i=0;i<3;i++)
	{
	    l[i].display();
	}
}