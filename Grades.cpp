#include <iostream>

using namespace std;

int main() {
    int mark;
    cout << "What is your mark? ";
    cin >> mark;
    if(mark >= 0 && mark <= 49)
    {
        cout << "You have a grade F.";
    }
    else if(mark >= 50 && mark <= 59)
    {
        cout << "You have a grade D.";
    }
    else if(mark >= 60 && mark <= 69)
    {
        cout << "You have a grade C.";
    }
    else if(mark >= 70 && mark <= 79)
    {
        cout << "You have a grade B.";
    }
    else if(mark >= 80 && mark <= 89)
    {
        cout << "You have a grade A.";
    }
    else if(mark >= 90 && mark <= 100)
    {
        cout << "You have a grade A++.";
    }

    return 0;
}
