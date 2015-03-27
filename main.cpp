#include "savingsaccount.h"

int main()
{
    QTextStream cout(stdout);
    QTextStream cin(stdin);
    SavingsAccount Acc("John Doe", "999");

    Acc.addTransaction();


    return 0;
}
