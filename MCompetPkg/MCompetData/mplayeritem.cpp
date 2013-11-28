#include "mplayeritem.h"

MPlayerItem::MPlayerItem()
{

}

MPlayerItem::~MPlayerItem()
{

}

QString MPlayerItem::Name()
{
    return name_;
}

void MPlayerItem::SetName(QString name)
{
    name_ = name;
}


