//==============================================================================
// Copyright (c) 2010-2018 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief PublicCounterDefinitions ASIC file for DX12GFX8
//==============================================================================

#ifndef _PUBLIC_COUNTER_DEFS_DX12GFX8_ASICS_H_
#define _PUBLIC_COUNTER_DEFS_DX12GFX8_ASICS_H_

//*** Note, this is an auto-generated file. Do not edit. Execute PublicCounterCompiler to rebuild.

#include "GPAPublicCounters.h"

#include "PublicCounterDefsDX12Gfx8_Baffin.h"
#include "PublicCounterDefsDX12Gfx8_Carrizo.h"
#include "PublicCounterDefsDX12Gfx8_Ellesmere.h"
#include "PublicCounterDefsDX12Gfx8_Fiji.h"
#include "PublicCounterDefsDX12Gfx8_Iceland.h"
#include "PublicCounterDefsDX12Gfx8_Tonga.h"

namespace DX12Gfx8Asics
{

/// Updates default GPU generation public counters with ASIC specific public counters if available.
/// \param desiredGeneration Hardware generation currently in use.
/// \param asicType The ASIC type that is currently in use.
/// \param publicCounters Returned set of public counters, if available.
/// \return True if the ASIC matched one available, and publicCounters was updated.
inline void UpdateAsicSpecificCounters(GDT_HW_GENERATION desiredGeneration, GDT_HW_ASIC_TYPE asicType, GPA_PublicCounters& publicCounters)
{

    if (DX12Gfx8_Baffin::UpdateAsicSpecificCounters(desiredGeneration, asicType, publicCounters))
    {
        return;
    }

    if (DX12Gfx8_Carrizo::UpdateAsicSpecificCounters(desiredGeneration, asicType, publicCounters))
    {
        return;
    }

    if (DX12Gfx8_Ellesmere::UpdateAsicSpecificCounters(desiredGeneration, asicType, publicCounters))
    {
        return;
    }

    if (DX12Gfx8_Fiji::UpdateAsicSpecificCounters(desiredGeneration, asicType, publicCounters))
    {
        return;
    }

    if (DX12Gfx8_Iceland::UpdateAsicSpecificCounters(desiredGeneration, asicType, publicCounters))
    {
        return;
    }

    if (DX12Gfx8_Tonga::UpdateAsicSpecificCounters(desiredGeneration, asicType, publicCounters))
    {
        return;
    }

}

} // DX12Gfx8Asics

#endif // _PUBLIC_COUNTER_DEFS_DX12GFX8_ASICS_H_
