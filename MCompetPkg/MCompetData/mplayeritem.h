#ifndef MPLAYERITEM_H
#define MPLAYERITEM_H

#include "mcompetdata_global.h"
#include "mitem.h"

class MCOMPETDATASHARED_EXPORT MPlayerItem : public MItem
{
public:
    MPlayerItem();
    ~MPlayerItem();

    QString Name();
    void SetName(QString name);

private:
    QString name_;

    QString team_id_;
    QString category_id_;
};

#endif // MPLAYERITEM_H
