#include<iostream>
#include<conio.h>
using namespace std;
class student
{
	string name,CNIC,add,phone;
	int roll;
	public:
		Student()
		{
		    cout<<"Hello student\n";
		}
		void setdata(string n,string cn,string ad,string ph,int rn)
		{
			name=n;
			CNIC=cn;
			add=ad;
			phone=ph;
			roll=rn;
		}
		void getdata()
		{
			cout<<"name:"<<name<<"address:"<<add<<"CNIC:"<<CNIC<<"rollno:"<<roll<<"ph_no:"<<phone<<endl;
		}
};
int main()
{
	student S1;
	S1.setdata("Sahar","0343","tahli wala","0300",0);
	S1.getdata();
}