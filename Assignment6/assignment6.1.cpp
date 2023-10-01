#include <iostream>

using namespace std;

class Date
{
    int day;
    int month;
    int year;

public:
    Date()
    {
        this->day = 0;
        this->month = 0;
        this->year = 0;
    }
    Date(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }
    int getday()
    {
        return this->day;
    }
    int getmonth()
    {
        return this->month;
    }
    int getyear()
    {
        return this->year;
    }
    void setday(int day)
    {
        this->day = day;
    }
    void setmonth(int month)
    {
        this->month = month;
    }
    void setyear(int year)
    {
        this->year = year;
    }
    void displaydate()
    {
        cout << "Date is :" << this->day << "/" << this->month << "/" << this->year << endl;
    }
    void acceptdate()
    {
        cout << "Enter the day = " << endl;
        cin >> this->day;

        cout << "Enter the month = " << endl;
        cin >> this->month;

        cout << "Enter the year =" << endl;
        cin >> this->year;
    }
    bool is_leap_year(int year)
    {
        if ((year % 100 != 0 && year % 4 == 0) || year % 400 == 0)
        {
            cout << year << " is a leap year " << endl;
            return true;
        }
        else
        {
            cout << year << " is not a leap year " << endl;
            return false;
        }
    }
};
class employee
{
    int id;
    float salary;
    string dept;
    Date doj;

public:
    employee()
    {
        this->id = 0;
        this->salary = 0;
        this->dept = " ";
    }
    employee(int id, float salary, string dept, int day, int month, int year) : doj(day, month, year)
    {
        this->id = id;
        this->salary = salary;
        this->dept = dept;
    }
    int getid()
    {
        return this->id;
    }
    float getsalary()
    {
        return this->salary;
    }
    string getdept()
    {
        return this->dept;
    }
    Date getjoiningdate()
    {
        return this->doj;
    }
    void setjoiningdate(Date doj)
    {
        this->doj = doj;
    }
    
    void setid(int id)
    {
        this->id = id;
    }
    void setsalary(float salary)
    {
        this->salary = salary;
    }
    void setdept(string dept)
    {
        this->dept = dept;
    }
    void displayemployee()
    {
        cout << " id = " << this->id << endl;
        cout << " salary = " << this->salary << endl;
        cout << " dept = " << this->dept << endl;
        this->doj.displaydate();
    }
    void acceptemployee()
    {
        cout << "Enter the id =";
        cin >> this->id;
        cout << "Enter the salary =";
        cin >> this->salary;
        cout << "Enter the dept =";
        cin >> this->dept;
        cout << "Enter the doj =";
        this->doj.acceptdate();
    }
};

class person
{
    string name;
    string address;
    Date dob;

public:
    person()
    {
        this->name = "";
        this->address = "";
    }
    person(string name, string address, int day, int month, int year) : dob(day, month, year)
    {
      this->name= name;
      this->address = address;
        
    }
    string getname()
    {
        return this->name;
    }
    string getaddress()
    {
        return this->address;
    }
    Date getdob()
    {
        return this->dob;
    }
    void setdob(Date dob)
    {
        this->dob = dob;
    }
    void setname(string name)
    {
        this->name = name;
    }
    void setaddress(string address)
    {
        this->address = address;

    }
    void displayperson()
    {
        cout<<"name = "<<this->name<<endl;
        cout<<"address = "<<this->address<<endl;
        this->dob.displaydate();
    }
    void acceptperson()
    {
        cout<<"Enter the name =";
        cin>>this->name;
        cout<<"Enter the address =";
        cin>>this->address;
        cout<<"Enter the dob =";
        this->dob.acceptdate();
    }
};
int main()
{
    employee e1;
    Date d1;
    person p1;

    e1.acceptemployee();
    e1.displayemployee();
    e1.setsalary(1200);
    
    cout<<e1.getsalary()<<endl;
    
    


    d1.acceptdate();
    d1.displaydate();
    
   p1.acceptperson() ;

   p1.displayperson();

   p1.setaddress("SAN FRANCISCO") ;


   cout << p1.getaddress() << endl ;

   

}
