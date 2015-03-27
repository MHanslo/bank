#include "savingsaccount.h"
#include "deposit.h"
#include "withdrawal.h"
#include "balanceenquiry.h"

int main()
{
    QTextStream cout(stdout);
    SavingsAccount Acc("John Doe", "999");
    Deposit d(2300.00);
    Withdrawal w(20.50);
    Acc.addTransaction(&w);
    Acc.addTransaction(&d);
    cout << endl;
    cout << Acc.totalTransactionCost();
    cout << endl;
    return 0;
}
