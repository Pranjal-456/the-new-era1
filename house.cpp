#include<iostream>
#include<string.h>

using namespace std;

class house{
	public :
	int house_no,rooms;
	char soc[100];
	
};
int main()
{
	house h1;
	
	cout<<"enter house no =";
	cin>>h1.house_no;
	
	cout<<"enter rooms =";
	cin>>h1.rooms;
	
	cout<<"enter soc =";
	cin>>h1.soc;
	
	cout<<h1.house_no<<endl<<h1.rooms<<endl;
}
	
	
	
