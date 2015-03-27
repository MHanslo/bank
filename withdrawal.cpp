#include "withdrawal.h"

double Withdrawal::m_Percentage = 2.1;

Withdrawal::Withdrawal(double amount)
    : Transaction("Withdrawal", QDateTime::currentDateTime()) {
     m_Amount = amount;
}

QString Withdrawal::toString() const {
    return QString("Amount: %1, Percentage: %2 %").arg(m_Amount).arg(m_Percentage);
}

double Withdrawal::computeCost() const {
    return m_Amount*m_Percentage;
}
