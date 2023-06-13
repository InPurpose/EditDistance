//
// Created by Stephen Huang on 6/12/23.
//

#include "printer.h"


void printer::print(vector<vector<int>>& table,int x,int y)
{
    stack<string> s;
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            cout << table[i][j] << " ";
        }
        cout << endl;
    }
}

void printer::stepsPrinter(stack<string> &s)
{
    int counter = 1;
    while(!s.empty())
    {
        cout << counter << ": ";
        cout << s.top() << endl;
        s.pop();
        counter++;
    }
}

void printer::readTable(stack<string> &s,vector<vector<int>>& table,int i,int j,string x,string y)
{
    while(i != 0 && j != 0)
    {
        if(x[i-1] == y[j-1])
        {
            i--;
            j--;
        }
        else
        {
            int preSelect = min({table[i - 1][j], table[i][j - 1], table[i - 1][j - 1]} );

            if(preSelect == table[i - 1][j])
            {
                i--;
                string temp = "Delete \"";
                temp += x[i];
                temp += "\"";
                s.push(temp);
            }
            else
            {
                if(preSelect == table[i][j - 1])
                {
                    j--;
                    string temp = "Insert ";
                    temp += y[j];
                    s.push(temp);
                }
                else
                {
                    if(preSelect == table[i - 1][j - 1])
                    {
                        i--;
                        j--;
                        string temp = "Substitute \"";
                        temp += x[i];
                        temp += "\" into \"";
                        temp += y[j];
                        temp += "\"";
                        s.push(temp);
                    }

                }
            }
        }

    }
//    cout << endl;
}