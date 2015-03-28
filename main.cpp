#include "savingsaccount.h"

int main()
{
    QTextStream cout(stdout);
    QList<Transaction*> todaysTransactions;

    SavingsAccount Acc("John Doe", "999");
    Deposit d(2300.00);
    Withdrawal w(20.50);
    Withdrawal wt(15.20);
    BalanceEnquiry b(QDate::currentDate(),QDate::currentDate());
    Deposit dt(470.10);
    Withdrawal wth(100.00);
    BalanceEnquiry bt(QDate(2007,07,12),QDate(2014,01,11));

    Acc.addTransaction(&d);
    Acc.addTransaction(&w);
    Acc.addTransaction(&wt);
    Acc.addTransaction(&b);
    Acc.addTransaction(&dt);
    Acc.addTransaction(&bt);
    Acc.addTransaction(&wth);

    cout << "Savings account details:" << endl;
    cout << Acc.toString() << endl << endl;

    todaysTransactions =  Acc.transactionOnAdate(QDate::currentDate());
    cout << "These are today's transactions:" << endl;
    for(int i=0; i<todaysTransactions.count(); ++i) {
        cout << todaysTransactions[i]->toString() << endl;
    }
    cout << endl;

    cout << "Total transaction cost: R" << Acc.totalTransactionCost() << endl << endl;
    cout << Acc.frequentTransactionType();
    cout << endl;
    return 0;
}
