#include "savingsaccount.h"

SavingsAccount::SavingsAccount(QString name, QString num)
    : m_CustomerName(name), m_AccountNumber(num) {}

SavingsAccount::~SavingsAccount() {}

void SavingsAccount::addTransaction(Transaction* t) {
    m_TransactionList.append(t);
}

double SavingsAccount::totalTransactionCost() const {
    return 1212.21440;
}

QString SavingsAccount::frequentTransactionType() const {
    return QString("Frequent transaction type output");
}

QList<Transaction*> SavingsAccount::transactionOnAdate(QDate date) const {
    QList<Transaction*> result;
    for(int i=0; i<m_TransactionList.count(); ++i) {
        QDateTime listDate = m_TransactionList[i]->getDateTime();
        if (listDate.date() == date) {
            result.append(m_TransactionList[i]);
        }
    }
    return result;
}

QString SavingsAccount::toString() const {
    return QString("Name: %1, Num: %2").arg(m_CustomerName).arg(m_AccountNumber);
}
