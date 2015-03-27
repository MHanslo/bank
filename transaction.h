#ifndef TRANSACTION
#define TRANSACTION
#include <QString>
#include <QTextStream>
#include <QList>
#include <QDate>

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

#endif // TRANSACTION

