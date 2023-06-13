//
// Created by Stephen Huang on 6/12/23.
//

#ifndef EDITDISTANCE_DISTANCECAL_H
#define EDITDISTANCE_DISTANCECAL_H

#include "printer.h"

class distanceCal {
public:
    distanceCal();
    int EditDistance(string x, string y);
    void editHelper(string,string,vector<vector<int>>&);
};


#endif //EDITDISTANCE_DISTANCECAL_H
