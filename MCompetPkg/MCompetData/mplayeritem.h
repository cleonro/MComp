#ifndef MPLAYERITEM_H
#define MPLAYERITEM_H

#include "mcompetdata_global.h"
#include "mitem.h"

#include <QString>

class MCOMPETDATASHARED_EXPORT MPlayerItem : public MItem
{
public:
    MPlayerItem();
    ~MPlayerItem();

    QString Name();
    void SetName(QString name);

    QString Id();
    void SetId(QString id);

    QString Description();
    void SetDescription(QString description);

private:
    QString name_;
    QString unique_id_;
    QString description_;

    QString team_id_;
    QString category_id_;
};

#endif // MPLAYERITEM_H
