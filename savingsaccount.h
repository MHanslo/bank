#ifndef SAVINGSACCOUNT
#define SAVINGSACCOUNT
#include "transaction.h"

#include <QString>
#include <QList>
#include <QDate>

class SavingsAccount {
public:
    SavingsAccount(QString name, QString num);
    virtual ~SavingsAccount();
    void addTransaction(Transaction* t);
    double totalTransactionCost();
    QString frequentTransactionType();
    QList<Transaction*> transactionOnAdate(QDate date);
    virtual QString toString();
private:
    QString m_CustomerName;
    QString m_AccountNumber;
    QList<Transaction*> m_TransactionList;
};

SavingsAccount::SavingsAccount(QString name, QString num) {
    m_CustomerName = name;
    m_AccountNumber = num;
}

void SavingsAccount::addTransaction(Transaction* t) {
    m_TransactionList.append(t);
}

double SavingsAccount::totalTransactionCost() {
    Transaction::computeCost();
}

QString SavingsAccount::frequentTransactionType() {

}

QList<Transaction *> SavingsAccount::transactionOnAdate(QDate date) {
    return m_TransactionList;
}

QString SavingsAccount::toString() {
    return QString("Full account details output");
}

#endif // SAVINGSACCOUNT

