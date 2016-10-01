#include "head.h"


int main() {
    Sale sale;
    sale.list(5, 23.5);
    sale.list(12, 24.56);
    sale.list(100, 21.5);
    sale.average();
    sale.display();

    return 0;
}