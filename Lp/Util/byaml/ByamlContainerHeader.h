#pragma once

#include "types.h"

namespace Lp
{
    namespace Utl
    {
        class ByamlContainerHeader
        {
        public:
            u32 getType() const;
            u32 getCount(bool swapEndianess) const;

            u32 mType; // _0
        };
    };
};