#include<iostream>
using namespace std;
class Date
{
    private:
            int dd;
            int mm;
            int yy;
    public:
        void initDate()
        {
            this->dd=0;
            this->mm=0;
            this->yy=0;
        }
        void acceptDateFromConsole()
        {
            cout<<"Enter day:";
            cin>>this->dd;
            cout<<"Enter month:";
            cin>>this->mm;
            cout<<"Enter year:";
            cin>>this->yy;
        }
        void printDateOnConsole()
        {
            cout<<"Date is "<<this->dd<<"/"<<this->mm<<"/"<<this->yy<<endl;
        }
        bool isLeapYear()
        {
            if((this->yy%4==0 && this->yy%100!=0)||(this->yy%4==0 && this->yy%400==0))
                return true; 
            else
                return false;
        }
};
int main()
{
    int choice;
    Date d1;
    do
    {
        cout<<"1.Print Default Date\n2.Print Date\n3.Accept Date\n4.See if Leap year\n0.Exit\n";
        cout<<"Enter your choice:\n";
        cin>>choice;
        switch(choice)
        {
            case 1:
                    d1.initDate();
                    break;
            case 2:
                    d1.printDateOnConsole();
                    break;
            case 3:
                    d1.acceptDateFromConsole();
                    break;
            case 4:
                    if(d1.isLeapYear())
                        printf("Yes, It is a Leap year\n");
                    else
                        printf("No, Not a leap year\n");
        }
    } while (choice!=0);
    return 0;    

}