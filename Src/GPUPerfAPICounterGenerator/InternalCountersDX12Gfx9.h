//==============================================================================
// Copyright (c) 2010-2017 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief  DX12 internal counter definitions for GFX9
//==============================================================================

#ifndef _GPA_INTERNAL_COUNTERS_DX12_GFX9_H_
#define _GPA_INTERNAL_COUNTERS_DX12_GFX9_H_
// This file is autogenerated by the ConvertHWEnums project

#include <windows.h>
#pragma warning (push)
#pragma warning (disable: 4201)
#include <AmdExtGpaInterface.h>
#pragma warning (pop)

extern GPA_HardwareCounterDesc* DX12CounterGroupArrayGfx9[]; ///< Array of hardware counter groups for DX12 for Gfx9 family
extern GPA_CounterGroupDesc HWDX12GroupsGfx9[]; ///< Array of counter groups for DX12 for Gfx9 family
extern GPA_SQCounterGroupDesc HWDX12SQGroupsGfx9[]; ///< Array of SQ groups for DX12 for Gfx9 family
extern unsigned int HWDX12SQIsolatedGroupsGfx9[]; ///< Array of counter groups isolated from SQ counter groups for DX12 for Gfx9 family
extern AmdExtGpuBlock HWDX12DriverEnumGfx9[]; ///< Array of driver enum values per group for DX12 for Gfx9 family
extern const unsigned int HWDX12GPUTimeIndexGfx9; ///< Index of GPUTime Group for DX12 for Gfx9 family
extern const unsigned int HWDX12GroupCountGfx9; ///< Hardware Group Count for DX12 for Gfx9 family
extern const unsigned int HWDX12SQGroupCountGfx9; ///< Hardware SQ Group Count for DX12 for Gfx9 family
extern const unsigned int HWDX12SQIsolatedGroupCountGfx9; ///< Hardware Isolated Group Count for DX12 for Gfx9 family

#endif // _GPA_INTERNAL_COUNTERS_DX12_GFX9_H_
