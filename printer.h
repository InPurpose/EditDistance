//
// Created by Stephen Huang on 6/12/23.
//

#ifndef EDITDISTANCE_PRINTER_H
#define EDITDISTANCE_PRINTER_H
#include <stack>
#include <iostream>

using namespace std;


class printer {
public:
    static void stepsPrinter(stack<string> &s);
    static void print(vector< vector<int> >& table,int x,int y);
    static void readTable(stack<string> &s,vector< vector<int> >& table,int i,int j,string x,string y);
};


#endif //EDITDISTANCE_PRINTER_H
