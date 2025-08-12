#include <iostream>
#include <fstream>

using namespace std;

class shopping
{
private:
    int pcode;
    float price;
    float dis;
    string pname;

public:
    void menu();
    void administrator();
    void buyer();
    void add();
    void edit();
    void rem();
    void list();
    void receipt();
};

void shopping :: menu()
{
    m:
    int choice;
    string email;
    string password;


    cout<< "\t\t\t\t_____________________________________\n";
    cout<< "\t\t\t\t                                     \n";
    cout<< "\t\t\t\t        Supermarket Main Menu        \n";
    cout<< "\t\t\t\t                                     \n";
    cout<< "\t\t\t\t_____________________________________\n";
    cout<< "\t\t\t\t                                     \n";
    cout<< "\t\t\t\t|  1) Administrator  |\n";
    cout<< "\t\t\t\t|                    |\n";
    cout<< "\t\t\t\t|  2) Buyer          |\n";
    cout<< "\t\t\t\t|                    |\n";
    cout<< "\t\t\t\t|  3) Exit           |\n";
    cout<< "\n\t\t\t Please Select..!";
    cin>>choice;

    switch(choice)
    {
        case 1:
            cout<< "\t\t\t Please Login \n";
            cout<< "\t\t\t Enter Email   \n";
            cin>> email;
            cout<< "\t\t\t Password        \n";
            cin>> password;

            if(email="wealth@gmail.com" && password="wealth@123")
            {
                administrator();
            }
            else
            {
                cout<<"Invalid email/password";
            }

            break;

        case 2:
            {
                buyer();
            }

        case 3:
            {
                exit(0);
            }

        default :
            {
                cout<< "Please Select The Given Options";
            }
    }
goto m;
}

void shopping :: administrator()
{
    m:
    int choice;
    cout<< "\n\n\n\t\t\t Administrator Menu";
    cout<< "\n\t\t\t|____1) Add the Product____|";
    cout<< "\n\t\t\t|                          |";
    cout<< "\n\t\t\t|____2) Modify the Product_|";
    cout<< "\n\t\t\t|                          |";
    cout<< "\n\t\t\t|____3) Delete the Product_|";
    cout<< "\n\t\t\t|                          |";
    cout<< "\n\t\t\t|____4) Back to main menu__|";

    cout<< "Please Enter Your Choice";
    cin>>choice;

    switch(choice)
    {
    case 1:
        add();
        break;


    case 2:
        edit()
        break;

    case 3:
        rem();
        break;

    case 4:
        menu();
        break;

    default :
        cout<< "Invalid Choice";
    }
goto m;
}

void shopping :: buyer()
{
    m:
    int choice;
    cout<< "\t\t\t Buyer \n";
    cout<< "\t\t\t _________________\n";
    cout<< "\t\t\t                  \n";
    cout<< "\t\t\t 1) Buy Product   \n";
    cout<< "\t\t\t                  \n";
    cout<< "\t\t\t 2) Go Back       \n";
    cout<< "\t\t\t Enter Your Choice : \n";

    cin>>choice;

    switch(choice)
    {
    case 1:
        receipt();
        break;

    case 2:
        menu();
        break;

    default :
        cout>> "Invalid Choice";
    }

    goto m;
}

void shopping :: add()
{
    m:
    fstream data;
    int c;
    int token = 0;
    float p;
    float d;
    string n;

    cout<< "\n\n\t\t\t Add New Product";
    cout<< "\n\n\t Product code of the Product";
    cin>> pcode;
    cout<< "\n\t\t Name of the Product ";
    cin>> pname;
    cout<< "\n\n\t Price of the Product";
    cin>> price;
    cout<< "\n\n\t Discount of the Product";
    cin>> dis;

    data.open("database.txt", ios::in);

    if(!data)
    {
        data.open("database.txt", ios::app|ios::out);
        data<< " " << pcode << " " << pname << " " << price << " " << dis << "\n";
        data.close();
    }
    else{
        data >> c >> n >> p >> d;

        while(!data.eof())
        {
            if(c == pcode)
            {
                token++;
            }

            data >> c >> n >> p >> d;
        }

        data.close();

        if(token == 1)
            goto m;
        else
        {
            data.open("database.txt", ios::app|ios::out);
            data<< " " << pcode << " " << pname << " " << price << " " << dis << "\n";
            data.close();
        }
    }

    cout<< "\n\n\t\t Record Inserted !";
}
