#include <iostream>
using namespace std;
int main()
{
    int em, car = 0, bike = 0, truck = 0;
    cout << "\t\tC A R  P A R K I N G\n\n" // Title of program
         << endl;

    while (1)
    { // Getting operation to perform
        cout << "Press 1 to add Car\n";
        cout << "Press 2 to add Bike\n";
        cout << "Press 3 to add Truck\n";
        cout << "Press 4 to Show records\n";
        cout << "Press 5 to Clear records\n";
        cout << "Press 6 to exit\n\n";
        cout << "What do you want to do:";
        cin >> em;
        // Adding element starts
        if (em == 1)
        {
            car++;
            cout << "---->Car added" << endl;
            cout << "-------------------\n";
        }
        else if (em == 2)
        {
            bike++;
            cout << "---->bike added" << endl;
            cout << "-------------------\n";
        }
        else if (em == 3)
        {
            truck++;
            cout << "---->truck added" << endl;
            cout << "-------------------\n";
        }
        // Adding element ends

        // Managing Records
        else if (em == 4)
        {
            cout << "-----------------" << endl;
            cout << "| No of Cars:  " << car << " |" << endl;
            cout << "| No of Bikes: " << bike << " |" << endl;
            cout << "| No of Trucks:" << truck << " |" << endl;
            cout << "-----------------\n";
        }
        else if (em == 5)
        {
            car = bike = truck = 0;
            cout << "All records deleted!\n";
            cout << "-------------------\n";
        }
        // Record managment ends

        // exiting the program
        else if (em == 6)
        {
            exit(0);
        }
        // Avoiding any other value
        else
        {
            cout << "Enter a valid choice\n\n";
        }
    }
    return 0;
}