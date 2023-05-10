#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
class admin
{	
	 string username,password;
	public:
	admin()
{
	fstream z;
	z.open("hi.bin",ios::in);
	{
		z>>username>>password;
	}
	z.close();
}
	int verification()
{
	cout<<"\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 PLEASE ENTER LOGIN DETAILS \xB2\xB2\xB2\xB2\xB2\xB2\xB2";
}
bool verification(char name[10], char pass[10]){
	int x;
	if (username==name)
	{
		if(password==pass)
		{
			cout<<"CORRECT USERNAME & PASSWORD";
			return true;
		}
		else
		{
		cout<<"\nIncorrect username/password";
		return false;
		}
	}
	else
	{
		cout<<"\nIncorrect username/password";
		return false;
	}
}
};
