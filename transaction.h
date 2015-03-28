#ifndef TRANSACTION
#define TRANSACTION
#include <QString>
#include <QTextStream>
#include <QList>
#include <QDate>
#include <QDebug>

class Transaction  {
public:
   Transaction(QString type, QDateTime datetime);
   QString getType() const;
   QString toString() const;
   QDateTime getDateTime() const;
   virtual double computeCost() const = 0;
protected:
   QString m_Type;
   QDateTime m_DateTime;
};

class Deposit : public Transaction {
public:
   Deposit(double amount);
   QString toString() const;
   double computeCost() const;
private:
   double m_Amount;
   static double m_Fee;
};

class Withdrawal : public Transaction {
public:
   Withdrawal(double amount);
   QString toString() const;
   double computeCost() const;
private:
   double m_Amount;
   static double m_Percentage;
};

class BalanceEnquiry : public Transaction {
public:
   BalanceEnquiry(QDate fDate, QDate tDate);
   QString toString() const;
   double computeCost() const;
protected:
   QDate m_FromDate;
   QDate m_ToDate;
};

#endif // TRANSACTION

