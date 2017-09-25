#ifndef NSFW_TRANSFORMS_ABSTRACTTRANSFORM_H
#define NSFW_TRANSFORMS_ABSTRACTTRANSFORM_H

#include <vector>

#include "../../includes/Queue.h"

typedef std::unique_ptr<std::vector<std::unique_ptr<Event>>> VecEvents;

class AbstractTransform
{
public:
    VecEvents operator()(VecEvents vecEvents)
    {
        return transform(std::move(vecEvents));
    }

public:
    virtual VecEvents transform(VecEvents vecEvents) = 0;
};

#endif