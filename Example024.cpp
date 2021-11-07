// Example024.cpp
// Example to use enum command

#include <iostream>


using namespace std;

enum week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };


enum seasons { spring = 34, summer = 4, autumn = 9, winter = 32};


int main()
{

    
    week today;
    seasons s;

    today = Sunday; // Wednesday;
    cout << "Day " << today+1 << endl;

    s = summer;
    cout << "Summer = " << s << endl;

    return 0;

}

