#include<iostream>
#include<string.h>

using namespace std;

class student{
	public :
	int id,mobileno,std;
	char name[100] ;
	char school_name[100];
};
int main()
{
	student s1,s2;
	
	cout<<"enter id =";
	cin>>s1.id;
	
	cout<<"enter name =";
	cin>>s1.name;
	
	cout<<"enter mobileno =";
	cin>>s1.mobileno;
	
	cout<<"enter std =";
	cin>>s1.std;
	
	cout<<"enter school name =";
	cin>>s1.school_name;
	
	cout<<s1.id<<endl<<s1.name<<endl<<s1.mobileno<<endl;
	
	cout<<"enter id =";
	cin>>s1.id;	
	
	cout<<"enter name =";
	cin>>s2.name;
	
	cout<<"enter mobileno =";
	cin>>s2.mobileno;
	
	cout<<"enter std =";
	cin>>s2.std;
	
	cout<<"enter school name =";
	cin>>s2.school_name;
	
	cout<<s2.id<<endl<<s2.name<<endl<<s2.mobileno<<endl;
}
