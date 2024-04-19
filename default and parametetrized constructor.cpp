#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class student
{
	string name,cnic,adr,phone;
	int rollno;
	public:
	//Default Constructor
	student()
	{
		cout<<"Default Constructor Call Started\n";
		setData();
		cout<<"Default Constructor Call Ended\n";
	}
	//Parameterized  Constructor
	student(string n,string cn,string ad,string ph,int rn)
	{
		cout<<"Parameterized Construcror Call Started\n";
		name=n;
		cnic=cn;
		adr=ad;
		cout<<"Parameterized Constructor Call Ended\n";
	}
	void setData(string n,string cn,string ad,string ph,int rn)
	{
		cout<<"Set Data Parameterized Call Started\n";
		name=n;
		cnic=cn;
		adr=ad;
		phone=ph;
		rollno=rn;
		cout<<"Set Data Parameterized CALL Ended\n";
	}
	void setData()
	{
		cout<<"Set Data Parameterized Call Student\n";
		cout<<"Enter Name:";
		cin>>name;
		cout<<"Enter CNIC:";
		cin>>cnic;
		cout<<"Enter Address:";
		cin>>adr;
		cout<<"Enter Phone:";
		cin>>phone;
		cout<<"Enter Roll No:";
		cin>>rollno;
		cout<<"Set Data Parameterized Call Ended\n";
		}
		void getData()
		{
			cout<<"\nGet Data Call Started\n";
			cout<<"Name:"<<name;
			cout<<"\nCNIC:"<<cnic;
			cout<<"\nPhone:"<<phone;
			cout<<"\nAddress:"<<adr;
			cout<<"\nRoll No:"<<rollno;
			cout<<"\nGet Data Call Ended\n";
		}
		//Destructor
		~student()
		{
			cout<<"Default Destructor Call Started\n";
			getData();
			cout<<"Default Constructor Call Ended\n";
		}
};
main()
{
	cout<<"Welcome to Main Function...!\n\n";
				
	student s1, s2("Ali","35404","SKP","0300",1234);
	s1.getData();
	s2.getData();
	cout<<"\n\nThanks...Good Day\n";	
}

			
					