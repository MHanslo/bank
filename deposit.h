#ifndef DEPOSIT
#define DEPOSIT
#include "transaction.h"

class Deposit : public Transaction {
public:
   Deposit(double amount);
   QString toString() const;
   double computeCost() const;
private:
   double m_Amount;
   static double m_Fee;
};

#endif // DEPOSIT

