#include "savingsaccount.h"

SavingsAccount::SavingsAccount(QString name, QString num)
    : m_CustomerName(name), m_AccountNumber(num) {}

SavingsAccount::~SavingsAccount() {}

void SavingsAccount::addTransaction(Transaction* t) {
    m_TransactionList.append(t);
}

double SavingsAccount::totalTransactionCost() const {
    double result = 0.0;
    for(int i=0; i<m_TransactionList.count(); ++i) {
        double Tcost = m_TransactionList[i]->computeCost();
        result = result + Tcost;
    }
    return result;
}

QString SavingsAccount::frequentTransactionType() const {
    int deposit = 0, withdraw = 0, balance = 0;
    for(int i=0; i<m_TransactionList.count(); ++i) {
       if (m_TransactionList[i]->getType() == "Deposit") {
           deposit++;
       } else if (m_TransactionList[i]->getType() == "Withdrawal") {
           withdraw++;
       } else if (m_TransactionList[i]->getType() == "Balance Enquiry") {
           balance++;
       }
    }
    if ((deposit > withdraw) && (deposit > balance)) {
        return QString("Deposit is the most common transaction");
    } else if ((withdraw > deposit) && (withdraw > balance)) {
        return QString("Withdrawal is the most common transaction");
    } else if ((balance > deposit) && (balance > withdraw)) {
        return QString("Balance enquiry is the most common transaction");
    } else {
        return QString("You have equal amounts of one to three types of transactions");
    }
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
    return QString("Name: %1, Account Number: %2").arg(m_CustomerName).arg(m_AccountNumber);
}
