#ifndef MTOURNAMENTCATEGORYITEM_H
#define MTOURNAMENTCATEGORYITEM_H

#include "mitem.h"

class MTournamentCategoryItem : public MItem
{
public:
    MTournamentCategoryItem();
    ~MTournamentCategoryItem();

private:
    QString category_id_;
    QVector<QString> players_id_;
};

#endif // MTOURNAMENTCATEGORYITEM_H
