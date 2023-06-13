#include "distanceCal.h"


int main() {

    distanceCal c;
    string x,y;
    cout << "Please enter the words:" << endl;
    cin >> x
        >> y;
    int counter = c.EditDistance(x,y);
    cout << "======================================================\n";
    cout << "It takes " << counter << " steps to transform \""
         << x << "\" into \"" << y << "\"";


    return 0;
}

