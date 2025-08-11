
#pragma once

namespace O3DEGemPlaygroundCH
{
    // System Component TypeIds
    inline constexpr const char* O3DEGemPlaygroundCHSystemComponentTypeId = "{CFC6FEBF-7D15-4B04-B163-77C534D125DF}";
    inline constexpr const char* O3DEGemPlaygroundCHEditorSystemComponentTypeId = "{6D80B98C-862B-4F45-8DF8-33F4431683D2}";

    // Module derived classes TypeIds
    inline constexpr const char* O3DEGemPlaygroundCHModuleInterfaceTypeId = "{2F503DBD-D294-4278-BD5F-5CA3C1ACCEE1}";
    inline constexpr const char* O3DEGemPlaygroundCHModuleTypeId = "{3E165F61-0059-4D79-8508-82003DA5E0BA}";
    // The Editor Module by default is mutually exclusive with the Client Module
    // so they use the Same TypeId
    inline constexpr const char* O3DEGemPlaygroundCHEditorModuleTypeId = O3DEGemPlaygroundCHModuleTypeId;

    // Interface TypeIds
    inline constexpr const char* O3DEGemPlaygroundCHRequestsTypeId = "{E1E30DB9-A96B-4288-AAAC-B57F6804A47E}";
} // namespace O3DEGemPlaygroundCH
