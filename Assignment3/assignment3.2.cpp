#include<iostream>
using namespace std;
class tollbooth
{
    private:
        unsigned int t_cars;
        double t_amt;
    public:
        tollbooth()
        {
            this->t_cars=0;
            this->t_amt=0;
        }
        unsigned int payingCar()
        {
            this->t_cars=this->t_cars+1;
            this->t_amt=this->t_amt+0.50;
            return this->t_cars;
        
        }
        unsigned int nopayCar()
        {
            this->t_cars=this->t_cars+1;
            return this->t_cars;
            
        }
        void printOnConsole()
        {
            cout<<"\n************ TOLL PLAZA ***********"<<endl;
            cout<<"Total number of  cars passed by toll = "<<this->t_cars;
            cout<<"\nTotal amount from toll = "<<this->t_amt;
            cout<<"\nNumber of cars who paid the toll = "<<((this->t_amt)/0.50);
            cout<<"\nNumber of cars which did not pay toll  = "<<((this->t_cars)-((this->t_amt)/0.50));cho
            cout<<"\n************ TOLL PLAZA ***********"<<endl;            
        }
};

enum Emenu
{
    EXIT,
    Add_toll,
    Cars_no_toll,
    Everything_About_toll
};

Emenu menu()
{
    int choice;
    cout<<"**********************"<<endl;
    cout<<"0.Exit"<<endl;
    cout<<"1.Add_toll"<<endl;
    cout<<"2.Cars_no_toll"<<endl;
    cout<<"3.Everything_about_toll"<<endl;
    cout<<"Enter your choice = ";
    cin>>choice;
    cout<<"\n**********************"<<endl;
    return Emenu(choice);
}
int main()
{
    Emenu choice ;
    int tot,tot1,tot2;
    tollbooth t;
    while((choice = menu())!=0)
    {
        switch(choice)
        {
            case Add_toll:
                t.payingCar(); 
                break;
            case Cars_no_toll:
                t.nopayCar();
                break;
            case Everything_About_toll:
                t.printOnConsole();
                break;
            default :
                cout<<"Wrong Choice"<<endl;
                break;
        }
    }
    cout<<"Thank You..."<<endl;
}
