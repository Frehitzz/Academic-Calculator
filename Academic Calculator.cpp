#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <iomanip>
using namespace std;
void calculate_gwa(){
	gwa:
	system("cls");
	int numsub;
	double grade, totgrade;
	int units, totunits;

cout<<"Enter how many subjects you have: ";
cin>>numsub;
system("cls");
 cout<<"Please input your grade in each sub and unit"<<endl;
 cout<<endl;
for (int i; i<numsub;i++){
	cout<<"Subject "<<i + 1<<": ";
	cin>>grade;
	cout<<"Units "<<i+1<<": ";
	cin>>units;
	cout<<endl;
	
	totgrade += grade * units;
	totunits += units;
}
double gpa = totgrade / totunits;
system("cls");
cout<<"YOUR GPA IS: "<<gpa<<endl;
}
	
	
void calculate_ave(){
	system("cls");
	int numsub;
	double grades, totgrades;
	
cout<<"Enter how many subjects you have: ";
cin>>numsub;
system("cls");
cout<<"Enter grades in eachsub"<<endl;

for(int i;i<numsub;i++){
cout<<"Sub"<<i + 1<<": ";
cin>>grades;
	
totgrades += grades;
}
system("cls");
double ave = totgrades / numsub;
cout<<"your average is: "<<ave;
}	
	


	
int main() {
	system ("cls");
menu:
int menu_input;
cout<<" ---------------------------------------------"<<endl;
cout<<"|          WELCOME TO FRITZ CALCULATOR        |"<<endl;
cout<<"|---------------------------------------------|"<<endl;
cout<<"|MENU:                                        |"<<endl;
cout<<"|      SELECT WHAT DO YOU WANT TO CALCULATE   |"<<endl;
cout<<"|      1. GWA                                 |"<<endl;
cout<<"|      2. AVERAGE                             |"<<endl;
cout<<"|      3. EXIT                                |"<<endl;
cout<<"|---------------------------------------------|"<<endl;
cin>> menu_input;

switch(menu_input){
	
	case 1:
		calculate_gwa();
		break;
	
	case 2:
		calculate_ave();
		
	case 3:
		exit:
		cout<<"thankyou for using byebye";
		exit(EXIT_SUCCESS);
		
	default:
		system("cls");
		cout<<"Invalid output please try again"<<endl;
		goto menu;
}
	
	
	
	return 0;
}
























