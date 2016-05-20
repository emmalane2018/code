#include "Fill.h"

Fill::Fill(drawing_ptr base, const color& color)
        : Drawing(base->get_bbox(), color)
        , base_{base}
{ }

bool Fill::contains(posn point) const
{
    return base_->contains(point);
}

drawing_ptr fill(drawing_ptr base, const Drawing::color& color)
{
    return std::make_shared<Fill>(base, color);
}
