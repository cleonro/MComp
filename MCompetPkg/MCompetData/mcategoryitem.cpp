#include "mcategoryitem.h"

MCategoryItem::MCategoryItem()
{
    //less or equal to zero means no weight limit
    weight_limit_ = 0.0;
}

MCategoryItem::~MCategoryItem()
{

}

float MCategoryItem::WeightLimit()
{
    return weight_limit_;
}

void MCategoryItem::SetWeightLimit(float weight_limit)
{
    weight_limit_ = weight_limit;
}
