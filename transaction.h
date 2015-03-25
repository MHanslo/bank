#ifndef TRANSACTION
#define TRANSACTION
#include <QString>
#include <QList>
#include <QDate>
#include "savingsaccount.h"

class Transaction {
public:
   Transaction(QString type, QDateTime datetime);
   QString getType();
   QString toString();
   QDateTime getDateTime();
   double computeCost();
protected:
   QString m_Type;
   QDateTime m_DateTime;
};

Transaction::Transaction(QString type, QDateTime datetime) {
    m_Type = type;
    m_DateTime = datetime;
}

QString Transaction::getType() {
    return QString("type");
}

QString Transaction::toString() {
    return QString("Transaction all data");
}

QDateTime Transaction::getDateTime() {
    return m_DateTime;
}

double Transaction::computeCost() {
    return 1.150;
}

#endif // TRANSACTION

