#pragma once

#include "types.h"

namespace Lp
{
    namespace Utl
    {
        class ByamlData;
        class ByamlHashPair;

        class ByamlHashIter
        {
        public:
            ByamlHashIter();
            ByamlHashIter(u8 const *srcByaml, bool swapEndianess);

            u32 getSize() const;
            u64 getPairTable() const;
            bool getDataByIndex(Lp::Utl::ByamlData *dest, s32 index) const;
            bool getDataByKey(Lp::Utl::ByamlData *dest, s32 key) const;
            Lp::Utl::ByamlHashPair* findPair(s32 key) const;
            Lp::Utl::ByamlHashPair* getPairByIndex(s32 index) const;
            u64 getOffsetData(s32 baseOffset) const;

            u8* mSrcByaml; // _0
            u32 mEndianess; // _8
        };
    };
};