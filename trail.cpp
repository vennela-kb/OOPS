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

 int mid1[6],mid2[6],ext[6],Result,i;

 int m1t,m2t,et,midavg;

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



 for(i=0;i<6;i++)

        {

                cin>>mid1[i];

        }

 

        for(i=0;i<6;i++)

       {

              cin>>mid2[i];

       }

 

       for(i=0;i<6;i++)

      {

             cin>>ext[i];

      }

}


void class1::output()

{

 cout<<"Student Name: "<<name<<"\t\tStudent Roll No.: "<<rno<<endl;

 cout<<"Year: "<<year<<"\t\tSem: "<<sem<<"\t\tDepartment: "<<dept<<endl;

}


void class2::output()

{



 for(i=0;i<6;i++)

 {

  m1t+=mid1[i];

  m2t+=mid2[i];

  et+=ext[i];

 }

 midavg=(m1t+m2t)/2;

 Result=(midavg+et)/6;

 cout<<"Result: "<<Result<<"%"<<endl;

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

 class3 c3;

 c3.input();

 c3.output();

}


