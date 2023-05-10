#include<iostream>
#include<fstream>
#include"admin.h"
#include"Account.h"

using namespace std;


class School
{
    protected:
        string name,address,phoneno;
        int school_balance,no_of_campus;
		Account account;
		Teacher teacher;
		SchoolStaff schoolstaff;
		student stud;
		admin ad;
    public:
        void setter();
        void getter();
		
	bool Test_DataofStrings(string str){
    try
	{
		for (int i = 0; i < str.size(); i++)
		{
		if (str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z'){return true;}
        else
		{ throw(str); }
        }	
	}
    catch(string str)
	{
		cout<<str<<"  is invalid!!!!"<<endl;
		return false;
	}    
	}
bool Test_phone(string phone_no){
	int count=0;
			try{
		for (int i = 0; i < phone_no.size(); i++)
		{
	    if(phone_no[i]>='0'||phone_no[i]<='9')
		{
	    	count++;
		}
		}
		if(count==0||phone_no.length()!=11)
		{
			throw"phone_no";			
		}
		else{return true;}
	}
		
		catch(const char* str){
		cout<<str<<" is invalid shold contain 11-digit!!!!"<<endl;
		cout<<"\nEnter again!!\n";
		return false;	
		}

}
template<typename T>
bool Test_DataofNumber(T num){
	try{if(num<0){throw(num);}
		else{return true;}
	}
	catch(T num){
		cout<<"Number is invalid!!!!"<<endl<<"Enter again!!"<<endl;
		return false;
	}
}
};
void School::setter()
{
    cout<<"\n\t\t\tEnter Name of School: ";cin>>name;
	if(Test_DataofStrings(name)==false)
	{
	do{cout<<"\n\t\t\tENTER NAME :";cin>>name;} while(Test_DataofStrings(name)==false);
	}
    cout<<"\n\t\t\tEnter Address of School: ";cin>>address;
    cout<<"\n\t\t\tEnter Phone Number of School(11 Digits): ";cin>>phoneno;
    if(Test_phone(phoneno)==false)
	{
	do{cout<<"\n\t\t\tENTER PHONE NUMBER(11 Digits): ";cin>>phoneno;} while(Test_phone(phoneno)==false);
	}
    cout<<"\n\t\t\tEnter No of Campus: ";cin>>no_of_campus;
    fstream fin;
    fin.open("school.txt",ios::out);
    {
        fin<<name<<' '<<address<<' '<<phoneno<<' '<<no_of_campus<<' '<<endl;
    }
    fin.close();
}
void School::getter()
{
    fstream fout;
    fout.open("school.txt",ios::in);
    {
        fout>>name>>address>>phoneno>>no_of_campus;
    }
    cout<<"\n\t\t\tName of School: "<<name<<endl<<"\n\t\t\tAddress of School: "<<address<<endl<<"\n\t\t\tPhone number of school: "<<phoneno<<endl<<"\n\t\t\tNo of campus of school are: "<<no_of_campus<<endl;
}
