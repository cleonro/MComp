#include "mgameitem.h"

MGameItem::MGameItem()
{

}

MGameItem::~MGameItem()
{

}

QPair<QString, QString> MGameItem::PlayersId()
{
    return players_id_;
}

void MGameItem::SetPlayersId(QPair<QString, QString> players_id)
{
    players_id_ = players_id;
}

QString MGameItem::WinnerId()
{
    return winner_id_;
}

void MGameItem::SetWinnerId(QString winner_id)
{
    winner_id_ = winner_id;
}

QString MGameItem::CategoryId()
{
    return category_id_;
}

void MGameItem::SetCategoryId(QString category_id)
{
    category_id_ = category_id;
}
