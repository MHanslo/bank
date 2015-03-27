#ifndef BALANCEENQUIRY
#define BALANCEENQUIRY
#include "transaction.h"

class BalanceEnquiry : public Transaction {
public:
   BalanceEnquiry(QDate fDate, QDate tDate);
   QString toString() const;
   double computeCost() const;
protected:
   QDate m_FromDate;
   QDate m_ToDate;
};
#endif // BALANCEENQUIRY

