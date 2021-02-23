/**
* iosApp.cpp
* @author bulbasaur
* @description 
* @created 2021-02-09T23:18:38.084Z+08:00
* @copyright None 
* None
* @last-modified 2021-02-09T23:21:39.946Z+08:00
*/

#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
    ofstream out("app.txt", ios::app);

    if ( !out )
    {
        /* code */
        cerr << "Error open file!" << endl;
        return 0;
    }

    for (int i = 10; i > 0; i--)
    {
        /* code */
        out << i;
    }
    
    out << endl;
    out.close();

    cout << "Success!" << endl;
    
    return 0;
}
