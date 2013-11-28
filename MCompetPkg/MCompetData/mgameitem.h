#ifndef MGAMEITEM_H
#define MGAMEITEM_H

#include "mcompetdata_global.h"
#include "mitem.h"
#include <QPair>

class MCOMPETDATASHARED_EXPORT MGameItem : public MItem
{
public:
    MGameItem();
    ~MGameItem();

    QPair<QString, QString> PlayersId();
    void SetPlayersId(QPair<QString, QString> players_id);

    QString WinnerId();
    void SetWinnerId(QString winner_id);

    QString CategoryId();
    void SetCategoryId(QString category_id);

private:
    QPair<QString, QString> players_id_;
    QString winner_id_;
    QString category_id_;
};

#endif // MGAMEITEM_H
