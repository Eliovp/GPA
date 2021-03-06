//==============================================================================
// Copyright (c) 2010-2018 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief PublicCounterDefinitions for GLGFX9
//==============================================================================

#include "PublicCounterDefsGLGfx9.h"

// *** Note, this is an auto-generated file. Do not edit. Execute PublicCounterCompiler to rebuild.

void AutoDefinePublicCountersGLGfx9(GPA_PublicCounters& p)
{
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(16129);

        p.DefinePublicCounter("GPUTime", "Timing", "Time this API call took to execute on the GPU in milliseconds. Does not include time that draw calls are processed in parallel.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_MILLISECONDS, internalCounters, "0,TS_FREQ,/,(1000),*", "00bfa9cd-5512-48e8-7055-7b592113b8cb");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(3098);
        internalCounters.push_back(3096);

        p.DefinePublicCounter("GPUBusy", "Timing", "The percentage of time GPU was busy.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,1,/,(100),*,(100),min", "bef38bf3-1167-0844-81f0-67d2d28ddbc5");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(3098);

        p.DefinePublicCounter("GPUBusyCycles", "Timing", "Number of GPU cycles that the GPU was busy.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "0", "1e84970d-7014-2b8d-d61e-388b5f782691");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(15917);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("TessellatorBusy", "Timing", "The percentage of time the tessellation engine is busy.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,NUM_PRIM_PIPES,/,1,/,(100),*", "36af6c72-dcfb-8102-4fd4-ce8ddc573365");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(15917);

        p.DefinePublicCounter("TessellatorBusyCycles", "Timing", "Number of GPU cycles that the tessellation engine is busy.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "0,NUM_PRIM_PIPES,/", "60289dcb-7b33-46e7-26d1-8a2121605543");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(3934);
        internalCounters.push_back(3943);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("VSBusy", "Timing", "The percentage of time the ShaderUnit has vertex shader work to do.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "(0),0,1,ifnotzero,2,/,(100),*,(100),min", "94caad5e-867c-6c09-cf3a-d05b51df8f3b");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(3934);
        internalCounters.push_back(3943);

        p.DefinePublicCounter("VSBusyCycles", "Timing", "Number of GPU cycles that the ShaderUnit has vertex shader work to do.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "(0),0,1,ifnotzero", "a2086d4e-274b-48a8-3e08-a4ab76ac15dd");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(16129);
        internalCounters.push_back(3934);
        internalCounters.push_back(3943);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("VSTime", "Timing", "Time vertex shaders are busy in milliseconds.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_MILLISECONDS, internalCounters, "(0),1,2,ifnotzero,3,/,(1),min,0,TS_FREQ,/,(1000),*,*", "fee660c7-8e01-4dc5-e5d0-fcb61c17fb2c");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(3965);
        internalCounters.push_back(3971);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("HSBusy", "Timing", "The percentage of time the ShaderUnit has hull shader work to do.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "(0),0,1,ifnotzero,2,/,(100),*,(100),min", "16f30a0b-4cbf-eccd-b13f-ab68dd254d32");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(3965);
        internalCounters.push_back(3971);

        p.DefinePublicCounter("HSBusyCycles", "Timing", "Number of GPU cycles that the ShaderUnit has hull shader work to do.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "(0),0,1,ifnotzero", "753e76ef-8ef8-3f13-b511-4bd9f3589fdb");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(16129);
        internalCounters.push_back(3965);
        internalCounters.push_back(3971);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("HSTime", "Timing", "Time hull shaders are busy in milliseconds.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_MILLISECONDS, internalCounters, "(0),1,2,ifnotzero,3,/,(1),min,0,TS_FREQ,/,(1000),*,*", "8792e9f1-fb39-b92a-b230-f33df4c8a0de");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(3953);
        internalCounters.push_back(3956);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("GSBusy", "Timing", "The percentage of time the ShaderUnit has geometry shader work to do.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "(0),0,1,ifnotzero,2,/,(100),*,(100),min", "876f36d8-d046-833f-7832-673cbffd0a45");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(3953);
        internalCounters.push_back(3956);

        p.DefinePublicCounter("GSBusyCycles", "Timing", "Number of GPU cycles that the ShaderUnit has geometry shader work to do.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "(0),0,1,ifnotzero", "48203b6b-8983-c067-d63e-05da8be5111b");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(16129);
        internalCounters.push_back(3953);
        internalCounters.push_back(3956);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("GSTime", "Timing", "Time geometry shaders are busy in milliseconds.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_MILLISECONDS, internalCounters, "(0),1,2,ifnotzero,3,/,(1),min,0,TS_FREQ,/,(1000),*,*", "86d56794-f391-b601-9388-851b646d346c");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(3987);
        internalCounters.push_back(3992);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("PSBusy", "Timing", "The percentage of time the ShaderUnit has pixel shader work to do.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "(0),0,1,ifnotzero,2,/,(100),*,(100),min", "7e772beb-d82c-bd9a-aed0-fe504d416ce5");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(3987);
        internalCounters.push_back(3992);

        p.DefinePublicCounter("PSBusyCycles", "Timing", "Number of GPU cycles that the ShaderUnit has pixel shader work to do.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "(0),0,1,ifnotzero", "b58bea04-ce8e-2984-80f4-8aba7d4c817b");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(16129);
        internalCounters.push_back(3987);
        internalCounters.push_back(3992);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("PSTime", "Timing", "Time pixel shaders are busy in milliseconds.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_MILLISECONDS, internalCounters, "(0),1,2,ifnotzero,3,/,(1),min,0,TS_FREQ,/,(1000),*,*", "f564ee00-ffcf-f7f6-fcbf-f200205cd0cc");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(3975);
        internalCounters.push_back(3979);
        internalCounters.push_back(3981);
        internalCounters.push_back(3985);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("CSBusy", "Timing", "The percentage of time the ShaderUnit has compute shader work to do.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "(0),0,1,ifnotzero,(0),2,3,ifnotzero,max,4,/,(100),*,(100),min", "493fdd90-8d2b-a055-5e4e-2d29c3396b8c");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(3975);
        internalCounters.push_back(3979);
        internalCounters.push_back(3981);
        internalCounters.push_back(3985);

        p.DefinePublicCounter("CSBusyCycles", "Timing", "Number of GPU cycles that the ShaderUnit has compute shader work to do.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "(0),0,1,ifnotzero,(0),2,3,ifnotzero,max", "39bcf1b8-f6b2-4c37-f9af-0a2bb59512f9");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(16129);
        internalCounters.push_back(3975);
        internalCounters.push_back(3979);
        internalCounters.push_back(3981);
        internalCounters.push_back(3985);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("CSTime", "Timing", "Time compute shaders are busy in milliseconds.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_MILLISECONDS, internalCounters, "(0),1,2,ifnotzero,(0),3,4,ifnotzero,max,5,/,(1),min,0,TS_FREQ,/,(1000),*,*", "5177faaf-f59d-ee23-6e36-0ea087dca9dc");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(15812);
        internalCounters.push_back(15793);
        internalCounters.push_back(15888);

        p.DefinePublicCounter("VSVerticesIn", "VertexShader", "The number of vertices processed by the VS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,1,ifnotzero,2,2,ifnotzero", "810a04c8-2ff4-081d-766d-bfa2bd4ad916");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(5277);
        internalCounters.push_back(5255);

        p.DefinePublicCounter("VSVALUInstCount", "VertexShader", "Average number of vector ALU instructions executed in the VS. Affected by flow control.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,/", "8ec604e4-63f5-e6b5-4558-c38f0b26d4b1");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(5281);
        internalCounters.push_back(5255);

        p.DefinePublicCounter("VSSALUInstCount", "VertexShader", "Average number of scalar ALU instructions executed in the VS. Affected by flow control.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,/", "e3da0383-7322-7f65-8cf2-3ce641578e54");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(5322);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("VSVALUBusy", "VertexShader", "The percentage of GPUTime vector ALU instructions are being processed by the VS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,(4),*,NUM_SIMDS,/,1,/,(100),*", "8b3572f7-fda0-eddf-6c93-2ab145b8754b");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(5322);

        p.DefinePublicCounter("VSVALUBusyCycles", "VertexShader", "Number of GPU cycles where vector ALU instructions are being processed by the VS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "0", "0af1686e-6d77-2f6e-2862-7bb8e869a776");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(5335);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("VSSALUBusy", "VertexShader", "The percentage of GPUTime scalar ALU instructions are being processed by the VS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,(4),*,NUM_SIMDS,NUM_SHADER_ENGINES,/,/,1,/,(100),*", "3bc8730c-e3bc-e2f0-7d24-36974064c25a");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(5335);

        p.DefinePublicCounter("VSSALUBusyCycles", "VertexShader", "Number of GPU cycles where scalar ALU instructions are being processed by the VS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "0,(4),*,NUM_SIMDS,NUM_SHADER_ENGINES,/,/", "357ac7cd-2e1c-dcb0-77f6-37527237f35b");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(15897);

        p.DefinePublicCounter("HSPatches", "HullShader", "The number of patches processed by the HS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0", "d1bbd27d-d591-4509-df52-d329fb73a98f");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(6399);
        internalCounters.push_back(6377);

        p.DefinePublicCounter("HSVALUInstCount", "HullShader", "Average number of vector ALU instructions executed in the HS. Affected by flow control.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,/", "786673bf-d58f-9895-3a37-9d6efb5e5804");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(6403);
        internalCounters.push_back(6377);

        p.DefinePublicCounter("HSSALUInstCount", "HullShader", "Average number of scalar ALU instructions executed in the HS. Affected by flow control.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,/", "1af675c4-cb0b-c4c5-c131-2796750f683e");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(6444);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("HSVALUBusy", "HullShader", "The percentage of GPUTime vector ALU instructions are being processed by the HS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,(4),*,NUM_SIMDS,/,1,/,(100),*", "7880d192-8015-0311-d43e-fb0b7a4df179");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(6444);

        p.DefinePublicCounter("HSVALUBusyCycles", "HullShader", "Number of GPU cycles vector where ALU instructions are being processed by the HS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "0,(4),*,NUM_SIMDS,/", "3afb94e4-e937-5730-0cc9-41d3113ba012");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(6457);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("HSSALUBusy", "HullShader", "The percentage of GPUTime scalar ALU instructions are being processed by the HS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,(4),*,NUM_SIMDS,NUM_SHADER_ENGINES,/,/,1,/,(100),*", "34748a4b-9148-0b06-b7b9-5700d6631bde");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(6457);

        p.DefinePublicCounter("HSSALUBusyCycles", "HullShader", "Number of GPU cycles where scalar ALU instructions are being processed by the HS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "0,(4),*,NUM_SIMDS,NUM_SHADER_ENGINES,/,/", "9bceabf7-3f01-2fd9-7b1d-8fe46c729efc");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(15801);

        p.DefinePublicCounter("GSPrimsIn", "GeometryShader", "The number of primitives passed into the GS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0", "20c29866-509a-aaab-2697-6b2c38f79953");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(15812);
        internalCounters.push_back(15793);

        p.DefinePublicCounter("GSVerticesOut", "GeometryShader", "The number of vertices output by the GS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "(0),0,1,ifnotzero", "775b9736-319a-bd8a-48c9-68db9c91d978");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(4903);
        internalCounters.push_back(4881);

        p.DefinePublicCounter("GSVALUInstCount", "GeometryShader", "Average number of vector ALU instructions executed in the GS. Affected by flow control.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,/", "21b12bfa-b8cd-2e71-a2d5-f9e9f1d65d61");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(4907);
        internalCounters.push_back(4881);

        p.DefinePublicCounter("GSSALUInstCount", "GeometryShader", "Average number of scalar ALU instructions executed in the GS. Affected by flow control.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,/", "a8562594-d335-ca43-61bf-03b72d2b98a5");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(4948);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("GSVALUBusy", "GeometryShader", "The percentage of GPUTime vector ALU instructions are being processed by the GS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,(4),*,NUM_SIMDS,/,1,/,(100),*", "228a4818-1e56-cebb-0720-3b2cdc057a6f");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(4948);

        p.DefinePublicCounter("GSVALUBusyCycles", "GeometryShader", "Number of GPU cycles where vector ALU instructions are being processed by the GS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "0,(4),*,NUM_SIMDS,/", "be217edd-226f-bd97-9a48-46e2809b1933");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(4961);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("GSSALUBusy", "GeometryShader", "The percentage of GPUTime scalar ALU instructions are being processed by the GS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,(4),*,NUM_SIMDS,NUM_SHADER_ENGINES,/,/,1,/,(100),*", "f28ce300-800e-9822-39e4-f48528bdb935");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(4961);

        p.DefinePublicCounter("GSSALUBusyCycles", "GeometryShader", "Number of GPU cycles where scalar ALU instructions are being processed by the GS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "0,(4),*,NUM_SIMDS,NUM_SHADER_ENGINES,/,/", "b3eace7c-3bc4-0107-887f-923851dc8ea7");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(3255);
        internalCounters.push_back(3259);
        internalCounters.push_back(3211);
        internalCounters.push_back(3223);
        internalCounters.push_back(3212);
        internalCounters.push_back(3224);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("PrimitiveAssemblyBusy", "Timing", "The percentage of GPUTime that primitive assembly (clipping and culling) is busy. High values may be caused by having many small primitives; mid to low values may indicate pixel shader or output buffer bottleneck.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,1,-,2,3,+,4,+,5,(2),*,+,SU_CLOCKS_PRIM,*,-,NUM_PRIM_PIPES,/,(0),max,6,/,(100),*,(100),min", "54ac5640-c4d7-95e2-20e0-6a9fdfc07333");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(3255);
        internalCounters.push_back(3259);
        internalCounters.push_back(3211);
        internalCounters.push_back(3223);
        internalCounters.push_back(3212);
        internalCounters.push_back(3224);

        p.DefinePublicCounter("PrimitiveAssemblyBusyCycles", "Timing", "Number of GPU cycles the primitive assembly (clipping and culling) is busy. High values may be caused by having many small primitives; mid to low values may indicate pixel shader or output buffer bottleneck.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "0,1,-,2,3,+,4,+,5,(2),*,+,SU_CLOCKS_PRIM,*,-,NUM_PRIM_PIPES,/,(0),max", "99777f2d-9626-c78a-a97c-c4505eba1e5f");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(3158);

        p.DefinePublicCounter("PrimitivesIn", "PrimitiveAssembly", "The number of primitives received by the hardware. This includes primitives generated by tessellation.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0", "a515b80d-75c3-c7d2-0d2f-d7766b4759a6");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(3164);
        internalCounters.push_back(3204);
        internalCounters.push_back(3205);
        internalCounters.push_back(3206);
        internalCounters.push_back(3207);

        p.DefinePublicCounter("CulledPrims", "PrimitiveAssembly", "The number of culled primitives. Typical reasons include scissor, the primitive having zero area, and back or front face culling.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,+,2,+,3,+,4,+", "589bdf55-9192-280a-41c3-584bc94f2562");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(3171);

        p.DefinePublicCounter("ClippedPrims", "PrimitiveAssembly", "The number of primitives that required one or more clipping operations due to intersecting the view volume or user clip planes.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0", "5ef6f9d5-155e-5baa-163f-8359d9ea9bbf");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(3259);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("PAStalledOnRasterizer", "PrimitiveAssembly", "Percentage of GPUTime that primitive assembly waits for rasterization to be ready to accept data. This roughly indicates for what percentage of time the pipeline is bottlenecked by pixel operations.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,NUM_PRIM_PIPES,/,1,/,(100),*", "6f9f416b-53c1-0457-f88c-7b6ba8973974");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(3259);

        p.DefinePublicCounter("PAStalledOnRasterizerCycles", "PrimitiveAssembly", "Number of GPU cycles the primitive assembly waits for rasterization to be ready to accept data. Indicates the number of GPU cycles the pipeline is bottlenecked by pixel operations.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "0,NUM_PRIM_PIPES,/", "7a8c492a-c566-9328-6805-760dbff5c0f2");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(7133);
        internalCounters.push_back(7138);
        internalCounters.push_back(7143);
        internalCounters.push_back(7148);

        p.DefinePublicCounter("PSPixelsOut", "PixelShader", "Pixels exported from shader to color buffers. Does not include killed or alpha tested pixels; if there are multiple render targets, each render target receives one export, so this will be 2 for 1 pixel written to two RTs.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,sum4", "24cba16c-baa6-6ecd-95ad-92ecb1338da1");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(7135);
        internalCounters.push_back(7140);
        internalCounters.push_back(7145);
        internalCounters.push_back(7150);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("PSExportStalls", "PixelShader", "Pixel shader output stalls. Percentage of GPUBusy. Should be zero for PS or further upstream limited cases; if not zero, indicates a bottleneck in late Z testing or in the color buffer.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,1,max,2,max,3,max,4,/,NUM_SHADER_ENGINES,/,(100),*", "9b4f466c-ff97-22bb-557d-84d3c4c51895");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(7135);
        internalCounters.push_back(7140);
        internalCounters.push_back(7145);
        internalCounters.push_back(7150);

        p.DefinePublicCounter("PSExportStallsCycles", "PixelShader", "Number of GPU cycles the pixel shader output stalls. Should be zero for PS or further upstream limited cases; if not zero, indicates a bottleneck in late Z testing or in the color buffer.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "0,1,max,2,max,3,max,NUM_SHADER_ENGINES,/", "47c72aad-64e6-0864-d533-d8e0bc27c156");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(5651);
        internalCounters.push_back(5629);

        p.DefinePublicCounter("PSVALUInstCount", "PixelShader", "Average number of vector ALU instructions executed in the PS. Affected by flow control.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,/", "eb74389e-435c-4137-ecf1-39eb5bc1cbfe");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(5655);
        internalCounters.push_back(5629);

        p.DefinePublicCounter("PSSALUInstCount", "PixelShader", "Average number of scalar ALU instructions executed in the PS. Affected by flow control.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,/", "e6a06580-8a82-96d6-976c-acc121fc5516");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(5696);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("PSVALUBusy", "PixelShader", "The percentage of GPUTime vector ALU instructions are being processed by the PS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,(4),*,NUM_SIMDS,/,1,/,(100),*", "6ce6fef7-8e33-10b4-f351-af755e177e85");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(5696);

        p.DefinePublicCounter("PSVALUBusyCycles", "PixelShader", "Number of GPU cycles where vector ALU instructions are being processed by the PS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "0,(4),*,NUM_SIMDS,/", "1e276f86-cd2a-72e7-fc9d-004f666f2981");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(5709);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("PSSALUBusy", "PixelShader", "The percentage of GPUTime scalar ALU instructions are being processed by the PS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,(4),*,NUM_SIMDS,NUM_SHADER_ENGINES,/,/,1,/,(100),*", "2ff9f34f-e94b-af4d-18c2-5fbbf6d1727a");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(5709);

        p.DefinePublicCounter("PSSALUBusyCycles", "PixelShader", "Number of GPU cycles where scalar ALU instructions are being processed by the PS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "0,(4),*,NUM_SIMDS,NUM_SHADER_ENGINES,/,/", "29808906-f128-b078-fc79-820a4b3b3b8d");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(3976);
        internalCounters.push_back(3982);

        p.DefinePublicCounter("CSThreadGroups", "ComputeShader", "Total number of thread groups.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,+", "8ce3fc80-56b2-97f9-8e70-2e8c747cea68");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(6751);

        p.DefinePublicCounter("CSWavefronts", "ComputeShader", "The total number of wavefronts used for the CS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0", "42379c6e-369b-c237-8b25-cdb9cdc65c4d");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(6761);

        p.DefinePublicCounter("CSThreads", "ComputeShader", "The number of CS threads processed by the hardware.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0", "7a648013-6eac-2665-ac36-13c6f4ac9c26");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(6773);
        internalCounters.push_back(6751);

        p.DefinePublicCounter("CSVALUInsts", "ComputeShader", "The average number of vector ALU instructions executed per work-item (affected by flow control).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "(0),0,1,/,1,ifnotzero", "376cb1cc-5a40-9d1d-404c-f1736c0c5084");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(6832);
        internalCounters.push_back(6818);

        p.DefinePublicCounter("CSVALUUtilization", "ComputeShader", "The percentage of active vector ALU threads in a wave. A lower number can mean either more thread divergence in a wave or that the work-group size is not a multiple of 64. Value range: 0% (bad), 100% (ideal - no thread divergence).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "(0),0,1,(64),*,/,(100),*,1,ifnotzero,(100),min", "4476879e-cdc0-d602-b24e-9b4a8d38438f");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(6777);
        internalCounters.push_back(6751);

        p.DefinePublicCounter("CSSALUInsts", "ComputeShader", "The average number of scalar ALU instructions executed per work-item (affected by flow control).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "(0),0,1,/,1,ifnotzero", "eb211144-8136-ff86-e8bf-4d0493a904cb");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(6775);
        internalCounters.push_back(7430);
        internalCounters.push_back(7549);
        internalCounters.push_back(7668);
        internalCounters.push_back(7787);
        internalCounters.push_back(7906);
        internalCounters.push_back(8025);
        internalCounters.push_back(8144);
        internalCounters.push_back(8263);
        internalCounters.push_back(8382);
        internalCounters.push_back(8501);
        internalCounters.push_back(8620);
        internalCounters.push_back(8739);
        internalCounters.push_back(8858);
        internalCounters.push_back(8977);
        internalCounters.push_back(9096);
        internalCounters.push_back(9215);
        internalCounters.push_back(6751);

        p.DefinePublicCounter("CSVFetchInsts", "ComputeShader", "The average number of vector fetch instructions from the video memory executed per work-item (affected by flow control).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "(0),0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,sum16,-,17,/,17,ifnotzero", "3e2829c0-6215-783b-c271-6d57ff2c520e");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(6778);
        internalCounters.push_back(6751);

        p.DefinePublicCounter("CSSFetchInsts", "ComputeShader", "The average number of scalar fetch instructions from the video memory executed per work-item (affected by flow control).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "(0),0,1,/,1,ifnotzero", "da09171c-6a0a-584f-fddc-dc5062d63a3e");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(6774);
        internalCounters.push_back(7431);
        internalCounters.push_back(7550);
        internalCounters.push_back(7669);
        internalCounters.push_back(7788);
        internalCounters.push_back(7907);
        internalCounters.push_back(8026);
        internalCounters.push_back(8145);
        internalCounters.push_back(8264);
        internalCounters.push_back(8383);
        internalCounters.push_back(8502);
        internalCounters.push_back(8621);
        internalCounters.push_back(8740);
        internalCounters.push_back(8859);
        internalCounters.push_back(8978);
        internalCounters.push_back(9097);
        internalCounters.push_back(9216);
        internalCounters.push_back(6751);

        p.DefinePublicCounter("CSVWriteInsts", "ComputeShader", "The average number of vector write instructions to the video memory executed per work-item (affected by flow control).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "(0),0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,sum16,-,17,/,17,ifnotzero", "43438c22-e910-b377-b767-b32902e0df0d");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(6779);
        internalCounters.push_back(6780);
        internalCounters.push_back(6751);

        p.DefinePublicCounter("CSFlatVMemInsts", "ComputeShader", "The average number of FLAT instructions that read from or write to the video memory executed per work item (affected by flow control). Includes FLAT instructions that read from or write to scratch.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "(0),0,1,-,2,/,2,ifnotzero", "2570b477-13e3-f5b6-e6ff-7159373bc74d");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(6818);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("CSVALUBusy", "ComputeShader", "The percentage of GPUTime vector ALU instructions are processed. Value range: 0% (bad) to 100% (optimal).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,(4),*,NUM_SIMDS,/,1,/,(100),*", "f1e64815-f6a8-c277-d4f9-d054b443e205");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(6818);

        p.DefinePublicCounter("CSVALUBusyCycles", "ComputeShader", "Number of GPU cycles where vector ALU instructions are processed.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "0,(4),*,NUM_SIMDS,/", "2d0d5852-2658-eb73-68d2-f23f7118c9c3");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(6831);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("CSSALUBusy", "ComputeShader", "The percentage of GPUTime scalar ALU instructions are processed. Value range: 0% (bad) to 100% (optimal).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,(4),*,NUM_SIMDS,NUM_SHADER_ENGINES,/,/,1,/,(100),*", "3fc35f4e-9882-94e3-6f5f-4e81cd97082a");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(6831);

        p.DefinePublicCounter("CSSALUBusyCycles", "ComputeShader", "Number of GPU cycles where scalar ALU instructions are processed.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "0,(4),*,NUM_SIMDS,NUM_SHADER_ENGINES,/,/", "de58f8fc-8ed4-a799-648d-62ded7b1c4c4");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(7344);
        internalCounters.push_back(7463);
        internalCounters.push_back(7582);
        internalCounters.push_back(7701);
        internalCounters.push_back(7820);
        internalCounters.push_back(7939);
        internalCounters.push_back(8058);
        internalCounters.push_back(8177);
        internalCounters.push_back(8296);
        internalCounters.push_back(8415);
        internalCounters.push_back(8534);
        internalCounters.push_back(8653);
        internalCounters.push_back(8772);
        internalCounters.push_back(8891);
        internalCounters.push_back(9010);
        internalCounters.push_back(9129);
        internalCounters.push_back(3098);
        internalCounters.push_back(3976);
        internalCounters.push_back(3982);

        p.DefinePublicCounter("CSMemUnitBusy", "ComputeShader", "The percentage of GPUTime the memory unit is active. The result includes the stall time (MemUnitStalled). This is measured with all extra fetches and writes and any cache or memory effects taken into account. Value range: 0% to 100% (fetch-bound).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "(0),0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16,16,/,NUM_SHADER_ENGINES,/,(100),*,17,18,+,ifnotzero", "42ab96e1-0a24-96c8-c4ff-098fa267d78e");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(7344);
        internalCounters.push_back(7463);
        internalCounters.push_back(7582);
        internalCounters.push_back(7701);
        internalCounters.push_back(7820);
        internalCounters.push_back(7939);
        internalCounters.push_back(8058);
        internalCounters.push_back(8177);
        internalCounters.push_back(8296);
        internalCounters.push_back(8415);
        internalCounters.push_back(8534);
        internalCounters.push_back(8653);
        internalCounters.push_back(8772);
        internalCounters.push_back(8891);
        internalCounters.push_back(9010);
        internalCounters.push_back(9129);

        p.DefinePublicCounter("CSMemUnitBusyCycles", "ComputeShader", "Number of GPU cycles the memory unit is active. The result includes the stall time (MemUnitStalled). This is measured with all extra fetches and writes and any cache or memory effects taken into account.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16,NUM_SHADER_ENGINES,/", "39d5687f-c727-7c0c-af82-bb711d3897ed");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(14317);
        internalCounters.push_back(14402);
        internalCounters.push_back(14487);
        internalCounters.push_back(14572);
        internalCounters.push_back(14657);
        internalCounters.push_back(14742);
        internalCounters.push_back(14827);
        internalCounters.push_back(14912);
        internalCounters.push_back(14997);
        internalCounters.push_back(15082);
        internalCounters.push_back(15167);
        internalCounters.push_back(15252);
        internalCounters.push_back(15337);
        internalCounters.push_back(15422);
        internalCounters.push_back(15507);
        internalCounters.push_back(15592);
        internalCounters.push_back(3098);
        internalCounters.push_back(3976);
        internalCounters.push_back(3982);

        p.DefinePublicCounter("CSMemUnitStalled", "ComputeShader", "The percentage of GPUTime the memory unit is stalled. Try reducing the number or size of fetches and writes if possible. Value range: 0% (optimal) to 100% (bad).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "(0),0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16,16,/,NUM_SHADER_ENGINES,/,(100),*,17,18,+,ifnotzero", "f18e8679-1511-d533-d9ee-4365197f7d0c");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(14317);
        internalCounters.push_back(14402);
        internalCounters.push_back(14487);
        internalCounters.push_back(14572);
        internalCounters.push_back(14657);
        internalCounters.push_back(14742);
        internalCounters.push_back(14827);
        internalCounters.push_back(14912);
        internalCounters.push_back(14997);
        internalCounters.push_back(15082);
        internalCounters.push_back(15167);
        internalCounters.push_back(15252);
        internalCounters.push_back(15337);
        internalCounters.push_back(15422);
        internalCounters.push_back(15507);
        internalCounters.push_back(15592);

        p.DefinePublicCounter("CSMemUnitStalledCycles", "ComputeShader", "Number of GPU cycles the memory unit is stalled. Try reducing the number or size of fetches and writes if possible.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16,NUM_SHADER_ENGINES,/", "51991c84-ed2b-bf31-c4ab-8f8e9eb8f29f");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(14371);
        internalCounters.push_back(14456);
        internalCounters.push_back(14541);
        internalCounters.push_back(14626);
        internalCounters.push_back(14711);
        internalCounters.push_back(14796);
        internalCounters.push_back(14881);
        internalCounters.push_back(14966);
        internalCounters.push_back(15051);
        internalCounters.push_back(15136);
        internalCounters.push_back(15221);
        internalCounters.push_back(15306);
        internalCounters.push_back(15391);
        internalCounters.push_back(15476);
        internalCounters.push_back(15561);
        internalCounters.push_back(15646);
        internalCounters.push_back(14380);
        internalCounters.push_back(14465);
        internalCounters.push_back(14550);
        internalCounters.push_back(14635);
        internalCounters.push_back(14720);
        internalCounters.push_back(14805);
        internalCounters.push_back(14890);
        internalCounters.push_back(14975);
        internalCounters.push_back(15060);
        internalCounters.push_back(15145);
        internalCounters.push_back(15230);
        internalCounters.push_back(15315);
        internalCounters.push_back(15400);
        internalCounters.push_back(15485);
        internalCounters.push_back(15570);
        internalCounters.push_back(15655);
        internalCounters.push_back(14381);
        internalCounters.push_back(14466);
        internalCounters.push_back(14551);
        internalCounters.push_back(14636);
        internalCounters.push_back(14721);
        internalCounters.push_back(14806);
        internalCounters.push_back(14891);
        internalCounters.push_back(14976);
        internalCounters.push_back(15061);
        internalCounters.push_back(15146);
        internalCounters.push_back(15231);
        internalCounters.push_back(15316);
        internalCounters.push_back(15401);
        internalCounters.push_back(15486);
        internalCounters.push_back(15571);
        internalCounters.push_back(15656);
        internalCounters.push_back(14382);
        internalCounters.push_back(14467);
        internalCounters.push_back(14552);
        internalCounters.push_back(14637);
        internalCounters.push_back(14722);
        internalCounters.push_back(14807);
        internalCounters.push_back(14892);
        internalCounters.push_back(14977);
        internalCounters.push_back(15062);
        internalCounters.push_back(15147);
        internalCounters.push_back(15232);
        internalCounters.push_back(15317);
        internalCounters.push_back(15402);
        internalCounters.push_back(15487);
        internalCounters.push_back(15572);
        internalCounters.push_back(15657);
        internalCounters.push_back(14383);
        internalCounters.push_back(14468);
        internalCounters.push_back(14553);
        internalCounters.push_back(14638);
        internalCounters.push_back(14723);
        internalCounters.push_back(14808);
        internalCounters.push_back(14893);
        internalCounters.push_back(14978);
        internalCounters.push_back(15063);
        internalCounters.push_back(15148);
        internalCounters.push_back(15233);
        internalCounters.push_back(15318);
        internalCounters.push_back(15403);
        internalCounters.push_back(15488);
        internalCounters.push_back(15573);
        internalCounters.push_back(15658);

        p.DefinePublicCounter("L1CacheHit", "GlobalMemory", "The percentage of fetch, write, atomic, and other instructions that hit the data in L1 cache. Value range: 0% (no hit) to 100% (optimal).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "(0),(1),16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,sum64,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,/,-,(100),*,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,ifnotzero", "6deaf002-3cac-2d2d-7b89-566c7a52b08e");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(14371);
        internalCounters.push_back(14456);
        internalCounters.push_back(14541);
        internalCounters.push_back(14626);
        internalCounters.push_back(14711);
        internalCounters.push_back(14796);
        internalCounters.push_back(14881);
        internalCounters.push_back(14966);
        internalCounters.push_back(15051);
        internalCounters.push_back(15136);
        internalCounters.push_back(15221);
        internalCounters.push_back(15306);
        internalCounters.push_back(15391);
        internalCounters.push_back(15476);
        internalCounters.push_back(15561);
        internalCounters.push_back(15646);
        internalCounters.push_back(14380);
        internalCounters.push_back(14465);
        internalCounters.push_back(14550);
        internalCounters.push_back(14635);
        internalCounters.push_back(14720);
        internalCounters.push_back(14805);
        internalCounters.push_back(14890);
        internalCounters.push_back(14975);
        internalCounters.push_back(15060);
        internalCounters.push_back(15145);
        internalCounters.push_back(15230);
        internalCounters.push_back(15315);
        internalCounters.push_back(15400);
        internalCounters.push_back(15485);
        internalCounters.push_back(15570);
        internalCounters.push_back(15655);
        internalCounters.push_back(14381);
        internalCounters.push_back(14466);
        internalCounters.push_back(14551);
        internalCounters.push_back(14636);
        internalCounters.push_back(14721);
        internalCounters.push_back(14806);
        internalCounters.push_back(14891);
        internalCounters.push_back(14976);
        internalCounters.push_back(15061);
        internalCounters.push_back(15146);
        internalCounters.push_back(15231);
        internalCounters.push_back(15316);
        internalCounters.push_back(15401);
        internalCounters.push_back(15486);
        internalCounters.push_back(15571);
        internalCounters.push_back(15656);
        internalCounters.push_back(14382);
        internalCounters.push_back(14467);
        internalCounters.push_back(14552);
        internalCounters.push_back(14637);
        internalCounters.push_back(14722);
        internalCounters.push_back(14807);
        internalCounters.push_back(14892);
        internalCounters.push_back(14977);
        internalCounters.push_back(15062);
        internalCounters.push_back(15147);
        internalCounters.push_back(15232);
        internalCounters.push_back(15317);
        internalCounters.push_back(15402);
        internalCounters.push_back(15487);
        internalCounters.push_back(15572);
        internalCounters.push_back(15657);
        internalCounters.push_back(14383);
        internalCounters.push_back(14468);
        internalCounters.push_back(14553);
        internalCounters.push_back(14638);
        internalCounters.push_back(14723);
        internalCounters.push_back(14808);
        internalCounters.push_back(14893);
        internalCounters.push_back(14978);
        internalCounters.push_back(15063);
        internalCounters.push_back(15148);
        internalCounters.push_back(15233);
        internalCounters.push_back(15318);
        internalCounters.push_back(15403);
        internalCounters.push_back(15488);
        internalCounters.push_back(15573);
        internalCounters.push_back(15658);

        p.DefinePublicCounter("L1CacheHitCount", "GlobalMemory", "Count of fetch, write, atomic, and other instructions that hit the data in L1 cache.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,sum64,-", "279c8bff-ec6a-f9bf-96d7-5e8000f77891");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(14380);
        internalCounters.push_back(14465);
        internalCounters.push_back(14550);
        internalCounters.push_back(14635);
        internalCounters.push_back(14720);
        internalCounters.push_back(14805);
        internalCounters.push_back(14890);
        internalCounters.push_back(14975);
        internalCounters.push_back(15060);
        internalCounters.push_back(15145);
        internalCounters.push_back(15230);
        internalCounters.push_back(15315);
        internalCounters.push_back(15400);
        internalCounters.push_back(15485);
        internalCounters.push_back(15570);
        internalCounters.push_back(15655);
        internalCounters.push_back(14381);
        internalCounters.push_back(14466);
        internalCounters.push_back(14551);
        internalCounters.push_back(14636);
        internalCounters.push_back(14721);
        internalCounters.push_back(14806);
        internalCounters.push_back(14891);
        internalCounters.push_back(14976);
        internalCounters.push_back(15061);
        internalCounters.push_back(15146);
        internalCounters.push_back(15231);
        internalCounters.push_back(15316);
        internalCounters.push_back(15401);
        internalCounters.push_back(15486);
        internalCounters.push_back(15571);
        internalCounters.push_back(15656);
        internalCounters.push_back(14382);
        internalCounters.push_back(14467);
        internalCounters.push_back(14552);
        internalCounters.push_back(14637);
        internalCounters.push_back(14722);
        internalCounters.push_back(14807);
        internalCounters.push_back(14892);
        internalCounters.push_back(14977);
        internalCounters.push_back(15062);
        internalCounters.push_back(15147);
        internalCounters.push_back(15232);
        internalCounters.push_back(15317);
        internalCounters.push_back(15402);
        internalCounters.push_back(15487);
        internalCounters.push_back(15572);
        internalCounters.push_back(15657);
        internalCounters.push_back(14383);
        internalCounters.push_back(14468);
        internalCounters.push_back(14553);
        internalCounters.push_back(14638);
        internalCounters.push_back(14723);
        internalCounters.push_back(14808);
        internalCounters.push_back(14893);
        internalCounters.push_back(14978);
        internalCounters.push_back(15063);
        internalCounters.push_back(15148);
        internalCounters.push_back(15233);
        internalCounters.push_back(15318);
        internalCounters.push_back(15403);
        internalCounters.push_back(15488);
        internalCounters.push_back(15573);
        internalCounters.push_back(15658);

        p.DefinePublicCounter("L1CacheMissCount", "GlobalMemory", "Count of fetch, write, atomic, and other instructions that miss the data in L1 cache.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,sum64", "6e4ee364-41d7-476d-361d-f47b266c15db");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(9336);
        internalCounters.push_back(9592);
        internalCounters.push_back(9848);
        internalCounters.push_back(10104);
        internalCounters.push_back(10360);
        internalCounters.push_back(10616);
        internalCounters.push_back(10872);
        internalCounters.push_back(11128);
        internalCounters.push_back(11384);
        internalCounters.push_back(11640);
        internalCounters.push_back(11896);
        internalCounters.push_back(12152);
        internalCounters.push_back(12408);
        internalCounters.push_back(12664);
        internalCounters.push_back(12920);
        internalCounters.push_back(13176);

        p.DefinePublicCounter("CSWriteUnitStalledCycles", "ComputeShader", "Number of GPU cycles the write unit is stalled.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16", "be164c60-5e48-acac-9622-29616d09aa9a");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(6782);
        internalCounters.push_back(6751);

        p.DefinePublicCounter("CSGDSInsts", "ComputeShader", "The average number of GDS read or GDS write instructions executed per work item (affected by flow control).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "(0),0,1,/,1,ifnotzero", "2a867f3e-4a37-ad16-55d1-f03d74707819");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(6781);
        internalCounters.push_back(6780);
        internalCounters.push_back(6751);

        p.DefinePublicCounter("CSLDSInsts", "ComputeShader", "The average number of LDS read/write instructions executed per work-item (affected by flow control).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "(0),0,1,-,2,/,2,ifnotzero", "61b0b351-7e06-ef8e-a8e0-7a9e3200a836");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(6780);
        internalCounters.push_back(6751);

        p.DefinePublicCounter("CSFlatLDSInsts", "ComputeShader", "The average number of FLAT instructions that read from or write to LDS executed per work item (affected by flow control).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "(0),0,1,/,1,ifnotzero", "99672cda-de2b-014c-482e-cf73b90068d5");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(4192);
        internalCounters.push_back(4133);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("CSALUStalledByLDS", "ComputeShader", "The percentage of GPUTime ALU units are stalled by the LDS input queue being full or the output queue being not ready. If there are LDS bank conflicts, reduce them. Otherwise, try reducing the number of LDS accesses if possible. Value range: 0% (optimal) to 100% (bad).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "(0),0,1,/,2,/,NUM_SHADER_ENGINES,/,(100),*,1,ifnotzero", "6dc4f1c2-bad0-c9ff-156e-883b319a752a");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(4192);

        p.DefinePublicCounter("CSALUStalledByLDSCycles", "ComputeShader", "Number of GPU cycles the ALU units are stalled by the LDS input queue being full or the output queue being not ready. If there are LDS bank conflicts, reduce them. Otherwise, try reducing the number of LDS accesses if possible.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "0,NUM_SHADER_ENGINES,/", "8f3d5f25-2159-0374-fafe-e26a7799b6c8");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(6840);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("CSLDSBankConflict", "ComputeShader", "The percentage of GPUTime LDS is stalled by bank conflicts. Value range: 0% (optimal) to 100% (bad).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,1,/,NUM_SIMDS,/,(100),*", "1065ee10-2e41-ea41-1eb3-b61b491752f4");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(6840);

        p.DefinePublicCounter("CSLDSBankConflictCycles", "ComputeShader", "Number of GPU cycles the LDS is stalled by bank conflicts. Value range: 0 (optimal) to GPUBusyCycles (bad).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "0,NUM_SIMDS,/", "1fd1adf3-c51e-94fd-083e-c482a0a0809e");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(7344);
        internalCounters.push_back(7463);
        internalCounters.push_back(7582);
        internalCounters.push_back(7701);
        internalCounters.push_back(7820);
        internalCounters.push_back(7939);
        internalCounters.push_back(8058);
        internalCounters.push_back(8177);
        internalCounters.push_back(8296);
        internalCounters.push_back(8415);
        internalCounters.push_back(8534);
        internalCounters.push_back(8653);
        internalCounters.push_back(8772);
        internalCounters.push_back(8891);
        internalCounters.push_back(9010);
        internalCounters.push_back(9129);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("TexUnitBusy", "Timing", "The percentage of GPUTime the texture unit is active. This is measured with all extra fetches and any cache or memory effects taken into account.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16,16,/,NUM_SHADER_ENGINES,/,(100),*", "36afb8d9-42fc-aafe-66c5-449542153b2c");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(7344);
        internalCounters.push_back(7463);
        internalCounters.push_back(7582);
        internalCounters.push_back(7701);
        internalCounters.push_back(7820);
        internalCounters.push_back(7939);
        internalCounters.push_back(8058);
        internalCounters.push_back(8177);
        internalCounters.push_back(8296);
        internalCounters.push_back(8415);
        internalCounters.push_back(8534);
        internalCounters.push_back(8653);
        internalCounters.push_back(8772);
        internalCounters.push_back(8891);
        internalCounters.push_back(9010);
        internalCounters.push_back(9129);

        p.DefinePublicCounter("TexUnitBusyCycles", "Timing", "Number of GPU cycles the texture unit is active. This is measured with all extra fetches and any cache or memory effects taken into account.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16,NUM_SHADER_ENGINES,/", "c68761f2-248c-4f39-6528-c308b1c0807c");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(7398);
        internalCounters.push_back(7517);
        internalCounters.push_back(7636);
        internalCounters.push_back(7755);
        internalCounters.push_back(7874);
        internalCounters.push_back(7993);
        internalCounters.push_back(8112);
        internalCounters.push_back(8231);
        internalCounters.push_back(8350);
        internalCounters.push_back(8469);
        internalCounters.push_back(8588);
        internalCounters.push_back(8707);
        internalCounters.push_back(8826);
        internalCounters.push_back(8945);
        internalCounters.push_back(9064);
        internalCounters.push_back(9183);
        internalCounters.push_back(7397);
        internalCounters.push_back(7516);
        internalCounters.push_back(7635);
        internalCounters.push_back(7754);
        internalCounters.push_back(7873);
        internalCounters.push_back(7992);
        internalCounters.push_back(8111);
        internalCounters.push_back(8230);
        internalCounters.push_back(8349);
        internalCounters.push_back(8468);
        internalCounters.push_back(8587);
        internalCounters.push_back(8706);
        internalCounters.push_back(8825);
        internalCounters.push_back(8944);
        internalCounters.push_back(9063);
        internalCounters.push_back(9182);

        p.DefinePublicCounter("TexTriFilteringPct", "TextureUnit", "Percentage of pixels that received trilinear filtering. Note that not all pixels for which trilinear filtering is enabled will receive it (e.g. if the texture is magnified).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,+,/,(100),*", "1affc3c8-b917-5c81-622b-7004527208ae");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(7398);
        internalCounters.push_back(7517);
        internalCounters.push_back(7636);
        internalCounters.push_back(7755);
        internalCounters.push_back(7874);
        internalCounters.push_back(7993);
        internalCounters.push_back(8112);
        internalCounters.push_back(8231);
        internalCounters.push_back(8350);
        internalCounters.push_back(8469);
        internalCounters.push_back(8588);
        internalCounters.push_back(8707);
        internalCounters.push_back(8826);
        internalCounters.push_back(8945);
        internalCounters.push_back(9064);
        internalCounters.push_back(9183);

        p.DefinePublicCounter("TexTriFilteringCount", "TextureUnit", "Count of pixels that received trilinear filtering. Note that not all pixels for which trilinear filtering is enabled will receive it (e.g. if the texture is magnified).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "5785b3a1-a513-18db-4b1c-bdeef75bb2b6");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(7397);
        internalCounters.push_back(7516);
        internalCounters.push_back(7635);
        internalCounters.push_back(7754);
        internalCounters.push_back(7873);
        internalCounters.push_back(7992);
        internalCounters.push_back(8111);
        internalCounters.push_back(8230);
        internalCounters.push_back(8349);
        internalCounters.push_back(8468);
        internalCounters.push_back(8587);
        internalCounters.push_back(8706);
        internalCounters.push_back(8825);
        internalCounters.push_back(8944);
        internalCounters.push_back(9063);
        internalCounters.push_back(9182);

        p.DefinePublicCounter("NoTexTriFilteringCount", "TextureUnit", "Count of pixels that did not receive trilinear filtering.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "179da29a-81af-c06e-ce8c-a0a731ea030d");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(7400);
        internalCounters.push_back(7519);
        internalCounters.push_back(7638);
        internalCounters.push_back(7757);
        internalCounters.push_back(7876);
        internalCounters.push_back(7995);
        internalCounters.push_back(8114);
        internalCounters.push_back(8233);
        internalCounters.push_back(8352);
        internalCounters.push_back(8471);
        internalCounters.push_back(8590);
        internalCounters.push_back(8709);
        internalCounters.push_back(8828);
        internalCounters.push_back(8947);
        internalCounters.push_back(9066);
        internalCounters.push_back(9185);
        internalCounters.push_back(7399);
        internalCounters.push_back(7518);
        internalCounters.push_back(7637);
        internalCounters.push_back(7756);
        internalCounters.push_back(7875);
        internalCounters.push_back(7994);
        internalCounters.push_back(8113);
        internalCounters.push_back(8232);
        internalCounters.push_back(8351);
        internalCounters.push_back(8470);
        internalCounters.push_back(8589);
        internalCounters.push_back(8708);
        internalCounters.push_back(8827);
        internalCounters.push_back(8946);
        internalCounters.push_back(9065);
        internalCounters.push_back(9184);

        p.DefinePublicCounter("TexVolFilteringPct", "TextureUnit", "Percentage of pixels that received volume filtering.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,+,/,(100),*", "b5ff6bed-3178-aee4-42dd-c74391c02a2d");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(7400);
        internalCounters.push_back(7519);
        internalCounters.push_back(7638);
        internalCounters.push_back(7757);
        internalCounters.push_back(7876);
        internalCounters.push_back(7995);
        internalCounters.push_back(8114);
        internalCounters.push_back(8233);
        internalCounters.push_back(8352);
        internalCounters.push_back(8471);
        internalCounters.push_back(8590);
        internalCounters.push_back(8709);
        internalCounters.push_back(8828);
        internalCounters.push_back(8947);
        internalCounters.push_back(9066);
        internalCounters.push_back(9185);

        p.DefinePublicCounter("TexVolFilteringCount", "TextureUnit", "Count of pixels that received volume filtering.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "4bddc587-d589-8128-e18c-762eab2c871f");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(7399);
        internalCounters.push_back(7518);
        internalCounters.push_back(7637);
        internalCounters.push_back(7756);
        internalCounters.push_back(7875);
        internalCounters.push_back(7994);
        internalCounters.push_back(8113);
        internalCounters.push_back(8232);
        internalCounters.push_back(8351);
        internalCounters.push_back(8470);
        internalCounters.push_back(8589);
        internalCounters.push_back(8708);
        internalCounters.push_back(8827);
        internalCounters.push_back(8946);
        internalCounters.push_back(9065);
        internalCounters.push_back(9184);

        p.DefinePublicCounter("NoTexVolFilteringCount", "TextureUnit", "Count of pixels that did not receive volume filtering.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "9fe1a854-17c6-9d26-b2b9-80610cd5827d");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(7418);
        internalCounters.push_back(7537);
        internalCounters.push_back(7656);
        internalCounters.push_back(7775);
        internalCounters.push_back(7894);
        internalCounters.push_back(8013);
        internalCounters.push_back(8132);
        internalCounters.push_back(8251);
        internalCounters.push_back(8370);
        internalCounters.push_back(8489);
        internalCounters.push_back(8608);
        internalCounters.push_back(8727);
        internalCounters.push_back(8846);
        internalCounters.push_back(8965);
        internalCounters.push_back(9084);
        internalCounters.push_back(9203);
        internalCounters.push_back(7419);
        internalCounters.push_back(7538);
        internalCounters.push_back(7657);
        internalCounters.push_back(7776);
        internalCounters.push_back(7895);
        internalCounters.push_back(8014);
        internalCounters.push_back(8133);
        internalCounters.push_back(8252);
        internalCounters.push_back(8371);
        internalCounters.push_back(8490);
        internalCounters.push_back(8609);
        internalCounters.push_back(8728);
        internalCounters.push_back(8847);
        internalCounters.push_back(8966);
        internalCounters.push_back(9085);
        internalCounters.push_back(9204);
        internalCounters.push_back(7420);
        internalCounters.push_back(7539);
        internalCounters.push_back(7658);
        internalCounters.push_back(7777);
        internalCounters.push_back(7896);
        internalCounters.push_back(8015);
        internalCounters.push_back(8134);
        internalCounters.push_back(8253);
        internalCounters.push_back(8372);
        internalCounters.push_back(8491);
        internalCounters.push_back(8610);
        internalCounters.push_back(8729);
        internalCounters.push_back(8848);
        internalCounters.push_back(8967);
        internalCounters.push_back(9086);
        internalCounters.push_back(9205);
        internalCounters.push_back(7421);
        internalCounters.push_back(7540);
        internalCounters.push_back(7659);
        internalCounters.push_back(7778);
        internalCounters.push_back(7897);
        internalCounters.push_back(8016);
        internalCounters.push_back(8135);
        internalCounters.push_back(8254);
        internalCounters.push_back(8373);
        internalCounters.push_back(8492);
        internalCounters.push_back(8611);
        internalCounters.push_back(8730);
        internalCounters.push_back(8849);
        internalCounters.push_back(8968);
        internalCounters.push_back(9087);
        internalCounters.push_back(9206);
        internalCounters.push_back(7422);
        internalCounters.push_back(7541);
        internalCounters.push_back(7660);
        internalCounters.push_back(7779);
        internalCounters.push_back(7898);
        internalCounters.push_back(8017);
        internalCounters.push_back(8136);
        internalCounters.push_back(8255);
        internalCounters.push_back(8374);
        internalCounters.push_back(8493);
        internalCounters.push_back(8612);
        internalCounters.push_back(8731);
        internalCounters.push_back(8850);
        internalCounters.push_back(8969);
        internalCounters.push_back(9088);
        internalCounters.push_back(9207);
        internalCounters.push_back(7423);
        internalCounters.push_back(7542);
        internalCounters.push_back(7661);
        internalCounters.push_back(7780);
        internalCounters.push_back(7899);
        internalCounters.push_back(8018);
        internalCounters.push_back(8137);
        internalCounters.push_back(8256);
        internalCounters.push_back(8375);
        internalCounters.push_back(8494);
        internalCounters.push_back(8613);
        internalCounters.push_back(8732);
        internalCounters.push_back(8851);
        internalCounters.push_back(8970);
        internalCounters.push_back(9089);
        internalCounters.push_back(9208);
        internalCounters.push_back(7424);
        internalCounters.push_back(7543);
        internalCounters.push_back(7662);
        internalCounters.push_back(7781);
        internalCounters.push_back(7900);
        internalCounters.push_back(8019);
        internalCounters.push_back(8138);
        internalCounters.push_back(8257);
        internalCounters.push_back(8376);
        internalCounters.push_back(8495);
        internalCounters.push_back(8614);
        internalCounters.push_back(8733);
        internalCounters.push_back(8852);
        internalCounters.push_back(8971);
        internalCounters.push_back(9090);
        internalCounters.push_back(9209);
        internalCounters.push_back(7425);
        internalCounters.push_back(7544);
        internalCounters.push_back(7663);
        internalCounters.push_back(7782);
        internalCounters.push_back(7901);
        internalCounters.push_back(8020);
        internalCounters.push_back(8139);
        internalCounters.push_back(8258);
        internalCounters.push_back(8377);
        internalCounters.push_back(8496);
        internalCounters.push_back(8615);
        internalCounters.push_back(8734);
        internalCounters.push_back(8853);
        internalCounters.push_back(8972);
        internalCounters.push_back(9091);
        internalCounters.push_back(9210);
        internalCounters.push_back(7426);
        internalCounters.push_back(7545);
        internalCounters.push_back(7664);
        internalCounters.push_back(7783);
        internalCounters.push_back(7902);
        internalCounters.push_back(8021);
        internalCounters.push_back(8140);
        internalCounters.push_back(8259);
        internalCounters.push_back(8378);
        internalCounters.push_back(8497);
        internalCounters.push_back(8616);
        internalCounters.push_back(8735);
        internalCounters.push_back(8854);
        internalCounters.push_back(8973);
        internalCounters.push_back(9092);
        internalCounters.push_back(9211);

        p.DefinePublicCounter("TexAveAnisotropy", "TextureUnit", "The average degree of anisotropy applied. A number between 1 and 16. The anisotropic filtering algorithm only applies samples where they are required (e.g. there will be no extra anisotropic samples if the view vector is perpendicular to the surface) so this can be much lower than the requested anisotropy.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,(2),16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,*,+,(4),32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,sum16,*,+,(6),48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,sum16,*,+,(8),64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,sum16,*,+,(10),80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,sum16,*,+,(12),96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,sum16,*,+,(14),112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,sum16,*,+,(16),128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,sum16,*,+,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,+,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,sum16,+,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,sum16,+,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,sum16,+,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,sum16,+,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,sum16,+,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,sum16,+,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,sum16,+,/", "7ca2a2b9-a4eb-ce23-d163-59147e672396");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(1928);
        internalCounters.push_back(2256);
        internalCounters.push_back(2584);
        internalCounters.push_back(2912);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("DepthStencilTestBusy", "Timing", "Percentage of time GPU spent performing depth and stencil tests relative to GPUBusy.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,1,max,2,max,3,max,4,/,NUM_SHADER_ENGINES,/,(100),*", "6834fb52-42e8-bb50-fd48-ec2f2904e7e0");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(1928);
        internalCounters.push_back(2256);
        internalCounters.push_back(2584);
        internalCounters.push_back(2912);

        p.DefinePublicCounter("DepthStencilTestBusyCount", "Timing", "Number of GPU cycles spent performing depth and stencil tests.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "0,1,max,2,max,3,max,NUM_SHADER_ENGINES,/", "e02860fa-c7bd-90ea-2149-69b4e98a636c");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(1799);
        internalCounters.push_back(2127);
        internalCounters.push_back(2455);
        internalCounters.push_back(2783);
        internalCounters.push_back(1788);
        internalCounters.push_back(2116);
        internalCounters.push_back(2444);
        internalCounters.push_back(2772);

        p.DefinePublicCounter("HiZTilesAccepted", "DepthAndStencil", "Percentage of tiles accepted by HiZ and will be rendered to the depth or color buffers.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,1,2,3,sum4,4,5,6,7,sum4,/,(100),*", "56176f45-d7ff-813d-4f05-3b2f046067e7");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(1799);
        internalCounters.push_back(2127);
        internalCounters.push_back(2455);
        internalCounters.push_back(2783);

        p.DefinePublicCounter("HiZTilesAcceptedCount", "DepthAndStencil", "Count of tiles accepted by HiZ and will be rendered to the depth or color buffers.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,sum4", "95d4e3f6-b2f0-f26e-8423-aacdfaf79ea3");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(1788);
        internalCounters.push_back(2116);
        internalCounters.push_back(2444);
        internalCounters.push_back(2772);

        p.DefinePublicCounter("HiZTilesRejectedCount", "DepthAndStencil", "Count of tiles not accepted by HiZ.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,sum4", "156ba142-7eeb-aa6e-a00a-f8aea4e41e0b");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(1788);
        internalCounters.push_back(2116);
        internalCounters.push_back(2444);
        internalCounters.push_back(2772);
        internalCounters.push_back(1812);
        internalCounters.push_back(2140);
        internalCounters.push_back(2468);
        internalCounters.push_back(2796);

        p.DefinePublicCounter("PreZTilesDetailCulled", "DepthAndStencil", "Percentage of tiles rejected because the associated prim had no contributing area.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "4,5,6,7,sum4,0,1,2,3,sum4,/,(100),*", "cad7f54d-a044-7574-c472-6f2065cbeeac");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(1812);
        internalCounters.push_back(2140);
        internalCounters.push_back(2468);
        internalCounters.push_back(2796);

        p.DefinePublicCounter("PreZTilesDetailCulledCount", "DepthAndStencil", "Count of tiles rejected because the associated primitive had no contributing area.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,sum4", "49262c8a-b1e6-90dd-f096-0fc4921715e9");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(1788);
        internalCounters.push_back(2116);
        internalCounters.push_back(2444);
        internalCounters.push_back(2772);

        p.DefinePublicCounter("PreZTilesDetailSurvivingCount", "DepthAndStencil", "Count of tiles surviving because the associated primitive had contributing area.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,sum4", "f803eaa4-bbed-bd39-775f-a64df92e2c08");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(3601);
        internalCounters.push_back(3602);
        internalCounters.push_back(3603);
        internalCounters.push_back(3604);
        internalCounters.push_back(3677);
        internalCounters.push_back(3678);
        internalCounters.push_back(3679);
        internalCounters.push_back(3680);

        p.DefinePublicCounter("HiZQuadsCulled", "DepthAndStencil", "Percentage of quads that did not have to continue on in the pipeline after HiZ. They may be written directly to the depth buffer, or culled completely. Consistently low values here may suggest that the Z-range is not being fully utilized.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,1,+,2,+,3,+,4,5,+,6,+,7,+,-,0,1,+,2,+,3,+,/,(100),*", "fa0e319b-5573-6d34-5bab-904769925036");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(3601);
        internalCounters.push_back(3602);
        internalCounters.push_back(3603);
        internalCounters.push_back(3604);
        internalCounters.push_back(3677);
        internalCounters.push_back(3678);
        internalCounters.push_back(3679);
        internalCounters.push_back(3680);

        p.DefinePublicCounter("HiZQuadsCulledCount", "DepthAndStencil", "Count of quads that did not have to continue on in the pipeline after HiZ. They may be written directly to the depth buffer, or culled completely. Consistently low values here may suggest that the Z-range is not being fully utilized.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,+,2,+,3,+,4,5,+,6,+,7,+,-", "73b0b39d-6df2-3e24-0b5c-7cb0ac8b6f39");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(3677);
        internalCounters.push_back(3678);
        internalCounters.push_back(3679);
        internalCounters.push_back(3680);

        p.DefinePublicCounter("HiZQuadsAcceptedCount", "DepthAndStencil", "Count of quads that did continue on in the pipeline after HiZ.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,+,2,+,3,+", "59049ad9-42b5-c7cb-3616-6a8f6a8e4894");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(3601);
        internalCounters.push_back(3602);
        internalCounters.push_back(3603);
        internalCounters.push_back(3604);
        internalCounters.push_back(3701);
        internalCounters.push_back(3677);
        internalCounters.push_back(3678);
        internalCounters.push_back(3679);
        internalCounters.push_back(3680);

        p.DefinePublicCounter("PreZQuadsCulled", "DepthAndStencil", "Percentage of quads rejected based on the detailZ and earlyZ tests.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "5,6,+,7,+,8,+,4,-,0,1,+,2,+,3,+,/,(100),*", "4e77547b-ec55-5663-f034-af59be66d77d");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(3601);
        internalCounters.push_back(3602);
        internalCounters.push_back(3603);
        internalCounters.push_back(3604);
        internalCounters.push_back(3701);
        internalCounters.push_back(3677);
        internalCounters.push_back(3678);
        internalCounters.push_back(3679);
        internalCounters.push_back(3680);

        p.DefinePublicCounter("PreZQuadsCulledCount", "DepthAndStencil", "Count of quads rejected based on the detailZ and earlyZ tests.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,+,2,+,3,+,4,-,5,-,6,-,7,-,8,-", "1bf169e6-9304-834e-df5f-0c44d7890a08");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(3701);
        internalCounters.push_back(3677);
        internalCounters.push_back(3678);
        internalCounters.push_back(3679);
        internalCounters.push_back(3680);

        p.DefinePublicCounter("PreZQuadsSurvivingCount", "DepthAndStencil", "Count of quads surviving detailZ and earlyZ tests.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "1,2,+,3,+,4,+,0,-", "50e25e51-3713-89cb-7f92-559cde5e5532");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(3701);
        internalCounters.push_back(3601);
        internalCounters.push_back(3602);
        internalCounters.push_back(3603);
        internalCounters.push_back(3604);

        p.DefinePublicCounter("PostZQuads", "DepthAndStencil", "Percentage of quads for which the pixel shader will run and may be postZ tested.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,1,2,+,3,+,4,+,/,(100),*", "58f0d34b-eeb8-e8db-abce-cb72584144be");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(3701);

        p.DefinePublicCounter("PostZQuadCount", "DepthAndStencil", "Count of quads for which the pixel shader will run and may be postZ tested.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0", "08404526-ce35-939b-34c8-a7a35a0ff4d6");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(1961);
        internalCounters.push_back(2289);
        internalCounters.push_back(2617);
        internalCounters.push_back(2945);

        p.DefinePublicCounter("PreZSamplesPassing", "DepthAndStencil", "Number of samples tested for Z before shading and passed.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,sum4", "3bfe6c4d-7422-ca03-7ea5-e67ff1a00136");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(1963);
        internalCounters.push_back(2291);
        internalCounters.push_back(2619);
        internalCounters.push_back(2947);

        p.DefinePublicCounter("PreZSamplesFailingS", "DepthAndStencil", "Number of samples tested for Z before shading and failed stencil test.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,sum4", "df7f705e-5162-d3b5-da8b-63466cf9c4e5");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(1962);
        internalCounters.push_back(2290);
        internalCounters.push_back(2618);
        internalCounters.push_back(2946);

        p.DefinePublicCounter("PreZSamplesFailingZ", "DepthAndStencil", "Number of samples tested for Z before shading and failed Z test.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,sum4", "4484e950-f7a4-3800-bc74-78dd297f017e");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(1958);
        internalCounters.push_back(2286);
        internalCounters.push_back(2614);
        internalCounters.push_back(2942);

        p.DefinePublicCounter("PostZSamplesPassing", "DepthAndStencil", "Number of samples tested for Z after shading and passed.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,sum4", "4995d5d6-2330-b986-508b-fae24856f44c");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(1960);
        internalCounters.push_back(2288);
        internalCounters.push_back(2616);
        internalCounters.push_back(2944);

        p.DefinePublicCounter("PostZSamplesFailingS", "DepthAndStencil", "Number of samples tested for Z after shading and failed stencil test.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,sum4", "ae558af4-f4be-3dd4-7316-b2c4dcf0def8");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(1959);
        internalCounters.push_back(2287);
        internalCounters.push_back(2615);
        internalCounters.push_back(2943);

        p.DefinePublicCounter("PostZSamplesFailingZ", "DepthAndStencil", "Number of samples tested for Z after shading and failed Z test.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,sum4", "b3684c94-814a-c695-c85d-a5b6ab798b35");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(1830);
        internalCounters.push_back(2158);
        internalCounters.push_back(2486);
        internalCounters.push_back(2814);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("ZUnitStalled", "DepthAndStencil", "The percentage of GPUTime the depth buffer spends waiting for the color buffer to be ready to accept data. High figures here indicate a bottleneck in color buffer operations.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,1,max,2,max,3,max,4,/,NUM_SHADER_ENGINES,/,(100),*", "5e86c3ad-1726-3157-1d01-7ed188bf854d");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(1830);
        internalCounters.push_back(2158);
        internalCounters.push_back(2486);
        internalCounters.push_back(2814);

        p.DefinePublicCounter("ZUnitStalledCycles", "DepthAndStencil", "Number of GPU cycles the depth buffer spends waiting for the color buffer to be ready to accept data. Larger numbers indicate a bottleneck in color buffer operations.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_CYCLES, internalCounters, "0,1,max,2,max,3,max,NUM_SHADER_ENGINES,/", "4351fa7f-6737-2c3e-3ffb-b3addbdceedd");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(1832);
        internalCounters.push_back(2160);
        internalCounters.push_back(2488);
        internalCounters.push_back(2816);
        internalCounters.push_back(1839);
        internalCounters.push_back(2167);
        internalCounters.push_back(2495);
        internalCounters.push_back(2823);

        p.DefinePublicCounter("DBMemRead", "DepthAndStencil", "Number of bytes read from the depth buffer.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_BYTES, internalCounters, "0,1,2,3,sum4,(256),*,4,5,6,7,sum4,(32),*,+", "dcdb4ee7-bd50-00f7-c028-9e5f4ce888c0");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(1844);
        internalCounters.push_back(2172);
        internalCounters.push_back(2500);
        internalCounters.push_back(2828);
        internalCounters.push_back(1847);
        internalCounters.push_back(2175);
        internalCounters.push_back(2503);
        internalCounters.push_back(2831);

        p.DefinePublicCounter("DBMemWritten", "DepthAndStencil", "Number of bytes written to the depth buffer.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_BYTES, internalCounters, "0,1,2,3,sum4,(32),*,4,5,6,7,sum4,(32),*,+", "de5717f8-8a49-ee44-4645-10de51b37dcf");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(128);
        internalCounters.push_back(566);
        internalCounters.push_back(1004);
        internalCounters.push_back(1442);

        p.DefinePublicCounter("CBMemRead", "ColorBuffer", "Number of bytes read from the color buffer.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_BYTES, internalCounters, "0,1,2,3,sum4,(32),*", "84b531d8-a1f8-7f49-7c27-7bc97801f1e6");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(259);
        internalCounters.push_back(697);
        internalCounters.push_back(1135);
        internalCounters.push_back(1573);
        internalCounters.push_back(126);
        internalCounters.push_back(564);
        internalCounters.push_back(1002);
        internalCounters.push_back(1440);
        internalCounters.push_back(127);
        internalCounters.push_back(565);
        internalCounters.push_back(1003);
        internalCounters.push_back(1441);
        internalCounters.push_back(128);
        internalCounters.push_back(566);
        internalCounters.push_back(1004);
        internalCounters.push_back(1442);

        p.DefinePublicCounter("CBColorAndMaskRead", "ColorBuffer", "Total number of bytes read from the color and mask buffers.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_BYTES, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,(32),*", "da41660e-eb6f-32ec-8a64-b32ca17bd7eb");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(118);
        internalCounters.push_back(556);
        internalCounters.push_back(994);
        internalCounters.push_back(1432);

        p.DefinePublicCounter("CBMemWritten", "ColorBuffer", "Number of bytes written to the color buffer.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_BYTES, internalCounters, "0,1,2,3,sum4,(32),*", "550f8ff8-60b6-a6bf-87d0-25ac9e87de70");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(257);
        internalCounters.push_back(695);
        internalCounters.push_back(1133);
        internalCounters.push_back(1571);
        internalCounters.push_back(116);
        internalCounters.push_back(554);
        internalCounters.push_back(992);
        internalCounters.push_back(1430);
        internalCounters.push_back(117);
        internalCounters.push_back(555);
        internalCounters.push_back(993);
        internalCounters.push_back(1431);
        internalCounters.push_back(118);
        internalCounters.push_back(556);
        internalCounters.push_back(994);
        internalCounters.push_back(1432);

        p.DefinePublicCounter("CBColorAndMaskWritten", "ColorBuffer", "Total number of bytes written to the color and mask buffers.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_BYTES, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,(32),*", "29a04b69-8f5f-b770-a0f2-3453e2c99e49");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(162);
        internalCounters.push_back(600);
        internalCounters.push_back(1038);
        internalCounters.push_back(1476);
        internalCounters.push_back(7);
        internalCounters.push_back(445);
        internalCounters.push_back(883);
        internalCounters.push_back(1321);

        p.DefinePublicCounter("CBSlowPixelPct", "ColorBuffer", "Percentage of pixels written to the color buffer using a half-rate or quarter-rate format.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,1,2,3,sum4,4,5,6,7,sum4,/,(100),*,(100),min", "5775943f-0313-7e52-9638-b24a449197bc");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(162);
        internalCounters.push_back(600);
        internalCounters.push_back(1038);
        internalCounters.push_back(1476);

        p.DefinePublicCounter("CBSlowPixelCount", "ColorBuffer", "Number of pixels written to the color buffer using a half-rate or quarter-rate format.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,sum4", "47eacbb0-28c8-22b4-5c69-c00d5813bb1c");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(9344);
        internalCounters.push_back(9600);
        internalCounters.push_back(9856);
        internalCounters.push_back(10112);
        internalCounters.push_back(10368);
        internalCounters.push_back(10624);
        internalCounters.push_back(10880);
        internalCounters.push_back(11136);
        internalCounters.push_back(11392);
        internalCounters.push_back(11648);
        internalCounters.push_back(11904);
        internalCounters.push_back(12160);
        internalCounters.push_back(12416);
        internalCounters.push_back(12672);
        internalCounters.push_back(12928);
        internalCounters.push_back(13184);
        internalCounters.push_back(9345);
        internalCounters.push_back(9601);
        internalCounters.push_back(9857);
        internalCounters.push_back(10113);
        internalCounters.push_back(10369);
        internalCounters.push_back(10625);
        internalCounters.push_back(10881);
        internalCounters.push_back(11137);
        internalCounters.push_back(11393);
        internalCounters.push_back(11649);
        internalCounters.push_back(11905);
        internalCounters.push_back(12161);
        internalCounters.push_back(12417);
        internalCounters.push_back(12673);
        internalCounters.push_back(12929);
        internalCounters.push_back(13185);

        p.DefinePublicCounter("FetchSize", "GlobalMemory", "The total bytes fetched from the video memory. This is measured with all extra fetches and any cache or memory effects taken into account.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_KILOBYTES, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,-,(64),*,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,(32),*,+", "664bb3ef-6eca-86b1-1e2d-30cb897b5fa9");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(9332);
        internalCounters.push_back(9588);
        internalCounters.push_back(9844);
        internalCounters.push_back(10100);
        internalCounters.push_back(10356);
        internalCounters.push_back(10612);
        internalCounters.push_back(10868);
        internalCounters.push_back(11124);
        internalCounters.push_back(11380);
        internalCounters.push_back(11636);
        internalCounters.push_back(11892);
        internalCounters.push_back(12148);
        internalCounters.push_back(12404);
        internalCounters.push_back(12660);
        internalCounters.push_back(12916);
        internalCounters.push_back(13172);
        internalCounters.push_back(9333);
        internalCounters.push_back(9589);
        internalCounters.push_back(9845);
        internalCounters.push_back(10101);
        internalCounters.push_back(10357);
        internalCounters.push_back(10613);
        internalCounters.push_back(10869);
        internalCounters.push_back(11125);
        internalCounters.push_back(11381);
        internalCounters.push_back(11637);
        internalCounters.push_back(11893);
        internalCounters.push_back(12149);
        internalCounters.push_back(12405);
        internalCounters.push_back(12661);
        internalCounters.push_back(12917);
        internalCounters.push_back(13173);

        p.DefinePublicCounter("WriteSize", "GlobalMemory", "The total bytes written to the video memory. This is measured with all extra fetches and any cache or memory effects taken into account.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_KILOBYTES, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,-,(32),*,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,(64),*,+", "f96f2c16-b1b4-4ec4-229c-fc82e6f80a82");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(9323);
        internalCounters.push_back(9579);
        internalCounters.push_back(9835);
        internalCounters.push_back(10091);
        internalCounters.push_back(10347);
        internalCounters.push_back(10603);
        internalCounters.push_back(10859);
        internalCounters.push_back(11115);
        internalCounters.push_back(11371);
        internalCounters.push_back(11627);
        internalCounters.push_back(11883);
        internalCounters.push_back(12139);
        internalCounters.push_back(12395);
        internalCounters.push_back(12651);
        internalCounters.push_back(12907);
        internalCounters.push_back(13163);
        internalCounters.push_back(9325);
        internalCounters.push_back(9581);
        internalCounters.push_back(9837);
        internalCounters.push_back(10093);
        internalCounters.push_back(10349);
        internalCounters.push_back(10605);
        internalCounters.push_back(10861);
        internalCounters.push_back(11117);
        internalCounters.push_back(11373);
        internalCounters.push_back(11629);
        internalCounters.push_back(11885);
        internalCounters.push_back(12141);
        internalCounters.push_back(12397);
        internalCounters.push_back(12653);
        internalCounters.push_back(12909);
        internalCounters.push_back(13165);

        p.DefinePublicCounter("L2CacheHit", "GlobalMemory", "The percentage of fetch, write, atomic, and other instructions that hit the L2 cache. Value range: 0% (no hit) to 100% (optimal).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,+,/,(100),*", "d78fdf66-104f-8372-02c1-91d07d7dc62e");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(9323);
        internalCounters.push_back(9579);
        internalCounters.push_back(9835);
        internalCounters.push_back(10091);
        internalCounters.push_back(10347);
        internalCounters.push_back(10603);
        internalCounters.push_back(10859);
        internalCounters.push_back(11115);
        internalCounters.push_back(11371);
        internalCounters.push_back(11627);
        internalCounters.push_back(11883);
        internalCounters.push_back(12139);
        internalCounters.push_back(12395);
        internalCounters.push_back(12651);
        internalCounters.push_back(12907);
        internalCounters.push_back(13163);
        internalCounters.push_back(9325);
        internalCounters.push_back(9581);
        internalCounters.push_back(9837);
        internalCounters.push_back(10093);
        internalCounters.push_back(10349);
        internalCounters.push_back(10605);
        internalCounters.push_back(10861);
        internalCounters.push_back(11117);
        internalCounters.push_back(11373);
        internalCounters.push_back(11629);
        internalCounters.push_back(11885);
        internalCounters.push_back(12141);
        internalCounters.push_back(12397);
        internalCounters.push_back(12653);
        internalCounters.push_back(12909);
        internalCounters.push_back(13165);

        p.DefinePublicCounter("L2CacheMiss", "GlobalMemory", "The percentage of fetch, write, atomic, and other instructions that miss the L2 cache. Value range: 0% (optimal) to 100% (all miss).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,+,/,(100),*", "4cd70885-41b3-25cd-92db-c76a0decc634");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(9323);
        internalCounters.push_back(9579);
        internalCounters.push_back(9835);
        internalCounters.push_back(10091);
        internalCounters.push_back(10347);
        internalCounters.push_back(10603);
        internalCounters.push_back(10859);
        internalCounters.push_back(11115);
        internalCounters.push_back(11371);
        internalCounters.push_back(11627);
        internalCounters.push_back(11883);
        internalCounters.push_back(12139);
        internalCounters.push_back(12395);
        internalCounters.push_back(12651);
        internalCounters.push_back(12907);
        internalCounters.push_back(13163);

        p.DefinePublicCounter("L2CacheHitCount", "GlobalMemory", "Count of fetch, write, atomic, and other instructions that hit the L2 cache.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "d0bce171-560c-1895-66b3-bc56abccb077");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(9325);
        internalCounters.push_back(9581);
        internalCounters.push_back(9837);
        internalCounters.push_back(10093);
        internalCounters.push_back(10349);
        internalCounters.push_back(10605);
        internalCounters.push_back(10861);
        internalCounters.push_back(11117);
        internalCounters.push_back(11373);
        internalCounters.push_back(11629);
        internalCounters.push_back(11885);
        internalCounters.push_back(12141);
        internalCounters.push_back(12397);
        internalCounters.push_back(12653);
        internalCounters.push_back(12909);
        internalCounters.push_back(13165);

        p.DefinePublicCounter("L2CacheMissCount", "GlobalMemory", "Count of fetch, write, atomic, and other instructions that miss the L2 cache.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "f2ab3a1a-ead6-9893-961b-88ba2a758807");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(7344);
        internalCounters.push_back(7463);
        internalCounters.push_back(7582);
        internalCounters.push_back(7701);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("MemUnitBusy", "GlobalMemory", "The percentage of GPUTime the memory unit is active. The result includes the stall time (MemUnitStalled). This is measured with all extra fetches and writes and any cache or memory effects taken into account. Value range: 0% to 100% (fetch-bound).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,1,2,3,max4,4,/,NUM_SHADER_ENGINES,/,(100),*", "a1efa380-4a72-e066-e06a-2ab71a488521");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(14317);
        internalCounters.push_back(14402);
        internalCounters.push_back(14487);
        internalCounters.push_back(14572);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("MemUnitStalled", "GlobalMemory", "The percentage of GPUTime the memory unit is stalled. Try reducing the number or size of fetches and writes if possible. Value range: 0% (optimal) to 100% (bad).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,1,2,3,max4,4,/,NUM_SHADER_ENGINES,/,(100),*", "465ba54f-d250-1453-790a-731b10d230b1");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(9336);
        internalCounters.push_back(9592);
        internalCounters.push_back(9848);
        internalCounters.push_back(10104);
        internalCounters.push_back(10360);
        internalCounters.push_back(10616);
        internalCounters.push_back(10872);
        internalCounters.push_back(11128);
        internalCounters.push_back(11384);
        internalCounters.push_back(11640);
        internalCounters.push_back(11896);
        internalCounters.push_back(12152);
        internalCounters.push_back(12408);
        internalCounters.push_back(12664);
        internalCounters.push_back(12920);
        internalCounters.push_back(13176);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("WriteUnitStalled", "GlobalMemory", "The percentage of GPUTime the Write unit is stalled. Value range: 0% to 100% (bad).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16,16,/,(100),*", "594ad3ce-d1ec-10fc-7d59-25738e397d72");
    }
}

