#include "balanceenquiry.h"

BalanceEnquiry::BalanceEnquiry(QDate fDate, QDate tDate)
    : Transaction("Balance Enquiry", QDateTime::currentDateTime()) {
    m_FromDate = fDate;
    m_ToDate = tDate;
}

QString BalanceEnquiry::toString() const {
    return QString("From Date: %1, To Date: %2").arg(m_FromDate.toString("yyyy.MM.dd")).arg(m_ToDate.toString("yyyy.MM.dd"));
}

double BalanceEnquiry::computeCost() const {
    return 0.00;
}
