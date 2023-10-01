#include <iostream>

using namespace std;

class employee
{
protected:
    int id;
    float sal;

public:
    employee()
    {
        this->id = 0;
        this->sal = 0;
    }
    employee(int id, float sal)
    {
        this->id = id;
        this->sal = sal;
    }
    int getid()
    {
        return this->id;
    }
    float getsal()
    {
        return this->sal;
    }
    void setid(int id)
    {
        this->id = id;
    }
    void setsal(float sal)
    {
        this->sal = sal;
    }
    void accept()
    {
        cout << "Enter the id : ";
        cin >> this->id;
        cout << "Enter the sal : ";
        cin >> this->sal;
    }
    void display()
    {
        cout << "id = " << this->id << endl;
        cout << "sal = " << this->sal << endl;
    }
};
class manager : virtual public employee
{
protected:
    float bonus;

    void accept_manager()
    {
        cout << "Enter the bonus : ";
        cin >> this->bonus;
    }
    void display_manager()
    {
        cout << "The bonus is : " << this->bonus << endl;
    }

public:
    manager()
    {
        this->id = 0;
        this->sal = 0;
        this->bonus = 0;
    }
    manager(int id, float sal, float bonus)
    {
        employee::id = id;
        employee::sal = sal;
        this->bonus = bonus;
    }
    float getbonus()
    {
        return this->bonus;
    }
    void setbonus(float bonus)
    {
        this->bonus = bonus;
    }
    void accept()
    {
        employee::accept();
        cout << "Enter the bonus : ";
        cin >> this->bonus;
    }
    void display()
    {
        employee::display();
        cout << "The bonus is :" << this->bonus << endl;
    }
};

class salesman : virtual public employee
{
protected:
    float comm;

    void accept_salesman()
    {
        cout << "Enter the commission";
        cin >> this->comm;
        cout << endl;
    }
    void display_salesman()
    {
        cout << "the commission is = " << this->comm << endl;
    }

public:
    salesman()
    {
        employee::id = 0;
        employee::sal = 0;
        this->comm = comm;
    }
    salesman(int id, float sal, float comm)
    {
        employee::id = id;
        employee::sal = sal;
        this->comm = comm;
    }
    float getcomm()
    {
        return this->comm;
    }
    void setcomm(float comm)
    {
        this->comm = comm;
    }
    void accept()
    {
        employee::accept();
        cout << "Enter the commission: ";
        cin >> this->comm;
        cout << endl;
    }
    void display()
    {
        employee::display();
        cout << "The commission is : " << this->comm << endl;
    }
};
class sales_manager : virtual public salesman, virtual public manager
{
public:
   sales_manager()
   {
    employee::id = 0;
    employee::sal = 0;
    manager::bonus = 0;
    salesman ::comm = 0;
   }
   sales_manager(int id,float sal,float bonus,float comm)
   {
    employee::id = id;
    employee::sal = sal;
    manager::bonus = bonus;
    salesman ::comm = comm ;
   }
   void accept()
   {
    manager::accept();
    salesman::accept();
   }
   void display()
   {
    manager::display();
    salesman::display();
   }

};
int main()
{
    employee e;
    cout<<"Enter the details for the employee : ";
    e.accept();
    e.display();

    manager m;
    cout<<"Enter the details for the manager : ";
    m.accept();
    m.display();

    salesman s;
    cout<<"Enter the details for the salesman : ";
    s.accept();
    s.display();

    sales_manager sm;
    cout<<"Enter the details for the sales_manager : ";
    sm.accept();
    sm.display();
}
