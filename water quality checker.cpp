#include<iostream>
#include<string>
#include<conio.h>
#include<fstream>
#include<iomanip>
using namespace std;
class water{
	char c;
	int ph;
	public: 
		void quality();
		
};
void water ::quality()
{
	system("color 0C");
	cout<<"water purification"<<endl<<endl;
	cout<<"check its ph value"<<endl<<endl;
	cout<<"after taking ph value we consider TDS value"<<endl<<endl;
	cout<<"level of TDS in water"<<endl<<endl;
	cout<<"less than 300 mg/l == excellent"<<endl<<endl;
	cout<<"300 to 600 mg/l == Good"<<endl<<endl;
	cout<<"600 to 900 mg/l ==fair"<<endl<<endl;
	cout<<"900 to 1200 mg/l == poor"<<endl<<endl;
	cout<<"greater than 1200 mg/l==  unacceptable"<<endl;
	cout<<"\n\n\n\nPRESS ENTER ========";
		getch();
	
	do{
		system("cls");
		system("color 3F");
	int present_reading;
	int previousyear_reading;

	ofstream fp;
	fp.open("purification.doc",ios::app);

	if(fp)
	{
		fp<<"Water Detail follow as"<<endl;
		cout<<"enter the current_reading"<<endl;
		cin>>present_reading;
		cout<<"enter the backyear_reading"<<endl;
		cin>>previousyear_reading;
		cout<<"Enter the pH Value::";
		cin>>ph;
		fp<<"now days TDS reading="<<present_reading<<endl;
		fp<<" previous year TDS reading="<<previousyear_reading<<endl;
		
	}
	else
	cout<<"first take reading in meter="<<endl;
	
	fp.close();
	

  	ofstream fout;
  		fout.open("purification.txt",ios::app);

   	if(present_reading==300||present_reading<300)
   	{
   	
	   cout<<"water in this is purest for all as TDS IS VERY LOW"<<endl;
   	
   	}
   	else 
   	{
   		if(present_reading>600 && present_reading<900)
   		{
   			cout<<"water is drinkable for humans "<<endl;
   	
   		}
   		else
		{
		  
	   		if(present_reading>900 && present_reading<1200)
   			{
   				cout<<"It can be drink but also little harmful or not so much good for health"<<endl;
   	
  			}
  			else if(present_reading>1200)
   			{
 	  			cout<<"noone can drink this water as TDS value is very high"<<endl;
   			}
   		}
	}  	

	if(present_reading > previousyear_reading)
	{
		cout << "previousyear water quality is good " << endl;
		fout<<"previousyear water quality is good "<<endl;
	}
	else{
		cout<<"AT present water quality is good"<<endl;
		fout<<"AT present water quality is good"<<endl;
	}
	fout.close();
	if(ph<=6)
	cout<<endl<<"--------Water is Acidic--------";
	else if(ph==7) cout<<"Water is Nutral";
	else cout<<"Water is Basic";
	
	cout<<endl<<endl<<"TO CONTINUT PRESS y OR ELSE n FOR LEAVE"<<endl;
	cout<<endl<<"press y for nxt sample"<<endl;
	cin>>c;
	}
	while(c=='y' || c=='Y');
	
}
int main()
{ 	 
	cout<<setw(75)<<"#######lets consider about water quality checker#######"<<endl;
	water w;
	w.quality();
	
	return 0;
}
