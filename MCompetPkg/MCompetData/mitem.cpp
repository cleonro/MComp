#include "mitem.h"

MItem::MItem()
{

}

MItem::~MItem()
{

}

QString MItem::Id()
{
    return unique_id_;
}

void MItem::SetId(QString id)
{
    unique_id_ = id;
}

QString MItem::Description()
{
    return description_;
}

void MItem::SetDescription(QString description)
{
    description_ = description;
}
