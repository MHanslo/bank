#ifndef SAVINGSACCOUNT
#define SAVINGSACCOUNT
#include <QString>
#include <QTextStream>
#include <QList>
#include <QDate>
#include <QDateTime>
#include <QDebug>
#include "transaction.h"

class SavingsAccount {
public:
    SavingsAccount(QString name, QString num);
    virtual ~SavingsAccount();
    void addTransaction(Transaction* t);
    double totalTransactionCost() const;
    QString frequentTransactionType() const;
    QList<Transaction*> transactionOnAdate(QDate date) const;
    virtual QString toString() const;
private:
    QString m_CustomerName;
    QString m_AccountNumber;
    QList<Transaction*> m_TransactionList;
};

#endif // SAVINGSACCOUNT

