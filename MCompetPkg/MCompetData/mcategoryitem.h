#ifndef MCATEGORYITEM_H
#define MCATEGORYITEM_H

#include "mcompetdata_global.h"
#include "mitem.h"

class MCOMPETDATASHARED_EXPORT MCategoryItem : public MItem
{
public:
    MCategoryItem();
    ~MCategoryItem();

    float WeightLimit();
    void SetWeightLimit(float weight_limit);

private:
    float   weight_limit_;
    bool    is_open_;

};

#endif // MCATEGORYITEM_H
