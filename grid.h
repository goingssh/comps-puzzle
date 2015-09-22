#ifndef GRID_H
#define GRID_H
#include <string>
#include "enums.h"

class Grid {
    public:
        Grid();
        ~Grid();
        void print();

    private:
        void import();
        void importNumberRow(int line, std::string row);
        void importHLineRow(int line, std::string row);
        void importVLineRow(int line, std::string row);

        char formatNumber(int i, int j) const;
        char formatHLine(int i, int j) const;
        char formatVLine(int i, int j) const;

        int m;     // number of rows
        int n;     // number of columns
        Number ** numbers;
        Edge ** hlines;
        Edge ** vlines;
};

#endif
