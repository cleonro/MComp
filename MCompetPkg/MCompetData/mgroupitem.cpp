#include "mgroupitem.h"

MGroupItem::MGroupItem()
{

}

MGroupItem::~MGroupItem()
{

}

QString MGroupItem::TeamName()
{
    return team_name_;
}

void MGroupItem::SetTeamName(QString team_name)
{
    team_name_ = team_name;
}
