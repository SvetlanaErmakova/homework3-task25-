#include "header.hpp"
#include "Autotest.hpp"

int main()
{
    if (Autotest() != 1)
    {
        cout << "Error! Tests not passed!\n";
        return 0;
    }

    int a1, a2=-1, flag = 1, num;
    string str;
    try
    {
        cout << "Do you want to create an empty queue?(1-yes, 0-no) ";
        cin >> a1;
        if (a1 == 0)
            return 0;

        list l;
        cout << "\n 0-End program\n 1-Add str in end\n 2-Get lenght first str\n 3-Copy first str\n 4-Delete start of queue\n 5-Numder of str in queue\n 6-Delete queue\n 7-Time of first str\n 8-print list\n";

        while (flag == 1)
        {
            cout << "Command number is: ";
            cin >> a2;

            if (a2 == 0)
                flag = 0;
            else if (a2 == 1)
            {
                cout << " Enter str: ";
                cin >> str;
                l.push_back(str);
            }
            else if (a2 == 2)
            {
                cout << "Lenght first str is " << l[0]->val.length() << '\n';
            }
            else if (a2 == 3)
            {
                cout << "Into which line to copy the first: ";
                cin >> num;
                l.Copy_first(num);
            }
            else if (a2 == 4)
                l.remove_first();
            else if (a2 == 5)
            {
                cout << "Numder of elts in queue: ";
                cout << l.size << '\n';
            }
            else if (a2 == 6)
                l.delete_queue();
            else if (a2 == 7)
                cout << "Time of first str is "<<l[0]->time<<'\n';
            else if(a2==8)
                l.print();
            else
                cout << "You entered the wrong command number\n";
        }
    }
    catch (...) { cout << "\nError" << endl; }
    return 0;
}
