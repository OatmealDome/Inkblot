#pragma once

#include "types.h"

namespace Lp
{
    namespace Utl
    {
        class ByamlData;

        class ByamlArrayIter
        {
        public:
            ByamlArrayIter();
            ByamlArrayIter(u8 const *arraySrc, bool swapEndianess);

            u32 getSize() const;
            u64 getTypeTable() const;
            u64 getDataTable() const;
            bool getDataByIndex(Lp::Utl::ByamlData *dest, s32 idx) const;

            u8* mArraySrc; // _0
            u32 mSwapEndianess; // _8
        };
    };
};