#ifndef SAVINGSACCOUNT
#define SAVINGSACCOUNT

#include <QString>
#include <QList>
#include <QDate>

class SavingsAccount {
public:
    SavingsAccount(QString name, QString num);
    virtual ~SavingsAccount();
    Transaction * addTransaction();
    double totalTransactionCost();
    QString frequentTransactionType();
    QList<Transaction *> transactionOnAdate(QDate date);
    virtual QString toString();
private:
    QString m_CustomerName;
    QString m_AccountNumber;
    QList m_TransactionList;
};

SavingsAccount::SavingsAccount(QString name, QString num) {
    m_CustomerName = name;
    m_AccountNumber = num;
}

transaction* SavingsAccount::addTransaction() {
    return new Transaction() t;
}

double SavingsAccount::totalTransactionCost() {
    Transaction::computeCost();
}

QString SavingsAccount::frequentTransactionType() {

}

QList<> SavingsAccount::transactionOnAdate(QDate date) {
    return m_TransactionList;
}

QString SavingsAccount::toString() {
    return QString("Full account details output");
}

#endif // SAVINGSACCOUNT

