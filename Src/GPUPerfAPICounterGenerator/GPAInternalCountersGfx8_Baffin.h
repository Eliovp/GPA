//==============================================================================
// Copyright (c) 2010-2018 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief  Internal counter definitions for GFX8_BAFFIN
//==============================================================================

#ifndef _GPA_INTERNAL_COUNTERS_GFX8_BAFFIN_H_
#define _GPA_INTERNAL_COUNTERS_GFX8_BAFFIN_H_

// This file is autogenerated by the ConvertHWEnums project

#include "GPAInternalCounter.h"
#include "GPAInternalCountersGfx8.h"

namespace CounterGfx8_Baffin
{
/// Uses the input ASIC type to determine if this data provides an ASIC specific version.
/// \param asicType The ASIC type that is currently in use.
/// \return True if the ASIC is matched by this file.
inline bool MatchAsic(GDT_HW_ASIC_TYPE asicType)
{
    static std::set<GDT_HW_ASIC_TYPE> asicsSupported = { GDT_BAFFIN, GDT_GFX8_0_4 };

    if (asicsSupported.find(asicType) == asicsSupported.end())
    {
        return false;
    }

    return true;
}

extern GPA_HardwareCounterDesc VGT0countersGfx8_Baffin []; ///< Array of internal counters for VGT0 block for Gfx8_Baffin family
extern GPA_HardwareCounterDesc VGT1countersGfx8_Baffin []; ///< Array of internal counters for VGT1 block for Gfx8_Baffin family
extern GPA_HardwareCounterDesc VGT2countersGfx8_Baffin []; ///< Array of internal counters for VGT2 block for Gfx8_Baffin family
extern GPA_HardwareCounterDesc VGT3countersGfx8_Baffin []; ///< Array of internal counters for VGT3 block for Gfx8_Baffin family

/// Replaces count number of block instance counters at the destination with the overriding source counters.
/// \param pDestCounter Destination to update.
/// \param pSrcCounter Source to update from.
/// \param count Number of counters to update.
inline void ReplaceBlockInstanceCounters(GPA_HardwareCounterDesc* pDestCounter, GPA_HardwareCounterDesc* pSrcCounter, uint32_t count)
{
    for (uint32_t i = 0; i < count; i++)
    {
        pDestCounter[i] = pSrcCounter[i];
    }
}

/// If the requested ASIC type is supported, then the global GPU generation block instance counters are updated.
/// \param asicType The ASIC type that is currently in use.
/// \return True if the ASIC is matched by this file and block instances are updated, otherwise false.
inline bool OverrideBlockInstanceCounters(GDT_HW_ASIC_TYPE asicType)
{
    if (!MatchAsic(asicType))
    {
        return false;
    }

    ReplaceBlockInstanceCounters(VGT0countersGfx8, VGT0countersGfx8_Baffin, 147);
    ReplaceBlockInstanceCounters(VGT1countersGfx8, VGT1countersGfx8_Baffin, 147);
    ReplaceBlockInstanceCounters(VGT2countersGfx8, VGT2countersGfx8_Baffin, 147);
    ReplaceBlockInstanceCounters(VGT3countersGfx8, VGT3countersGfx8_Baffin, 147);

    return true;
}
} // CounterGfx8_Baffin

#endif // _GPA_INTERNAL_COUNTERS_GFX8_BAFFIN_H_
