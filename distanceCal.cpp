//
// Created by Stephen Huang on 6/12/23.
//

#include "distanceCal.h"


int distanceCal::EditDistance(string x, string y)
{
    vector< vector<int> > table(x.size() + 1,vector<int>(y.size() + 1, 0));
    stack<string> s;


    for (int i = 0; i < x.size() + 1; ++i)
        table[i][0] = i;

    for (int i = 0; i < y.size() + 1; ++i)
        table[0][i] = i;


    editHelper(x,y,table);

//    printer::print(table,x.size()+1,y.size()+1);

    printer::readTable(s,table,x.size(),y.size(),x,y);
    printer::stepsPrinter(s);

    return table[x.size()][y.size()];
}

void distanceCal::editHelper(string x, string y,vector< vector<int> >& table)
{
    for (int i = 1; i < x.size()+1; ++i) {
        for (int j = 1; j < y.size()+1; ++j) {
            if(x[i-1] == y[j-1])
                table[i][j] = table[i-1][j-1];
            else
                table[i][j] = min( { table[i-1][j],table[i][j-1],table[i-1][j-1] } )+1;
        }
    }
}

distanceCal::distanceCal() {
    printer p;
}

