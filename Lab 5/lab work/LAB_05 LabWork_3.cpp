// Name:salman sohrab
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0730
// Section: A

#include <iostream>
using namespace std;

int main()
{
    int num, i = 1, sum = 0;//variable set karen gay 

    cout << "Enter a positive integer: ";//message dikaya
    cin >> num;//number liya

    while(i <= num)
    {
        sum = sum + i;//total ma jama karoo
        i++;
    }

    cout << "Sum = " << sum << endl;// result dikaya

    return 0;
}


