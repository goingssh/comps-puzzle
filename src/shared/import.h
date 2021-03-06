#ifndef IMPORT_H
#define IMPORT_H
#include <string>
#include "enums.h"
#include "grid.h"

class Import {
    public:
        Import();
        Import(Grid & lattice, std::string filename);
        Import(Grid & lattice, int m, int n);

    private:
        void buildLattice(std::string filename);
        void buildEmptyLattice(int m, int n);
        void importNumberRow(int i, std::string row);
        void importHLineRow(int i, std::string row);
        void importVLineRow(int i, std::string row);

        Grid * lattice_;
        int m_;     /* number of rows */
        int n_;     /* number of columns */
};

#endif
