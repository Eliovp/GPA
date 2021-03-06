//==============================================================================
// Copyright (c) 2010-2018 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief PublicCounterDefinitions for HSAGFX9
//==============================================================================

#include "PublicCounterDefsHSAGfx9.h"

// *** Note, this is an auto-generated file. Do not edit. Execute PublicCounterCompiler to rebuild.

void AutoDefinePublicCountersHSAGfx9(GPA_PublicCounters& p)
{
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(4133);

        p.DefinePublicCounter("Wavefronts", "General", "Total wavefronts.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0", "e8999836-489d-80a6-8e94-2c3ea191fd58");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(4155);
        internalCounters.push_back(4133);

        p.DefinePublicCounter("VALUInsts", "General", "The average number of vector ALU instructions executed per work-item (affected by flow control).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,/", "17c27c10-3d5c-64c2-e7b4-4ee1abdbbb46");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(4159);
        internalCounters.push_back(4133);

        p.DefinePublicCounter("SALUInsts", "General", "The average number of scalar ALU instructions executed per work-item (affected by flow control).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,/", "e5693881-8d63-951d-1f4f-f9e4c84236f5");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(4157);
        internalCounters.push_back(6682);
        internalCounters.push_back(6801);
        internalCounters.push_back(6920);
        internalCounters.push_back(7039);
        internalCounters.push_back(7158);
        internalCounters.push_back(7277);
        internalCounters.push_back(7396);
        internalCounters.push_back(7515);
        internalCounters.push_back(7634);
        internalCounters.push_back(7753);
        internalCounters.push_back(7872);
        internalCounters.push_back(7991);
        internalCounters.push_back(8110);
        internalCounters.push_back(8229);
        internalCounters.push_back(8348);
        internalCounters.push_back(8467);
        internalCounters.push_back(4133);

        p.DefinePublicCounter("VFetchInsts", "General", "The average number of vector fetch instructions from the video memory executed per work-item (affected by flow control). Excludes FLAT instructions that fetch from video memory.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,sum16,-,17,/", "85970f8f-0b2c-6431-9e52-7999236e6e8a");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(4160);
        internalCounters.push_back(4133);

        p.DefinePublicCounter("SFetchInsts", "General", "The average number of scalar fetch instructions from the video memory executed per work-item (affected by flow control).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,/", "7d9e4356-a8f5-04c7-f7a8-fe68dc01c441");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(4156);
        internalCounters.push_back(6683);
        internalCounters.push_back(6802);
        internalCounters.push_back(6921);
        internalCounters.push_back(7040);
        internalCounters.push_back(7159);
        internalCounters.push_back(7278);
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
        internalCounters.push_back(4133);

        p.DefinePublicCounter("VWriteInsts", "General", "The average number of vector write instructions to the video memory executed per work-item (affected by flow control). Excludes FLAT instructions that write to video memory.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,sum16,-,17,/", "d8154a17-224d-704e-73d2-bb5d150f3196");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(4161);
        internalCounters.push_back(4162);
        internalCounters.push_back(4133);

        p.DefinePublicCounter("FlatVMemInsts", "General", "The average number of FLAT instructions that read from or write to the video memory executed per work item (affected by flow control). Includes FLAT instructions that read from or write to scratch.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,-,2,/", "05e4a953-c59a-e722-872b-e4bc7526bcee");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(4163);
        internalCounters.push_back(4162);
        internalCounters.push_back(4133);

        p.DefinePublicCounter("LDSInsts", "LocalMemory", "The average number of LDS read or LDS write instructions executed per work item (affected by flow control). Excludes FLAT instructions that read from or write to LDS.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,-,2,/", "be9bbead-f82a-a2c6-8333-1a5c4ce5ee98");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(4162);
        internalCounters.push_back(4133);

        p.DefinePublicCounter("FlatLDSInsts", "LocalMemory", "The average number of FLAT instructions that read from or write to LDS executed per work item (affected by flow control).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,/", "0f7d8f58-1750-a36f-d03e-85a2d9cd6e08");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(4164);
        internalCounters.push_back(4133);

        p.DefinePublicCounter("GDSInsts", "General", "The average number of GDS read or GDS write instructions executed per work item (affected by flow control).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, internalCounters, "0,1,/", "c63fc276-151e-3b88-6edb-a0c92507aadb");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(4214);
        internalCounters.push_back(4200);

        p.DefinePublicCounter("VALUUtilization", "General", "The percentage of active vector ALU threads in a wave. A lower number can mean either more thread divergence in a wave or that the work-group size is not a multiple of 64. Value range: 0% (bad), 100% (ideal - no thread divergence).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,1,(64),*,/,(100),*,(100),min", "ffea5f90-624f-67dd-4ca6-74911f4c85d3");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(4200);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("VALUBusy", "General", "The percentage of GPUTime vector ALU instructions are processed. Value range: 0% (bad) to 100% (optimal).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,(4),*,NUM_SIMDS,/,1,/,(100),*", "51800108-e003-3c1f-b92a-e224aaab3c1b");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(4213);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("SALUBusy", "General", "The percentage of GPUTime scalar ALU instructions are processed. Value range: 0% (bad) to 100% (optimal).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,(4),*,NUM_SIMDS,NUM_SHADER_ENGINES,/,/,1,/,(100),*", "f1d53e7a-0182-42f8-7d2c-6029bff6bc2d");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(8596);
        internalCounters.push_back(8852);
        internalCounters.push_back(9108);
        internalCounters.push_back(9364);
        internalCounters.push_back(9620);
        internalCounters.push_back(9876);
        internalCounters.push_back(10132);
        internalCounters.push_back(10388);
        internalCounters.push_back(10644);
        internalCounters.push_back(10900);
        internalCounters.push_back(11156);
        internalCounters.push_back(11412);
        internalCounters.push_back(11668);
        internalCounters.push_back(11924);
        internalCounters.push_back(12180);
        internalCounters.push_back(12436);
        internalCounters.push_back(8597);
        internalCounters.push_back(8853);
        internalCounters.push_back(9109);
        internalCounters.push_back(9365);
        internalCounters.push_back(9621);
        internalCounters.push_back(9877);
        internalCounters.push_back(10133);
        internalCounters.push_back(10389);
        internalCounters.push_back(10645);
        internalCounters.push_back(10901);
        internalCounters.push_back(11157);
        internalCounters.push_back(11413);
        internalCounters.push_back(11669);
        internalCounters.push_back(11925);
        internalCounters.push_back(12181);
        internalCounters.push_back(12437);

        p.DefinePublicCounter("FetchSize", "GlobalMemory", "The total kilobytes fetched from the video memory. This is measured with all extra fetches and any cache or memory effects taken into account.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_KILOBYTES, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,-,(64),*,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,(32),*,+,(1024),/", "d91ac445-b44f-f821-9123-9d829e544c33");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(8584);
        internalCounters.push_back(8840);
        internalCounters.push_back(9096);
        internalCounters.push_back(9352);
        internalCounters.push_back(9608);
        internalCounters.push_back(9864);
        internalCounters.push_back(10120);
        internalCounters.push_back(10376);
        internalCounters.push_back(10632);
        internalCounters.push_back(10888);
        internalCounters.push_back(11144);
        internalCounters.push_back(11400);
        internalCounters.push_back(11656);
        internalCounters.push_back(11912);
        internalCounters.push_back(12168);
        internalCounters.push_back(12424);
        internalCounters.push_back(8585);
        internalCounters.push_back(8841);
        internalCounters.push_back(9097);
        internalCounters.push_back(9353);
        internalCounters.push_back(9609);
        internalCounters.push_back(9865);
        internalCounters.push_back(10121);
        internalCounters.push_back(10377);
        internalCounters.push_back(10633);
        internalCounters.push_back(10889);
        internalCounters.push_back(11145);
        internalCounters.push_back(11401);
        internalCounters.push_back(11657);
        internalCounters.push_back(11913);
        internalCounters.push_back(12169);
        internalCounters.push_back(12425);

        p.DefinePublicCounter("WriteSize", "GlobalMemory", "The total kilobytes written to the video memory. This is measured with all extra fetches and any cache or memory effects taken into account.", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_KILOBYTES, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,-,(32),*,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,(64),*,+,(1024),/", "e09d95da-2772-f7cb-51f5-4fad27bb998b");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(8575);
        internalCounters.push_back(8831);
        internalCounters.push_back(9087);
        internalCounters.push_back(9343);
        internalCounters.push_back(9599);
        internalCounters.push_back(9855);
        internalCounters.push_back(10111);
        internalCounters.push_back(10367);
        internalCounters.push_back(10623);
        internalCounters.push_back(10879);
        internalCounters.push_back(11135);
        internalCounters.push_back(11391);
        internalCounters.push_back(11647);
        internalCounters.push_back(11903);
        internalCounters.push_back(12159);
        internalCounters.push_back(12415);
        internalCounters.push_back(8577);
        internalCounters.push_back(8833);
        internalCounters.push_back(9089);
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

        p.DefinePublicCounter("L2CacheHit", "GlobalMemory", "The percentage of fetch, write, atomic, and other instructions that hit the data in L2 cache. Value range: 0% (no hit) to 100% (optimal).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,+,/,(100),*", "7507935e-ed29-f169-ee27-9b0fa9b88f3c");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(6596);
        internalCounters.push_back(6715);
        internalCounters.push_back(6834);
        internalCounters.push_back(6953);
        internalCounters.push_back(7072);
        internalCounters.push_back(7191);
        internalCounters.push_back(7310);
        internalCounters.push_back(7429);
        internalCounters.push_back(7548);
        internalCounters.push_back(7667);
        internalCounters.push_back(7786);
        internalCounters.push_back(7905);
        internalCounters.push_back(8024);
        internalCounters.push_back(8143);
        internalCounters.push_back(8262);
        internalCounters.push_back(8381);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("MemUnitBusy", "GlobalMemory", "The percentage of GPUTime the memory unit is active. The result includes the stall time (MemUnitStalled). This is measured with all extra fetches and writes and any cache or memory effects taken into account. Value range: 0% to 100% (fetch-bound).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16,16,/,NUM_SHADER_ENGINES,/,(100),*", "a1efa380-4a72-e066-e06a-2ab71a488521");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(13569);
        internalCounters.push_back(13654);
        internalCounters.push_back(13739);
        internalCounters.push_back(13824);
        internalCounters.push_back(13909);
        internalCounters.push_back(13994);
        internalCounters.push_back(14079);
        internalCounters.push_back(14164);
        internalCounters.push_back(14249);
        internalCounters.push_back(14334);
        internalCounters.push_back(14419);
        internalCounters.push_back(14504);
        internalCounters.push_back(14589);
        internalCounters.push_back(14674);
        internalCounters.push_back(14759);
        internalCounters.push_back(14844);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("MemUnitStalled", "GlobalMemory", "The percentage of GPUTime the memory unit is stalled. Try reducing the number or size of fetches and writes if possible. Value range: 0% (optimal) to 100% (bad).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16,16,/,NUM_SHADER_ENGINES,/,(100),*", "465ba54f-d250-1453-790a-731b10d230b1");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(8588);
        internalCounters.push_back(8844);
        internalCounters.push_back(9100);
        internalCounters.push_back(9356);
        internalCounters.push_back(9612);
        internalCounters.push_back(9868);
        internalCounters.push_back(10124);
        internalCounters.push_back(10380);
        internalCounters.push_back(10636);
        internalCounters.push_back(10892);
        internalCounters.push_back(11148);
        internalCounters.push_back(11404);
        internalCounters.push_back(11660);
        internalCounters.push_back(11916);
        internalCounters.push_back(12172);
        internalCounters.push_back(12428);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("WriteUnitStalled", "GlobalMemory", "The percentage of GPUTime the Write unit is stalled. Value range: 0% to 100% (bad).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,1,max,2,max,3,max,4,max,5,max,6,max,7,max,8,max,9,max,10,max,11,max,12,max,13,max,14,max,15,max,16,/,(100),*", "594ad3ce-d1ec-10fc-7d59-25738e397d72");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(4222);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("LDSBankConflict", "LocalMemory", "The percentage of GPUTime LDS is stalled by bank conflicts. Value range: 0% (optimal) to 100% (bad).", GPA_DATA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, internalCounters, "0,1,/,NUM_SIMDS,/,(100),*", "b3387100-3d5a-3235-e612-58b941683eb6");
    }
}

