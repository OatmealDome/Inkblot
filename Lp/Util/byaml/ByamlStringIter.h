#pragma once

#include "types.h"

namespace Lp
{
    namespace Utl
    {
        class ByamlStringTableIter
        {
        public:
            ByamlStringTableIter();
            ByamlStringTableIter(u8 const *strTableSrc, bool swapEndianess);

            u32 getSize() const;
            u64 getAddressTable() const;
            u64 getStringAddress(s32 idx) const;
            u64 getEndAddress() const;
            u64* getString(s32 idx) const;
            u32 getStringSize(s32 idx) const;
            s32 getStringIndex(char const *str) const;
            bool isValidate() const;

            u8* mStringTableSrc; // _0
            u32 mSwapEndianess; // _8
        };
    };
};