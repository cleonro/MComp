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

QString MPlayerItem::Id()
{
    return unique_id_;
}

void MPlayerItem::SetId(QString id)
{
    unique_id_ = id;
}

QString MPlayerItem::Description()
{
    return description_;
}

void MPlayerItem::SetDescription(QString description)
{
    description_ = description;
}
