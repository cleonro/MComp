#ifndef MGROUPITEM_H
#define MGROUPITEM_H

#include "mcompetdata_global.h"
#include "mitem.h"

class MCOMPETDATASHARED_EXPORT MGroupItem : public MItem
{
public:
    MGroupItem();
    ~MGroupItem();

    QString TeamName();
    void SetTeamName(QString team_name);

private:
    QString team_name_;

};

#endif // MGROUPITEM_H
