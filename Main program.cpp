#include <iostream>
#include <fstream>
#include"School.h"
#include <cstring>
#include <conio.h>
#include <windows.h>
using namespace std;
void fordelay(int j);
void menu_school(int ch,School &s)
{
	if (ch==1)
	{
		s.setter();
	}
	if (ch==2)
	{
		s.getter();
	}
	
}
void menu_student(int ch, student &s)
{
	if (ch==1)
	{
		s.getstudent();
	}
	if (ch==2)
	{
		s.search_student();
	}
	if (ch==3)
	{
		s.update_student();
	}
	if (ch==4)
	{
		s.deletestudent();
	}
}
void menu_Teacher(int ch,Teacher &T)
{
	if (ch==1)
	{
		T.set_teacher();
	}
	if (ch==2)
	{
		T.search_record();
	}
	if (ch==3)
	{
		T.update_record();
	}
	if (ch==4)
	{
		T.delete_record();
	}
	
}
void menu_principal(int ch,principal &P)
{
	if (ch==1)
	{
		P.set_principal();
	}
	if (ch==2)
	{
		P.search_record();
	}
	if (ch==3)
	{
		P.update_record();
	}
	if (ch==4)
	{
		P.delete_record();
	}
	
}
void menu_SchoolStaff(int ch,SchoolStaff &S)
{
	if (ch==1)
	{
		S.set_SchoolStaff();
	}
	if (ch==2)
	{
	    S.search_record();
	}
	if (ch==3)
	{  
		S.update_record();
	}
	if (ch==5)
	{
		S.delete_record();
	}
	
}
void menu_Account(Account &A)
{
		+A;
       A.setter();
       A.getter();	
}
void main_menu(int c){
	if (c==1){
		int ch;
		School s1;
		cout<<"\n\n\n\n\t\t\t1.Change School Data\n\t\t\t2.Dispaly School Data\n\t\t\tEnter choice: ";
		cin>>ch;
		menu_school(ch,s1);
	}
	if (c==2){
		int ch;
		student s1;
		cout<<"\n\n\n\n\t\t\t1.Enter Student\n\t\t\t2.Search Student\n\t\t\t3.Update Student\n\t\t\t4.Delete Student\n\t\t\tEnter choice: ";
		cin>>ch;
		menu_student(ch,s1);
	}
	if (c==3){
		int ch;
		Teacher t1;
		cout<<"\n\n\n\n\t\t\t1.Enter Teacher\n\t\t\t2.Search Teacher\n\t\t\t3.Update Teacher\n\t\t\t4.Delete Teacher\n\t\t\tEnter choice: ";
		cin>>ch;
		menu_Teacher(ch,t1);
	}
	if (c==4){
		int ch;
		SchoolStaff S;
		cout<<"\n\n\n\n\t\t\t1.Enter Staff\n\t\t\t2.Search Staff\n\t\t\t3.Update Staff\n\t\t\t4.Delete Staff\n\t\t\tEnter choice: ";
		cin>>ch;
		menu_SchoolStaff(ch,S);
	}
	if (c==5)
	{
		int ch;
		principal P;
		cout<<"\n\n\n\n\t\t\t1.Enter Principal\n\t\t\t2.Dispaly Principal\n\t\t\t3.Update Principal\n\t\t\t4.Delete Principal\n\t\t\tEnter choice: ";
		cin>>ch;
		menu_principal(ch,P);
	}
	if (c==6){
		int ch;
		Account A;
		cout<<"\n\n\n\n\t\t\tDetails\n";
		menu_Account(A);
	}
	if (c==7){
		cout<<"THANK YOU FOR USING THIS PROGRAM";
		exit(1);
	}
}
int main()
{
	bool x;
	char name[10];
	char pass[10];
	int i;
	int choice;
	admin a;
	system("color 70");
    printf("\n\n\t\t\tWELCOME TO SCHOOL MANAGEMENT SYSTEM");
	a.verification();
	do{
	cout<<"\n\t\t\tEnter Username: ";
	cin>>name;
	cout<<"\n\t\t\tEnter Password: ";
	cin>>pass;
	x=a.verification(name,pass);
}while(x!=true);	
	cout<<"\n\n\t\tWait a second!\n\n\t\tLOADING SYSTEM";
    for(i=0;i<=6;i++)
    {
    fordelay(100000000);
	cout<<".";
    }
system("cls");
	do{
	int c;
	cout<<"\n\n\n\n\t\t\t1.School Details\n\t\t\t2.Student Record\n\t\t\t3.Teacher Record\n\t\t\t4.Staff Record\n\t\t\t5.Principal Details\n\t\t\t6.Account Details\n\t\t\t7.Exit Program\n\t\t\tEnter your choice: ";
	cin>>c;	
	system("cls");
	main_menu(c);
	cout<<"\n1.Main Menu\n2.Exit Program";
	cin>>choice;
	system("cls");
}while(choice!=2);
system("cls");
cout<<"THANK YOU FOR USING THIS PROGRAM";
}
void fordelay(int j)
{   int i,k;
    for(i=0;i<j;i++)
         k=i;
}

