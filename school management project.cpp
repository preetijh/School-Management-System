#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
cout<<"\n\t\t\t\t****************************";	
cout<<"\n\t\t\t\t* SCHOOL MANAGEMENT SYSTEM *";
cout<<"\n\t\t\t\t****************************";
cout<<"\n\n\t\tWelcome\n";
int course, id;
string n;
string name, clas;
cout<<setw(40)<<setfill('#')<<""<<endl;
cout<<"Enter 1 --> For Inserting Student Records"<<endl;
cout<<"Enter 2 --> For Appending Student Records"<<endl;
cout<<"Enter 3 --> For Modifying Student Records"<<endl;
cout<<"Enter 4 --> For Viewing Records"<<endl;
cout<<"Enter 5 --> For Exit"<<endl;
int r;
cout<<setw(40)<<setfill('#');
cout<<""<<endl;
cout<<"Enter Your Choice:";
cin>>r;
switch(r)
{
case 1 :
{
ofstream obj1;
obj1.open("studetails.txt", ios::out);
cout<<setw(40)<<setfill('#')<<""<<endl;
cout<<"Enter Student Name:";
cin>>name;
cout<<"Enter Student Roll No :";
cin>>id;
cout<<"Enter Student Class :";
cin>>clas;
cout<<"Enter Student Course :";
cin>>course;
obj1<<setw(40)<<setfill('#')<<""<<endl<<"Student Detail"<<endl<<endl;
obj1<<"Student Name:"<<name<<endl;
obj1<<"Student Roll No:"<<id<<endl;
obj1<<"Student Class:"<<clas<<endl;
obj1<<"Student Course:"<<course<<endl;
obj1.close();
break;
}
case 2 :
{
ofstream obj2;
obj2.open("studetails.txt", ios::app);
obj2<<setw(40)<<setfill('#')<<""<<endl<<"Updated Records"<<endl<<endl;
cout<<"Enter New Student Name:";
cin>>name;
cout<<"Enter New Roll No:";
cin>>id;
cout<<"Enter New Class :";
cin>>clas;
cout<<"Enter New Course Enrolled:";
cin>>course;
obj2<<"Edited Student Name:"<<name<<endl;
obj2<<"Edited Student Roll No:"<<id<<endl;
obj2<<"Edited Class:"<<clas<<endl;
obj2<<"Edited Course Enrolled:"<<course<<endl;
obj2.close();
break;
}
case 3 :
{
ofstream obj3;
obj3.open("studetails.txt", ios::out);
obj3<<setw(40)<<setfill('#')<<""<<endl<<"Overwritten Data"<<endl;
cout<<"Enter New Student Name:";
cin>>name;
cout<<"Enter Roll No:";
cin>>id;
cout<<"Enter Class:";
cin>>clas;
cout<<"Enter Course Enrolled:";
cin>>course;
obj3<<"\nEnter New Student Name:"<<name;
obj3<<"\nEnter New Roll No:"<<id;
obj3<<"\nEnter New Class:"<<clas;
obj3<<"\nEnter New Course Details:"<<course<<endl;
obj3.close();
break;
}
case 4 :
{
string print;
ifstream abc;
abc.open("studetails.txt", ios::in);
while(getline(abc, print))
{
cout<<print<<endl;
}
abc.close();
}
case 5 :
{
	break;
}
}
}
