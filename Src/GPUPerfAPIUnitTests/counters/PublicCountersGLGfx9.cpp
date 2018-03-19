//==============================================================================
// Copyright (c) 2015-2018 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief PublicCounterDefinitions for GLGfx9 for testing
//==============================================================================

// *** Note, this is an auto-generated file. Do not edit. Execute PublicCounterCompiler to rebuild.

#include "PublicCountersGLGfx9.h"

const GPACounterDesc GLGFX9_PUBLIC_COUNTERS[GLGFX9_PUBLIC_COUNTER_COUNT] =
{
    {"GPUTime", "Timing", "Time this API call took to execute on the GPU in milliseconds. Does not include time that draw calls are processed in parallel.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_MILLISECONDS, {0x00bfa9cd, 0x5512, 0x48e8, {0x70, 0x55, 0x7b, 0x59, 0x21, 0x13, 0xb8, 0xcb}}},
    {"GPUBusy", "Timing", "The percentage of time GPU was busy.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, {0xbef38bf3, 0x1167, 0x0844, {0x81, 0xf0, 0x67, 0xd2, 0xd2, 0x8d, 0xdb, 0xc5}}},
    {"GPUBusyCycles", "Timing", "Number of GPU cycles that the GPU was busy.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, {0x1e84970d, 0x7014, 0x2b8d, {0xd6, 0x1e, 0x38, 0x8b, 0x5f, 0x78, 0x26, 0x91}}},
    {"TessellatorBusy", "Timing", "The percentage of time the tessellation engine is busy.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, {0x36af6c72, 0xdcfb, 0x8102, {0x4f, 0xd4, 0xce, 0x8d, 0xdc, 0x57, 0x33, 0x65}}},
    {"TessellatorBusyCycles", "Timing", "Number of GPU cycles that the tessellation engine is busy.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, {0x60289dcb, 0x7b33, 0x46e7, {0x26, 0xd1, 0x8a, 0x21, 0x21, 0x60, 0x55, 0x43}}},
    {"VSBusy", "Timing", "The percentage of time the ShaderUnit has vertex shader work to do.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, {0x94caad5e, 0x867c, 0x6c09, {0xcf, 0x3a, 0xd0, 0x5b, 0x51, 0xdf, 0x8f, 0x3b}}},
    {"VSBusyCycles", "Timing", "Number of GPU cycles that the ShaderUnit has vertex shader work to do.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, {0xa2086d4e, 0x274b, 0x48a8, {0x3e, 0x08, 0xa4, 0xab, 0x76, 0xac, 0x15, 0xdd}}},
    {"VSTime", "Timing", "Time vertex shaders are busy in milliseconds.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_MILLISECONDS, {0xfee660c7, 0x8e01, 0x4dc5, {0xe5, 0xd0, 0xfc, 0xb6, 0x1c, 0x17, 0xfb, 0x2c}}},
    {"HSBusy", "Timing", "The percentage of time the ShaderUnit has hull shader work to do.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, {0x16f30a0b, 0x4cbf, 0xeccd, {0xb1, 0x3f, 0xab, 0x68, 0xdd, 0x25, 0x4d, 0x32}}},
    {"HSBusyCycles", "Timing", "Number of GPU cycles that the ShaderUnit has hull shader work to do.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, {0x753e76ef, 0x8ef8, 0x3f13, {0xb5, 0x11, 0x4b, 0xd9, 0xf3, 0x58, 0x9f, 0xdb}}},
    {"HSTime", "Timing", "Time hull shaders are busy in milliseconds.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_MILLISECONDS, {0x8792e9f1, 0xfb39, 0xb92a, {0xb2, 0x30, 0xf3, 0x3d, 0xf4, 0xc8, 0xa0, 0xde}}},
    {"GSBusy", "Timing", "The percentage of time the ShaderUnit has geometry shader work to do.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, {0x876f36d8, 0xd046, 0x833f, {0x78, 0x32, 0x67, 0x3c, 0xbf, 0xfd, 0x0a, 0x45}}},
    {"GSBusyCycles", "Timing", "Number of GPU cycles that the ShaderUnit has geometry shader work to do.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, {0x48203b6b, 0x8983, 0xc067, {0xd6, 0x3e, 0x05, 0xda, 0x8b, 0xe5, 0x11, 0x1b}}},
    {"GSTime", "Timing", "Time geometry shaders are busy in milliseconds.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_MILLISECONDS, {0x86d56794, 0xf391, 0xb601, {0x93, 0x88, 0x85, 0x1b, 0x64, 0x6d, 0x34, 0x6c}}},
    {"PSBusy", "Timing", "The percentage of time the ShaderUnit has pixel shader work to do.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, {0x7e772beb, 0xd82c, 0xbd9a, {0xae, 0xd0, 0xfe, 0x50, 0x4d, 0x41, 0x6c, 0xe5}}},
    {"PSBusyCycles", "Timing", "Number of GPU cycles that the ShaderUnit has pixel shader work to do.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, {0xb58bea04, 0xce8e, 0x2984, {0x80, 0xf4, 0x8a, 0xba, 0x7d, 0x4c, 0x81, 0x7b}}},
    {"PSTime", "Timing", "Time pixel shaders are busy in milliseconds.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_MILLISECONDS, {0xf564ee00, 0xffcf, 0xf7f6, {0xfc, 0xbf, 0xf2, 0x00, 0x20, 0x5c, 0xd0, 0xcc}}},
    {"CSBusy", "Timing", "The percentage of time the ShaderUnit has compute shader work to do.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, {0x493fdd90, 0x8d2b, 0xa055, {0x5e, 0x4e, 0x2d, 0x29, 0xc3, 0x39, 0x6b, 0x8c}}},
    {"CSBusyCycles", "Timing", "Number of GPU cycles that the ShaderUnit has compute shader work to do.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, {0x39bcf1b8, 0xf6b2, 0x4c37, {0xf9, 0xaf, 0x0a, 0x2b, 0xb5, 0x95, 0x12, 0xf9}}},
    {"CSTime", "Timing", "Time compute shaders are busy in milliseconds.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_MILLISECONDS, {0x5177faaf, 0xf59d, 0xee23, {0x6e, 0x36, 0x0e, 0xa0, 0x87, 0xdc, 0xa9, 0xdc}}},
    {"VSVerticesIn", "VertexShader", "The number of vertices processed by the VS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, {0x810a04c8, 0x2ff4, 0x081d, {0x76, 0x6d, 0xbf, 0xa2, 0xbd, 0x4a, 0xd9, 0x16}}},
    {"VSVALUInstCount", "VertexShader", "Average number of vector ALU instructions executed in the VS. Affected by flow control.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, {0x8ec604e4, 0x63f5, 0xe6b5, {0x45, 0x58, 0xc3, 0x8f, 0x0b, 0x26, 0xd4, 0xb1}}},
    {"VSSALUInstCount", "VertexShader", "Average number of scalar ALU instructions executed in the VS. Affected by flow control.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, {0xe3da0383, 0x7322, 0x7f65, {0x8c, 0xf2, 0x3c, 0xe6, 0x41, 0x57, 0x8e, 0x54}}},
    {"VSVALUBusy", "VertexShader", "The percentage of GPUTime vector ALU instructions are being processed by the VS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, {0x8b3572f7, 0xfda0, 0xeddf, {0x6c, 0x93, 0x2a, 0xb1, 0x45, 0xb8, 0x75, 0x4b}}},
    {"VSVALUBusyCycles", "VertexShader", "Number of GPU cycles where vector ALU instructions are being processed by the VS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, {0x0af1686e, 0x6d77, 0x2f6e, {0x28, 0x62, 0x7b, 0xb8, 0xe8, 0x69, 0xa7, 0x76}}},
    {"VSSALUBusy", "VertexShader", "The percentage of GPUTime scalar ALU instructions are being processed by the VS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, {0x3bc8730c, 0xe3bc, 0xe2f0, {0x7d, 0x24, 0x36, 0x97, 0x40, 0x64, 0xc2, 0x5a}}},
    {"VSSALUBusyCycles", "VertexShader", "Number of GPU cycles where scalar ALU instructions are being processed by the VS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, {0x357ac7cd, 0x2e1c, 0xdcb0, {0x77, 0xf6, 0x37, 0x52, 0x72, 0x37, 0xf3, 0x5b}}},
    {"HSPatches", "HullShader", "The number of patches processed by the HS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, {0xd1bbd27d, 0xd591, 0x4509, {0xdf, 0x52, 0xd3, 0x29, 0xfb, 0x73, 0xa9, 0x8f}}},
    {"HSVALUInstCount", "HullShader", "Average number of vector ALU instructions executed in the HS. Affected by flow control.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, {0x786673bf, 0xd58f, 0x9895, {0x3a, 0x37, 0x9d, 0x6e, 0xfb, 0x5e, 0x58, 0x04}}},
    {"HSSALUInstCount", "HullShader", "Average number of scalar ALU instructions executed in the HS. Affected by flow control.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, {0x1af675c4, 0xcb0b, 0xc4c5, {0xc1, 0x31, 0x27, 0x96, 0x75, 0x0f, 0x68, 0x3e}}},
    {"HSVALUBusy", "HullShader", "The percentage of GPUTime vector ALU instructions are being processed by the HS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, {0x7880d192, 0x8015, 0x0311, {0xd4, 0x3e, 0xfb, 0x0b, 0x7a, 0x4d, 0xf1, 0x79}}},
    {"HSVALUBusyCycles", "HullShader", "Number of GPU cycles vector where ALU instructions are being processed by the HS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, {0x3afb94e4, 0xe937, 0x5730, {0x0c, 0xc9, 0x41, 0xd3, 0x11, 0x3b, 0xa0, 0x12}}},
    {"HSSALUBusy", "HullShader", "The percentage of GPUTime scalar ALU instructions are being processed by the HS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, {0x34748a4b, 0x9148, 0x0b06, {0xb7, 0xb9, 0x57, 0x00, 0xd6, 0x63, 0x1b, 0xde}}},
    {"HSSALUBusyCycles", "HullShader", "Number of GPU cycles where scalar ALU instructions are being processed by the HS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, {0x9bceabf7, 0x3f01, 0x2fd9, {0x7b, 0x1d, 0x8f, 0xe4, 0x6c, 0x72, 0x9e, 0xfc}}},
    {"GSPrimsIn", "GeometryShader", "The number of primitives passed into the GS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, {0x20c29866, 0x509a, 0xaaab, {0x26, 0x97, 0x6b, 0x2c, 0x38, 0xf7, 0x99, 0x53}}},
    {"GSVerticesOut", "GeometryShader", "The number of vertices output by the GS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, {0x775b9736, 0x319a, 0xbd8a, {0x48, 0xc9, 0x68, 0xdb, 0x9c, 0x91, 0xd9, 0x78}}},
    {"GSVALUInstCount", "GeometryShader", "Average number of vector ALU instructions executed in the GS. Affected by flow control.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, {0x21b12bfa, 0xb8cd, 0x2e71, {0xa2, 0xd5, 0xf9, 0xe9, 0xf1, 0xd6, 0x5d, 0x61}}},
    {"GSSALUInstCount", "GeometryShader", "Average number of scalar ALU instructions executed in the GS. Affected by flow control.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, {0xa8562594, 0xd335, 0xca43, {0x61, 0xbf, 0x03, 0xb7, 0x2d, 0x2b, 0x98, 0xa5}}},
    {"GSVALUBusy", "GeometryShader", "The percentage of GPUTime vector ALU instructions are being processed by the GS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, {0x228a4818, 0x1e56, 0xcebb, {0x07, 0x20, 0x3b, 0x2c, 0xdc, 0x05, 0x7a, 0x6f}}},
    {"GSVALUBusyCycles", "GeometryShader", "Number of GPU cycles where vector ALU instructions are being processed by the GS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, {0xbe217edd, 0x226f, 0xbd97, {0x9a, 0x48, 0x46, 0xe2, 0x80, 0x9b, 0x19, 0x33}}},
    {"GSSALUBusy", "GeometryShader", "The percentage of GPUTime scalar ALU instructions are being processed by the GS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, {0xf28ce300, 0x800e, 0x9822, {0x39, 0xe4, 0xf4, 0x85, 0x28, 0xbd, 0xb9, 0x35}}},
    {"GSSALUBusyCycles", "GeometryShader", "Number of GPU cycles where scalar ALU instructions are being processed by the GS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, {0xb3eace7c, 0x3bc4, 0x0107, {0x88, 0x7f, 0x92, 0x38, 0x51, 0xdc, 0x8e, 0xa7}}},
    {"PrimitiveAssemblyBusy", "Timing", "The percentage of GPUTime that primitive assembly (clipping and culling) is busy. High values may be caused by having many small primitives; mid to low values may indicate pixel shader or output buffer bottleneck.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, {0x54ac5640, 0xc4d7, 0x95e2, {0x20, 0xe0, 0x6a, 0x9f, 0xdf, 0xc0, 0x73, 0x33}}},
    {"PrimitiveAssemblyBusyCycles", "Timing", "Number of GPU cycles the primitive assembly (clipping and culling) is busy. High values may be caused by having many small primitives; mid to low values may indicate pixel shader or output buffer bottleneck.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, {0x99777f2d, 0x9626, 0xc78a, {0xa9, 0x7c, 0xc4, 0x50, 0x5e, 0xba, 0x1e, 0x5f}}},
    {"PrimitivesIn", "PrimitiveAssembly", "The number of primitives received by the hardware. This includes primitives generated by tessellation.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, {0xa515b80d, 0x75c3, 0xc7d2, {0x0d, 0x2f, 0xd7, 0x76, 0x6b, 0x47, 0x59, 0xa6}}},
    {"CulledPrims", "PrimitiveAssembly", "The number of culled primitives. Typical reasons include scissor, the primitive having zero area, and back or front face culling.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, {0x589bdf55, 0x9192, 0x280a, {0x41, 0xc3, 0x58, 0x4b, 0xc9, 0x4f, 0x25, 0x62}}},
    {"ClippedPrims", "PrimitiveAssembly", "The number of primitives that required one or more clipping operations due to intersecting the view volume or user clip planes.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, {0x5ef6f9d5, 0x155e, 0x5baa, {0x16, 0x3f, 0x83, 0x59, 0xd9, 0xea, 0x9b, 0xbf}}},
    {"PAStalledOnRasterizer", "PrimitiveAssembly", "Percentage of GPUTime that primitive assembly waits for rasterization to be ready to accept data. This roughly indicates for what percentage of time the pipeline is bottlenecked by pixel operations.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, {0x6f9f416b, 0x53c1, 0x0457, {0xf8, 0x8c, 0x7b, 0x6b, 0xa8, 0x97, 0x39, 0x74}}},
    {"PAStalledOnRasterizerCycles", "PrimitiveAssembly", "Number of GPU cycles the primitive assembly waits for rasterization to be ready to accept data. Indicates the number of GPU cycles the pipeline is bottlenecked by pixel operations.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, {0x7a8c492a, 0xc566, 0x9328, {0x68, 0x05, 0x76, 0x0d, 0xbf, 0xf5, 0xc0, 0xf2}}},
    {"PSPixelsOut", "PixelShader", "Pixels exported from shader to color buffers. Does not include killed or alpha tested pixels; if there are multiple render targets, each render target receives one export, so this will be 2 for 1 pixel written to two RTs.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, {0x24cba16c, 0xbaa6, 0x6ecd, {0x95, 0xad, 0x92, 0xec, 0xb1, 0x33, 0x8d, 0xa1}}},
    {"PSExportStalls", "PixelShader", "Pixel shader output stalls. Percentage of GPUBusy. Should be zero for PS or further upstream limited cases; if not zero, indicates a bottleneck in late Z testing or in the color buffer.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, {0x9b4f466c, 0xff97, 0x22bb, {0x55, 0x7d, 0x84, 0xd3, 0xc4, 0xc5, 0x18, 0x95}}},
    {"PSExportStallsCycles", "PixelShader", "Number of GPU cycles the pixel shader output stalls. Should be zero for PS or further upstream limited cases; if not zero, indicates a bottleneck in late Z testing or in the color buffer.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, {0x47c72aad, 0x64e6, 0x0864, {0xd5, 0x33, 0xd8, 0xe0, 0xbc, 0x27, 0xc1, 0x56}}},
    {"PSVALUInstCount", "PixelShader", "Average number of vector ALU instructions executed in the PS. Affected by flow control.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, {0xeb74389e, 0x435c, 0x4137, {0xec, 0xf1, 0x39, 0xeb, 0x5b, 0xc1, 0xcb, 0xfe}}},
    {"PSSALUInstCount", "PixelShader", "Average number of scalar ALU instructions executed in the PS. Affected by flow control.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, {0xe6a06580, 0x8a82, 0x96d6, {0x97, 0x6c, 0xac, 0xc1, 0x21, 0xfc, 0x55, 0x16}}},
    {"PSVALUBusy", "PixelShader", "The percentage of GPUTime vector ALU instructions are being processed by the PS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, {0x6ce6fef7, 0x8e33, 0x10b4, {0xf3, 0x51, 0xaf, 0x75, 0x5e, 0x17, 0x7e, 0x85}}},
    {"PSVALUBusyCycles", "PixelShader", "Number of GPU cycles where vector ALU instructions are being processed by the PS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, {0x1e276f86, 0xcd2a, 0x72e7, {0xfc, 0x9d, 0x00, 0x4f, 0x66, 0x6f, 0x29, 0x81}}},
    {"PSSALUBusy", "PixelShader", "The percentage of GPUTime scalar ALU instructions are being processed by the PS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, {0x2ff9f34f, 0xe94b, 0xaf4d, {0x18, 0xc2, 0x5f, 0xbb, 0xf6, 0xd1, 0x72, 0x7a}}},
    {"PSSALUBusyCycles", "PixelShader", "Number of GPU cycles where scalar ALU instructions are being processed by the PS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, {0x29808906, 0xf128, 0xb078, {0xfc, 0x79, 0x82, 0x0a, 0x4b, 0x3b, 0x3b, 0x8d}}},
    {"CSThreadGroups", "ComputeShader", "Total number of thread groups.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, {0x8ce3fc80, 0x56b2, 0x97f9, {0x8e, 0x70, 0x2e, 0x8c, 0x74, 0x7c, 0xea, 0x68}}},
    {"CSWavefronts", "ComputeShader", "The total number of wavefronts used for the CS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, {0x42379c6e, 0x369b, 0xc237, {0x8b, 0x25, 0xcd, 0xb9, 0xcd, 0xc6, 0x5c, 0x4d}}},
    {"CSThreads", "ComputeShader", "The number of CS threads processed by the hardware.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, {0x7a648013, 0x6eac, 0x2665, {0xac, 0x36, 0x13, 0xc6, 0xf4, 0xac, 0x9c, 0x26}}},
    {"CSVALUInsts", "ComputeShader", "The average number of vector ALU instructions executed per work-item (affected by flow control).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, {0x376cb1cc, 0x5a40, 0x9d1d, {0x40, 0x4c, 0xf1, 0x73, 0x6c, 0x0c, 0x50, 0x84}}},
    {"CSVALUUtilization", "ComputeShader", "The percentage of active vector ALU threads in a wave. A lower number can mean either more thread divergence in a wave or that the work-group size is not a multiple of 64. Value range: 0% (bad), 100% (ideal - no thread divergence).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, {0x4476879e, 0xcdc0, 0xd602, {0xb2, 0x4e, 0x9b, 0x4a, 0x8d, 0x38, 0x43, 0x8f}}},
    {"CSSALUInsts", "ComputeShader", "The average number of scalar ALU instructions executed per work-item (affected by flow control).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, {0xeb211144, 0x8136, 0xff86, {0xe8, 0xbf, 0x4d, 0x04, 0x93, 0xa9, 0x04, 0xcb}}},
    {"CSVFetchInsts", "ComputeShader", "The average number of vector fetch instructions from the video memory executed per work-item (affected by flow control).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, {0x3e2829c0, 0x6215, 0x783b, {0xc2, 0x71, 0x6d, 0x57, 0xff, 0x2c, 0x52, 0x0e}}},
    {"CSSFetchInsts", "ComputeShader", "The average number of scalar fetch instructions from the video memory executed per work-item (affected by flow control).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, {0xda09171c, 0x6a0a, 0x584f, {0xfd, 0xdc, 0xdc, 0x50, 0x62, 0xd6, 0x3a, 0x3e}}},
    {"CSVWriteInsts", "ComputeShader", "The average number of vector write instructions to the video memory executed per work-item (affected by flow control).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, {0x43438c22, 0xe910, 0xb377, {0xb7, 0x67, 0xb3, 0x29, 0x02, 0xe0, 0xdf, 0x0d}}},
    {"CSFlatVMemInsts", "ComputeShader", "The average number of FLAT instructions that read from or write to the video memory executed per work item (affected by flow control). Includes FLAT instructions that read from or write to scratch.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, {0x2570b477, 0x13e3, 0xf5b6, {0xe6, 0xff, 0x71, 0x59, 0x37, 0x3b, 0xc7, 0x4d}}},
    {"CSVALUBusy", "ComputeShader", "The percentage of GPUTime vector ALU instructions are processed. Value range: 0% (bad) to 100% (optimal).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, {0xf1e64815, 0xf6a8, 0xc277, {0xd4, 0xf9, 0xd0, 0x54, 0xb4, 0x43, 0xe2, 0x05}}},
    {"CSVALUBusyCycles", "ComputeShader", "Number of GPU cycles where vector ALU instructions are processed.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, {0x2d0d5852, 0x2658, 0xeb73, {0x68, 0xd2, 0xf2, 0x3f, 0x71, 0x18, 0xc9, 0xc3}}},
    {"CSSALUBusy", "ComputeShader", "The percentage of GPUTime scalar ALU instructions are processed. Value range: 0% (bad) to 100% (optimal).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, {0x3fc35f4e, 0x9882, 0x94e3, {0x6f, 0x5f, 0x4e, 0x81, 0xcd, 0x97, 0x08, 0x2a}}},
    {"CSSALUBusyCycles", "ComputeShader", "Number of GPU cycles where scalar ALU instructions are processed.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, {0xde58f8fc, 0x8ed4, 0xa799, {0x64, 0x8d, 0x62, 0xde, 0xd7, 0xb1, 0xc4, 0xc4}}},
    {"CSMemUnitBusy", "ComputeShader", "The percentage of GPUTime the memory unit is active. The result includes the stall time (MemUnitStalled). This is measured with all extra fetches and writes and any cache or memory effects taken into account. Value range: 0% to 100% (fetch-bound).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, {0x42ab96e1, 0x0a24, 0x96c8, {0xc4, 0xff, 0x09, 0x8f, 0xa2, 0x67, 0xd7, 0x8e}}},
    {"CSMemUnitBusyCycles", "ComputeShader", "Number of GPU cycles the memory unit is active. The result includes the stall time (MemUnitStalled). This is measured with all extra fetches and writes and any cache or memory effects taken into account.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, {0x39d5687f, 0xc727, 0x7c0c, {0xaf, 0x82, 0xbb, 0x71, 0x1d, 0x38, 0x97, 0xed}}},
    {"CSMemUnitStalled", "ComputeShader", "The percentage of GPUTime the memory unit is stalled. Try reducing the number or size of fetches and writes if possible. Value range: 0% (optimal) to 100% (bad).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, {0xf18e8679, 0x1511, 0xd533, {0xd9, 0xee, 0x43, 0x65, 0x19, 0x7f, 0x7d, 0x0c}}},
    {"CSMemUnitStalledCycles", "ComputeShader", "Number of GPU cycles the memory unit is stalled. Try reducing the number or size of fetches and writes if possible.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, {0x51991c84, 0xed2b, 0xbf31, {0xc4, 0xab, 0x8f, 0x8e, 0x9e, 0xb8, 0xf2, 0x9f}}},
    {"L1CacheHit", "GlobalMemory", "The percentage of fetch, write, atomic, and other instructions that hit the data in L1 cache. Value range: 0% (no hit) to 100% (optimal).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, {0x6deaf002, 0x3cac, 0x2d2d, {0x7b, 0x89, 0x56, 0x6c, 0x7a, 0x52, 0xb0, 0x8e}}},
    {"L1CacheHitCount", "GlobalMemory", "Count of fetch, write, atomic, and other instructions that hit the data in L1 cache.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, {0x279c8bff, 0xec6a, 0xf9bf, {0x96, 0xd7, 0x5e, 0x80, 0x00, 0xf7, 0x78, 0x91}}},
    {"L1CacheMissCount", "GlobalMemory", "Count of fetch, write, atomic, and other instructions that miss the data in L1 cache.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, {0x6e4ee364, 0x41d7, 0x476d, {0x36, 0x1d, 0xf4, 0x7b, 0x26, 0x6c, 0x15, 0xdb}}},
    {"CSWriteUnitStalledCycles", "ComputeShader", "Number of GPU cycles the write unit is stalled.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, {0xbe164c60, 0x5e48, 0xacac, {0x96, 0x22, 0x29, 0x61, 0x6d, 0x09, 0xaa, 0x9a}}},
    {"CSGDSInsts", "ComputeShader", "The average number of GDS read or GDS write instructions executed per work item (affected by flow control).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, {0x2a867f3e, 0x4a37, 0xad16, {0x55, 0xd1, 0xf0, 0x3d, 0x74, 0x70, 0x78, 0x19}}},
    {"CSLDSInsts", "ComputeShader", "The average number of LDS read/write instructions executed per work-item (affected by flow control).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, {0x61b0b351, 0x7e06, 0xef8e, {0xa8, 0xe0, 0x7a, 0x9e, 0x32, 0x00, 0xa8, 0x36}}},
    {"CSFlatLDSInsts", "ComputeShader", "The average number of FLAT instructions that read from or write to LDS executed per work item (affected by flow control).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, {0x99672cda, 0xde2b, 0x014c, {0x48, 0x2e, 0xcf, 0x73, 0xb9, 0x00, 0x68, 0xd5}}},
    {"CSALUStalledByLDS", "ComputeShader", "The percentage of GPUTime ALU units are stalled by the LDS input queue being full or the output queue being not ready. If there are LDS bank conflicts, reduce them. Otherwise, try reducing the number of LDS accesses if possible. Value range: 0% (optimal) to 100% (bad).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, {0x6dc4f1c2, 0xbad0, 0xc9ff, {0x15, 0x6e, 0x88, 0x3b, 0x31, 0x9a, 0x75, 0x2a}}},
    {"CSALUStalledByLDSCycles", "ComputeShader", "Number of GPU cycles the ALU units are stalled by the LDS input queue being full or the output queue being not ready. If there are LDS bank conflicts, reduce them. Otherwise, try reducing the number of LDS accesses if possible.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, {0x8f3d5f25, 0x2159, 0x0374, {0xfa, 0xfe, 0xe2, 0x6a, 0x77, 0x99, 0xb6, 0xc8}}},
    {"CSLDSBankConflict", "ComputeShader", "The percentage of GPUTime LDS is stalled by bank conflicts. Value range: 0% (optimal) to 100% (bad).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, {0x1065ee10, 0x2e41, 0xea41, {0x1e, 0xb3, 0xb6, 0x1b, 0x49, 0x17, 0x52, 0xf4}}},
    {"CSLDSBankConflictCycles", "ComputeShader", "Number of GPU cycles the LDS is stalled by bank conflicts. Value range: 0 (optimal) to GPUBusyCycles (bad).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, {0x1fd1adf3, 0xc51e, 0x94fd, {0x08, 0x3e, 0xc4, 0x82, 0xa0, 0xa0, 0x80, 0x9e}}},
    {"TexUnitBusy", "Timing", "The percentage of GPUTime the texture unit is active. This is measured with all extra fetches and any cache or memory effects taken into account.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, {0x36afb8d9, 0x42fc, 0xaafe, {0x66, 0xc5, 0x44, 0x95, 0x42, 0x15, 0x3b, 0x2c}}},
    {"TexUnitBusyCycles", "Timing", "Number of GPU cycles the texture unit is active. This is measured with all extra fetches and any cache or memory effects taken into account.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, {0xc68761f2, 0x248c, 0x4f39, {0x65, 0x28, 0xc3, 0x08, 0xb1, 0xc0, 0x80, 0x7c}}},
    {"TexTriFilteringPct", "TextureUnit", "Percentage of pixels that received trilinear filtering. Note that not all pixels for which trilinear filtering is enabled will receive it (e.g. if the texture is magnified).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, {0x1affc3c8, 0xb917, 0x5c81, {0x62, 0x2b, 0x70, 0x04, 0x52, 0x72, 0x08, 0xae}}},
    {"TexTriFilteringCount", "TextureUnit", "Count of pixels that received trilinear filtering. Note that not all pixels for which trilinear filtering is enabled will receive it (e.g. if the texture is magnified).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, {0x5785b3a1, 0xa513, 0x18db, {0x4b, 0x1c, 0xbd, 0xee, 0xf7, 0x5b, 0xb2, 0xb6}}},
    {"NoTexTriFilteringCount", "TextureUnit", "Count of pixels that did not receive trilinear filtering.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, {0x179da29a, 0x81af, 0xc06e, {0xce, 0x8c, 0xa0, 0xa7, 0x31, 0xea, 0x03, 0x0d}}},
    {"TexVolFilteringPct", "TextureUnit", "Percentage of pixels that received volume filtering.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, {0xb5ff6bed, 0x3178, 0xaee4, {0x42, 0xdd, 0xc7, 0x43, 0x91, 0xc0, 0x2a, 0x2d}}},
    {"TexVolFilteringCount", "TextureUnit", "Count of pixels that received volume filtering.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, {0x4bddc587, 0xd589, 0x8128, {0xe1, 0x8c, 0x76, 0x2e, 0xab, 0x2c, 0x87, 0x1f}}},
    {"NoTexVolFilteringCount", "TextureUnit", "Count of pixels that did not receive volume filtering.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, {0x9fe1a854, 0x17c6, 0x9d26, {0xb2, 0xb9, 0x80, 0x61, 0x0c, 0xd5, 0x82, 0x7d}}},
    {"TexAveAnisotropy", "TextureUnit", "The average degree of anisotropy applied. A number between 1 and 16. The anisotropic filtering algorithm only applies samples where they are required (e.g. there will be no extra anisotropic samples if the view vector is perpendicular to the surface) so this can be much lower than the requested anisotropy.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, {0x7ca2a2b9, 0xa4eb, 0xce23, {0xd1, 0x63, 0x59, 0x14, 0x7e, 0x67, 0x23, 0x96}}},
    {"DepthStencilTestBusy", "Timing", "Percentage of time GPU spent performing depth and stencil tests relative to GPUBusy.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, {0x6834fb52, 0x42e8, 0xbb50, {0xfd, 0x48, 0xec, 0x2f, 0x29, 0x04, 0xe7, 0xe0}}},
    {"DepthStencilTestBusyCount", "Timing", "Number of GPU cycles spent performing depth and stencil tests.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, {0xe02860fa, 0xc7bd, 0x90ea, {0x21, 0x49, 0x69, 0xb4, 0xe9, 0x8a, 0x63, 0x6c}}},
    {"HiZTilesAccepted", "DepthAndStencil", "Percentage of tiles accepted by HiZ and will be rendered to the depth or color buffers.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, {0x56176f45, 0xd7ff, 0x813d, {0x4f, 0x05, 0x3b, 0x2f, 0x04, 0x60, 0x67, 0xe7}}},
    {"HiZTilesAcceptedCount", "DepthAndStencil", "Count of tiles accepted by HiZ and will be rendered to the depth or color buffers.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, {0x95d4e3f6, 0xb2f0, 0xf26e, {0x84, 0x23, 0xaa, 0xcd, 0xfa, 0xf7, 0x9e, 0xa3}}},
    {"HiZTilesRejectedCount", "DepthAndStencil", "Count of tiles not accepted by HiZ.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, {0x156ba142, 0x7eeb, 0xaa6e, {0xa0, 0x0a, 0xf8, 0xae, 0xa4, 0xe4, 0x1e, 0x0b}}},
    {"PreZTilesDetailCulled", "DepthAndStencil", "Percentage of tiles rejected because the associated prim had no contributing area.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, {0xcad7f54d, 0xa044, 0x7574, {0xc4, 0x72, 0x6f, 0x20, 0x65, 0xcb, 0xee, 0xac}}},
    {"PreZTilesDetailCulledCount", "DepthAndStencil", "Count of tiles rejected because the associated primitive had no contributing area.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, {0x49262c8a, 0xb1e6, 0x90dd, {0xf0, 0x96, 0x0f, 0xc4, 0x92, 0x17, 0x15, 0xe9}}},
    {"PreZTilesDetailSurvivingCount", "DepthAndStencil", "Count of tiles surviving because the associated primitive had contributing area.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, {0xf803eaa4, 0xbbed, 0xbd39, {0x77, 0x5f, 0xa6, 0x4d, 0xf9, 0x2e, 0x2c, 0x08}}},
    {"HiZQuadsCulled", "DepthAndStencil", "Percentage of quads that did not have to continue on in the pipeline after HiZ. They may be written directly to the depth buffer, or culled completely. Consistently low values here may suggest that the Z-range is not being fully utilized.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, {0xfa0e319b, 0x5573, 0x6d34, {0x5b, 0xab, 0x90, 0x47, 0x69, 0x92, 0x50, 0x36}}},
    {"HiZQuadsCulledCount", "DepthAndStencil", "Count of quads that did not have to continue on in the pipeline after HiZ. They may be written directly to the depth buffer, or culled completely. Consistently low values here may suggest that the Z-range is not being fully utilized.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, {0x73b0b39d, 0x6df2, 0x3e24, {0x0b, 0x5c, 0x7c, 0xb0, 0xac, 0x8b, 0x6f, 0x39}}},
    {"HiZQuadsAcceptedCount", "DepthAndStencil", "Count of quads that did continue on in the pipeline after HiZ.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, {0x59049ad9, 0x42b5, 0xc7cb, {0x36, 0x16, 0x6a, 0x8f, 0x6a, 0x8e, 0x48, 0x94}}},
    {"PreZQuadsCulled", "DepthAndStencil", "Percentage of quads rejected based on the detailZ and earlyZ tests.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, {0x4e77547b, 0xec55, 0x5663, {0xf0, 0x34, 0xaf, 0x59, 0xbe, 0x66, 0xd7, 0x7d}}},
    {"PreZQuadsCulledCount", "DepthAndStencil", "Count of quads rejected based on the detailZ and earlyZ tests.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, {0x1bf169e6, 0x9304, 0x834e, {0xdf, 0x5f, 0x0c, 0x44, 0xd7, 0x89, 0x0a, 0x08}}},
    {"PreZQuadsSurvivingCount", "DepthAndStencil", "Count of quads surviving detailZ and earlyZ tests.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, {0x50e25e51, 0x3713, 0x89cb, {0x7f, 0x92, 0x55, 0x9c, 0xde, 0x5e, 0x55, 0x32}}},
    {"PostZQuads", "DepthAndStencil", "Percentage of quads for which the pixel shader will run and may be postZ tested.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, {0x58f0d34b, 0xeeb8, 0xe8db, {0xab, 0xce, 0xcb, 0x72, 0x58, 0x41, 0x44, 0xbe}}},
    {"PostZQuadCount", "DepthAndStencil", "Count of quads for which the pixel shader will run and may be postZ tested.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, {0x08404526, 0xce35, 0x939b, {0x34, 0xc8, 0xa7, 0xa3, 0x5a, 0x0f, 0xf4, 0xd6}}},
    {"PreZSamplesPassing", "DepthAndStencil", "Number of samples tested for Z before shading and passed.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, {0x3bfe6c4d, 0x7422, 0xca03, {0x7e, 0xa5, 0xe6, 0x7f, 0xf1, 0xa0, 0x01, 0x36}}},
    {"PreZSamplesFailingS", "DepthAndStencil", "Number of samples tested for Z before shading and failed stencil test.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, {0xdf7f705e, 0x5162, 0xd3b5, {0xda, 0x8b, 0x63, 0x46, 0x6c, 0xf9, 0xc4, 0xe5}}},
    {"PreZSamplesFailingZ", "DepthAndStencil", "Number of samples tested for Z before shading and failed Z test.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, {0x4484e950, 0xf7a4, 0x3800, {0xbc, 0x74, 0x78, 0xdd, 0x29, 0x7f, 0x01, 0x7e}}},
    {"PostZSamplesPassing", "DepthAndStencil", "Number of samples tested for Z after shading and passed.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, {0x4995d5d6, 0x2330, 0xb986, {0x50, 0x8b, 0xfa, 0xe2, 0x48, 0x56, 0xf4, 0x4c}}},
    {"PostZSamplesFailingS", "DepthAndStencil", "Number of samples tested for Z after shading and failed stencil test.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, {0xae558af4, 0xf4be, 0x3dd4, {0x73, 0x16, 0xb2, 0xc4, 0xdc, 0xf0, 0xde, 0xf8}}},
    {"PostZSamplesFailingZ", "DepthAndStencil", "Number of samples tested for Z after shading and failed Z test.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, {0xb3684c94, 0x814a, 0xc695, {0xc8, 0x5d, 0xa5, 0xb6, 0xab, 0x79, 0x8b, 0x35}}},
    {"ZUnitStalled", "DepthAndStencil", "The percentage of GPUTime the depth buffer spends waiting for the color buffer to be ready to accept data. High figures here indicate a bottleneck in color buffer operations.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, {0x5e86c3ad, 0x1726, 0x3157, {0x1d, 0x01, 0x7e, 0xd1, 0x88, 0xbf, 0x85, 0x4d}}},
    {"ZUnitStalledCycles", "DepthAndStencil", "Number of GPU cycles the depth buffer spends waiting for the color buffer to be ready to accept data. Larger numbers indicate a bottleneck in color buffer operations.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, {0x4351fa7f, 0x6737, 0x2c3e, {0x3f, 0xfb, 0xb3, 0xad, 0xdb, 0xdc, 0xee, 0xdd}}},
    {"DBMemRead", "DepthAndStencil", "Number of bytes read from the depth buffer.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_BYTES, {0xdcdb4ee7, 0xbd50, 0x00f7, {0xc0, 0x28, 0x9e, 0x5f, 0x4c, 0xe8, 0x88, 0xc0}}},
    {"DBMemWritten", "DepthAndStencil", "Number of bytes written to the depth buffer.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_BYTES, {0xde5717f8, 0x8a49, 0xee44, {0x46, 0x45, 0x10, 0xde, 0x51, 0xb3, 0x7d, 0xcf}}},
    {"CBMemRead", "ColorBuffer", "Number of bytes read from the color buffer.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_BYTES, {0x84b531d8, 0xa1f8, 0x7f49, {0x7c, 0x27, 0x7b, 0xc9, 0x78, 0x01, 0xf1, 0xe6}}},
    {"CBColorAndMaskRead", "ColorBuffer", "Total number of bytes read from the color and mask buffers.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_BYTES, {0xda41660e, 0xeb6f, 0x32ec, {0x8a, 0x64, 0xb3, 0x2c, 0xa1, 0x7b, 0xd7, 0xeb}}},
    {"CBMemWritten", "ColorBuffer", "Number of bytes written to the color buffer.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_BYTES, {0x550f8ff8, 0x60b6, 0xa6bf, {0x87, 0xd0, 0x25, 0xac, 0x9e, 0x87, 0xde, 0x70}}},
    {"CBColorAndMaskWritten", "ColorBuffer", "Total number of bytes written to the color and mask buffers.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_BYTES, {0x29a04b69, 0x8f5f, 0xb770, {0xa0, 0xf2, 0x34, 0x53, 0xe2, 0xc9, 0x9e, 0x49}}},
    {"CBSlowPixelPct", "ColorBuffer", "Percentage of pixels written to the color buffer using a half-rate or quarter-rate format.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, {0x5775943f, 0x0313, 0x7e52, {0x96, 0x38, 0xb2, 0x4a, 0x44, 0x91, 0x97, 0xbc}}},
    {"CBSlowPixelCount", "ColorBuffer", "Number of pixels written to the color buffer using a half-rate or quarter-rate format.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, {0x47eacbb0, 0x28c8, 0x22b4, {0x5c, 0x69, 0xc0, 0x0d, 0x58, 0x13, 0xbb, 0x1c}}},
    {"FetchSize", "GlobalMemory", "The total bytes fetched from the video memory. This is measured with all extra fetches and any cache or memory effects taken into account.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_KILOBYTES, {0x664bb3ef, 0x6eca, 0x86b1, {0x1e, 0x2d, 0x30, 0xcb, 0x89, 0x7b, 0x5f, 0xa9}}},
    {"WriteSize", "GlobalMemory", "The total bytes written to the video memory. This is measured with all extra fetches and any cache or memory effects taken into account.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_KILOBYTES, {0xf96f2c16, 0xb1b4, 0x4ec4, {0x22, 0x9c, 0xfc, 0x82, 0xe6, 0xf8, 0x0a, 0x82}}},
    {"L2CacheHit", "GlobalMemory", "The percentage of fetch, write, atomic, and other instructions that hit the L2 cache. Value range: 0% (no hit) to 100% (optimal).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, {0xd78fdf66, 0x104f, 0x8372, {0x02, 0xc1, 0x91, 0xd0, 0x7d, 0x7d, 0xc6, 0x2e}}},
    {"L2CacheMiss", "GlobalMemory", "The percentage of fetch, write, atomic, and other instructions that miss the L2 cache. Value range: 0% (optimal) to 100% (all miss).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, {0x4cd70885, 0x41b3, 0x25cd, {0x92, 0xdb, 0xc7, 0x6a, 0x0d, 0xec, 0xc6, 0x34}}},
    {"L2CacheHitCount", "GlobalMemory", "Count of fetch, write, atomic, and other instructions that hit the L2 cache.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, {0xd0bce171, 0x560c, 0x1895, {0x66, 0xb3, 0xbc, 0x56, 0xab, 0xcc, 0xb0, 0x77}}},
    {"L2CacheMissCount", "GlobalMemory", "Count of fetch, write, atomic, and other instructions that miss the L2 cache.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, {0xf2ab3a1a, 0xead6, 0x9893, {0x96, 0x1b, 0x88, 0xba, 0x2a, 0x75, 0x88, 0x07}}},
    {"MemUnitBusy", "GlobalMemory", "The percentage of GPUTime the memory unit is active. The result includes the stall time (MemUnitStalled). This is measured with all extra fetches and writes and any cache or memory effects taken into account. Value range: 0% to 100% (fetch-bound).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, {0xa1efa380, 0x4a72, 0xe066, {0xe0, 0x6a, 0x2a, 0xb7, 0x1a, 0x48, 0x85, 0x21}}},
    {"MemUnitStalled", "GlobalMemory", "The percentage of GPUTime the memory unit is stalled. Try reducing the number or size of fetches and writes if possible. Value range: 0% (optimal) to 100% (bad).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, {0x465ba54f, 0xd250, 0x1453, {0x79, 0x0a, 0x73, 0x1b, 0x10, 0xd2, 0x30, 0xb1}}},
    {"WriteUnitStalled", "GlobalMemory", "The percentage of GPUTime the Write unit is stalled. Value range: 0% to 100% (bad).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, {0x594ad3ce, 0xd1ec, 0x10fc, {0x7d, 0x59, 0x25, 0x73, 0x8e, 0x39, 0x7d, 0x72}}},
};

