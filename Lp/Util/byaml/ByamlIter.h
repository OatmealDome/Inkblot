#pragma once

#include "ByamlData.h"
#include "types.h"

namespace Lp
{
    namespace Utl
    {
        class ByamlIter
        {
        public:
            ByamlIter();
            ByamlIter(u8 const *srcByaml);
            ByamlIter(u8 const *srcByamlHeader, u8 const *srcByamlData);

            void operator=(Lp::Utl::ByamlIter const &);
            bool isValid() const;
            bool isTypeHash() const;
            bool isTypeArray() const;
            bool isTypeContainer() const;
            bool isExistKey(char const *key) const;
            s32 getKeyIndex(char const *key) const;
            bool isInvertOrder() const;
            u32 getSize() const;
            ByamlIter* getIterByIndex(s32 index) const;
            bool getByamlDataByIndex(Lp::Utl::ByamlData *, s32 index) const;
            Lp::Utl::ByamlIter* getIterByKey(char const *) const;
            bool getByamlDataByKey(Lp::Utl::ByamlData *, char const *) const;
            bool getByamlDataByKeyIndex(Lp::Utl::ByamlData *, s32) const;
            bool getByamlDataAndKeyName(Lp::Utl::ByamlData *, char const **, s32) const;
            bool getKeyName(char const **, s32) const;
            bool tryGetIterByIndex(Lp::Utl::ByamlIter *, s32) const;
            bool tryGetIterAndKeyNameByIndex(Lp::Utl::ByamlIter *,char const **, s32) const;
            bool tryGetIterByKey(Lp::Utl::ByamlIter *,char const *) const;
            bool tryGetStringByKey(char const **, char const *) const;
            bool tryConvertString(char const **, Lp::Utl::ByamlData const *) const;
            bool tryGetBinaryByKey(u8 const **, s32 *, char const *) const;
            bool tryGetBinary(u8 const **, s32 *, Lp::Utl::ByamlData const *) const;
            bool tryGetBoolByKey(bool *, char const *) const;
            bool tryConvertBool(bool *, Lp::Utl::ByamlData const *) const;
            bool tryGetInt32ByKey(s32 *, char const *) const;
            bool tryConvertInt32(s32 *, Lp::Utl::ByamlData const *) const;
            bool tryGetUInt32ByKey(u32 *, char const *) const;
            bool tryConvertUInt32(u32 *, Lp::Utl::ByamlData const *) const;
            bool tryGetFloatByKey(f32 *, char const *) const;
            bool tryConvertFloat(f32 *, Lp::Utl::ByamlData const *) const;
            bool tryGetInt64ByKey(s64 *, char const *) const;
            bool tryConvertInt64(s64 *, Lp::Utl::ByamlData const *) const;
            bool tryGetUInt64ByKey(u64 *, char const *) const;
            bool tryConvertUInt64(u64 *, Lp::Utl::ByamlData const *) const;
            bool tryGetDoubleByKey(f64 *, char const *) const;
            bool tryConvertDouble(f64 *, Lp::Utl::ByamlData const *) const;
            bool tryGetStringByIndex(char const **, s32) const;
            bool tryGetBinaryByIndex(u8 const **, s32 *, s32) const;
            bool tryGetBoolByIndex(bool *, s32) const;
            bool tryGetInt32ByIndex(s32 *, s32) const;
            bool tryGetUInt32ByIndex(u32 *, s32) const;
            bool tryGetFloatByindex(f32 *, s32) const;
            bool tryGetInt64ByIndex(s64 *, s32) const;
            bool tryGetUInt64ByIndex(u64 *, s32) const;
            bool tryGetDoubleByIndex(f64 *, s32) const;
            bool tryConvertIter(Lp::Utl::ByamlIter *, Lp::Utl::ByamlData const *) const;
            bool isEqualData(Lp::Utl::ByamlIter const&) const;

            u8* mSrcByamlHeader; // _0
            u8* mSrcByamlData; // _8
        };
    };
};