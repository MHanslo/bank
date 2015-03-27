#include "deposit.h"

double Deposit::m_Fee = 2.30;

Deposit::Deposit(double amount)
    : Transaction("Deposit", QDateTime::currentDateTime()) {
    m_Amount = amount;
}

QString Deposit::toString() const {
    return QString("Deposit Amount: R%1, Deposit Fee: R%2").arg(m_Amount).arg(m_Fee);
}

double Deposit::computeCost() const {
    return m_Fee;
}
