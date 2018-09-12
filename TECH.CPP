#include<iostream.h>
#include<stdio.h>
#include<conio.h>
class TOA
{
char p_name[20];
int rental;
int freenet;
int freecalls;
int freesms;
int callcharges;
int smscharges;
int datacharges;
int roamingcharges;
public:
void addplan()
{
clrscr();
cout<<"\nEnter Plan Name:";
cin>>p_name;
cout<<"\nEnter Monthly Rental:";
cin>>rental;
cout<<"\nFree Internet:";
cin>>freenet;
cout<<"\nFree Calls:";
cin>>freecalls;
cout<<"\nFree SMS:";
cin>>freesms;
cout<<"\nCall Charges:";
cin>>callcharges;
cout<<"\nSMS Charges:";
cin>>smscharges;
cout<<"\nData Charges:";
cin>>datacharges;
cout<<"\nRoaming Charges:";
cin>>roamingcharges;
}
void showplan()
{
clrscr();
cout<<"\nEnter Plan Name:";
cout<<p_name;
cout<<"\nEnter Monthly Rental:";
cout<<rental;
cout<<"\nFree Internet:";
cout<<freenet;
cout<<"\nFree Calls:";
cout<<freecalls;
cout<<"\nFree SMS:";
cout<<freesms;
cout<<"\nCall Charges:";
cout<<callcharges;
cout<<"\nSMS Charges:";
cout<<smscharges;
cout<<"\nData Charges:";
cout<<datacharges;
cout<<"\nRoaming Charges:";
cout<<roamingcharges;
}

};
void main()
{
clrscr();
TOA t[3];
int i,choice,n;
for(i=0;i<3;++i)
{
t[i].addplan();
}
int monthlyrental,internet,sms,calls;
cout<<"Enter the required data";
cout<<"\nEnter Monthly Rental:";
cin>>monthlyrental;
cout<<"\nEnter Internet:";
cin>>internet;
cout<<"\nEnter SMS:";
cin>>sms;
cout<<"\nEnter Calls:";
cin>>calls;
int j=0;
char c;
while(j==0)
{
clrscr();
cout<<"\nEnter 1 for Plan 1";
cout<<"\nEnter 2 for Plan 2";
cout<<"\nEnter 3 for Plan 3";
cout<<"\nEnter Choice:";
cin>>choice;
switch(choice)
{
case 1:if(monthlyrental<500)
	{
	t[choice-1].showplan();
	}
	else
	{
	cout<<"Not Applicable";
	}
	break;
case 2:if(monthlyrental>=500 && monthlyrental<1000)
	{
	t[choice-1].showplan();
	}
	else
	{
	cout<<"Not Applicable";
	}
	break;

case 3: if(monthlyrental>1000)
	{
	t[choice-1].showplan();
	}
	else
	{
	cout<<"Not Applicable";
	}
	break;
default:cout<<"Invalid Choice";
}
cout<<"\nDo you wish to continue:";
cin>>c;
if(c=='n'||c=='N')
{
j=1;
}
else
{
j=0;
}
}

}