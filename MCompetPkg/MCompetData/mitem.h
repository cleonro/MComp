#ifndef MITEM_H
#define MITEM_H

#include "mcompetdata_global.h"
#include <QString>

class MCOMPETDATASHARED_EXPORT MItem
{
public:
    MItem();
    virtual ~MItem();

protected:
    QString Description();
    void SetDescription(QString description);

    QString Id();
    void SetId(QString id);

private:
    QString unique_id_;
    QString description_;

};

#endif // MITEM_H
