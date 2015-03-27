#include "transaction.h"

Transaction::Transaction(QString type, QDateTime datetime)
    : m_Type(type), m_DateTime(datetime) {}

QString Transaction::getType() const {
    return QString(m_Type);
}

QString Transaction::toString() const {
    return QString("Type: %1, Date: %2").arg(m_Type).arg(m_DateTime.toString());
}

QDateTime Transaction::getDateTime() const {
    return m_DateTime;
}


