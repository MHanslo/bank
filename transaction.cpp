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

double Deposit::m_Fee = 2.30;

Deposit::Deposit(double amount)
    : Transaction("Deposit", QDateTime::currentDateTime()), m_Amount(amount)  {}

QString Deposit::toString() const {
    return QString("Deposit Amount: R%1, Deposit Fee: R%2").arg(m_Amount).arg(m_Fee);
}

double Deposit::computeCost() const {
    return m_Fee;
}

double Withdrawal::m_Percentage = 2.1;

Withdrawal::Withdrawal(double amount)
    : Transaction("Withdrawal", QDateTime::currentDateTime()), m_Amount(amount) {}

QString Withdrawal::toString() const {
    return QString("Withdraw Amount: R%1, Cost Percentage: %2%").arg(m_Amount).arg(m_Percentage);
}

double Withdrawal::computeCost() const {
    return m_Amount*m_Percentage;
}

BalanceEnquiry::BalanceEnquiry(QDate fDate, QDate tDate)
    : Transaction("Balance Enquiry", QDateTime::currentDateTime()), m_FromDate(fDate), m_ToDate(tDate) {}

QString BalanceEnquiry::toString() const {
    return QString("From Date: %1, To Date: %2").arg(m_FromDate.toString("yyyy.MM.dd")).arg(m_ToDate.toString("yyyy.MM.dd"));
}

double BalanceEnquiry::computeCost() const {
    return 0.00;
}
