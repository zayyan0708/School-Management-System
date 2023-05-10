#include<iostream>
#include<fstream>
#include"Student.h"
#include"staff.h"
using namespace std;
class Account
{
	protected:
		int balance_of_school;
		int total_salary_of_teacher,total_salary_of_staff,total_fees_recieved,t_s_principal;
		int *salary_of_teachers,*salary_of_staff,*fee_of_student,*salary_of_principal;
		Teacher teach;
		SchoolStaff sstaff;
		student std;
		principal prin;
	public:
		void friend operator +(Account &);
		void setter();
		void getter();
};
void operator +(Account &A)
{
			A.total_salary_of_teacher=0;
			A.salary_of_teachers=A.teach.salary_show();
			for(int i=0;i<100;i++)
			{
				A.total_salary_of_teacher=A.total_salary_of_teacher+A.salary_of_teachers[i];
			}
			
			A.total_salary_of_staff=0;
			A.salary_of_staff=A.sstaff.salary_show();
			for(int i=0;i<100;i++)
			{
				A.total_salary_of_staff=A.total_salary_of_staff+A.salary_of_staff[i];
			}
				
			A.total_fees_recieved=0;
			A.fee_of_student=A.std.show_fees();
			for(int i=0;i<100;i++)
			{
				A.total_fees_recieved=A.total_fees_recieved+A.fee_of_student[i];
			}

			A.t_s_principal=0;
			A.salary_of_principal=A.prin.salary_show();
			for(int i=0;i<1;i++)
			{
				A.t_s_principal=A.salary_of_principal[i];
			}
			
}

void Account::setter()
		{
			balance_of_school=total_fees_recieved-total_salary_of_staff-total_salary_of_teacher-t_s_principal;
			fstream f;
			f.open("account.txt",ios::out);
			{
				f<<total_salary_of_teacher<<' '<<total_salary_of_staff<<' '<<total_fees_recieved<<' '<<t_s_principal<<' '<<balance_of_school<<endl;
			}
			f.close();
		}

void Account::getter()
		{
			fstream f;
			f.open("account.txt",ios::in);
			f>>total_salary_of_teacher>>total_salary_of_staff>>total_fees_recieved>>balance_of_school;
			int select;
			char choice;
			cout<<"\n\t\t\tWhat you want to know"<<endl;
			cout<<"\n\t\t\t1.Total Fees Recieved By The Students\n\t\t\t2.Total Salary Given to teachers\n\t\t\t3.Total Salary Given To Staff Members\n\t\t\t4.Principal Salary\n\t\t\t5.Total Balance Of School\n\t\t\tEnter Choice: ";
			cin>>select;
			switch(select)
			{
				case 1:
				cout<<"\n\t\t\tTotal fees recieved by the students is: "<<total_fees_recieved<<endl;
				break;
				case 2:
				cout<<"\n\t\t\tTotal salary given to the teachers is: "<<total_salary_of_teacher<<endl;
				break;
				case 3:
				cout<<"\n\t\t\tTotal salary given to the staff members is: "<<total_salary_of_staff<<endl;
				break;
				case 4:
				cout<<"\n\t\t\tSalary given to principal is: "<<t_s_principal<<endl;
				break;
				case 5:
				cout<<"\n\t\t\tTotal Balance of school is: "<<balance_of_school<<endl;
				break;
				default:
				cout<<"\n\t\t\tWrong choice"<<endl;
				break;
			}
		}
		

		
