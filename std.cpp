#include<iostream>
using namespace std;
class class1
{
    private:
    char name[26],dept[5];
    int rno,year,sem;
    public:
    void input();
    void output();
   };
class class2
{
 private:
 int co,os,oslab,oops,oopslab,toc,soc,m3,m31,m32,co1,os1,oslab1,oops1,oopslab1,toc1,soc1,co2,os2,oslab2,oops2,oopslab2,toc2,soc2,Result,i;
 int mid1,mid2,external,midavg;
 public:
 void input();
 void output();
 };
void class1::input()
{
 cout<<"Enter Student name: ";
 cin>>name;
 cout<<"Enter Roll No.: ";
 cin>>rno;
 cout<<"Enter Year: ";
 cin>>year;
 cout<<"Enter Sem: ";
 cin>>sem;
 cout<<"Enter Department: ";
 cin>>dept; 
}
void class2::input()
{
cout<<"Enter marks for mid 1: "<<endl;
cout<<"OS:";
cin>>os1;
cout<<"OS LAB:";
cin>>oslab1;
cout<<"SOC:";
cin>>soc1;
cout<<"OOPS:";
cin>>oops1;
cout<<"OOPS LAB:";
cin>>oopslab1;
cout<<"TOC:";
cin>>toc1;
cout<<"CO:";
cin>>co1;
cout<<"M3:";
cin>>m31;

cout<<"Enter marks for MID 2: "<<endl;
cout<<"OS:";
cin>>os2;
cout<<"OS LAB:";
cin>>oslab2;
cout<<"SOC:";
cin>>soc2;
cout<<"OOPS:";
cin>>oops2;
cout<<"OOPS LAB:";
cin>>oopslab2;
cout<<"TOC:";
cin>>toc2;
cout<<"CO:";
cin>>co2;
cout<<"M3:";
cin>>m32;

cout<<"Enter marks for EXTERNAL: "<<endl;
cout<<"OS:";
cin>>os;
cout<<"OS LAB:";
cin>>oslab;
cout<<"SOC:";
cin>>soc;
cout<<"OOPS:";
cin>>oops;
cout<<"OOPS LAB:";
cin>>oopslab;
cout<<"TOC:";
cin>>toc;
cout<<"CO:";
cin>>co;
cout<<"M3:";
cin>>m3;
}


void class1::output()
{
 cout<<name<<"\t"<<rno<<"\t"<<dept<<"\t"<<year<<"\t"<<sem;
}

void class2::output()
{
mid1=(co1+toc1+oops1+oopslab1+m31+os1+oslab1+soc1)/8;
mid2=(co2+toc2+oops2+oopslab2+m32+os2+oslab2+soc2)/8;
midavg=(mid1+mid2)/2;
external=(co+toc+oops+oopslab+m3+os+oslab+soc)/8;
 cout<<co<<"\t"<<toc<<"\t"<<oops<<"\t"<<oopslab<<"\t"<<m3<<"\t"<<os<<"\t"<<oslab<<"\t"<<soc<<"\t"<<mid1<<"\t"<<mid2<<"\t"<<midavg<<"\t"<<external<<endl;
}


class class3:public class1,public class2
{
	 public:
	 	void input()
	 	{
	 		 class1::input();
	 		   class2::input();
		 }
		 void output()
		 {
		 	 class1::output();
		 	  class2::output();
		 }
		 
};

int main()
{
 
 class3 c1,c2,c3,c4,c5;
 c1.input();
 c2.input();
 c3.input();
 c4.input();
 c5.input();
 cout<<"Student Name: \tStudent Roll No.: \tDepartment: \tYear: \tSem: \tCO: \tTOC: \tOOPS: \tOOPS LAB: \tMATH 3: \tOS: \tOS LAB: \tSOC: \tMID1: \tMID 2: \tMID AVG: \tEXTERNAL: "<<endl;
 c1.output();
 c2.output();
 c3.output();
 c4.output();
 c5.output();
}


