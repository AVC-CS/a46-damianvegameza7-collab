#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string status, gender, major;
    double factor = 0.1;
    double scholarship = 10000.0;

    // TODO
    cout << "Enter status: " << endl;
    cin >> status;
    cout << "Enter gender: " << endl;
    cin >> gender;
    cout << "Enter major: " << endl;
    cin >> major;
    // TODO
    if (status == "student") {
        factor = 0.2;
        if(gender == "female") {
            factor = 1.0;
            if(major =="cs")
            factor = 3.0;
        } else {
            if(major =="cs")
            factor = 2.0;
        }
    } else {
        if(major =="cs")
        factor = 0.5;
    }
        double finalScholarship = scholarship * factor;


    cout << setprecision(2) << fixed;
    cout << "Scholarship: " << finalScholarship << endl;

    return 0;
}
