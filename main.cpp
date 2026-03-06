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
    cin >> status >> gender >> major;

    // TODO
    if (status == "student") {
        // TODO
        if (gender == "female") {
            // TODO
            if (major == "cs") {
                // TODO
                factor = 3.0;
            } else {
                // TODO
                factor = 1.0;
            }
        } else {
            // TODO
            if (major == "cs") {
                // TODO
                factor = 2.0;
            } else {
                // TODO
                factor = 0.2;
            }
        }
    } else {
        // TODO
        if (major == "cs") {
            // TODO
            factor = 0.5;
        }
    }

    // TODO
    double finalScholarship = scholarship * factor;

    cout << setprecision(2) << fixed;
    // TODO
    cout << "Decided Factor: " << factor << ", Final Scholarship Amount: " << finalScholarship << endl;

    return 0;
}
