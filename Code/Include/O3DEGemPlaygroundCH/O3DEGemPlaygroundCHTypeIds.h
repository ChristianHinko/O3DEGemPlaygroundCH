
#pragma once

namespace O3DEGemPlaygroundCH
{
    // System Component TypeIds
    inline constexpr const char* O3DEGemPlaygroundCHSystemComponentTypeId = "{D8F0EC9E-6EF0-44FD-AAD8-1C54D897AD5A}";
    inline constexpr const char* O3DEGemPlaygroundCHEditorSystemComponentTypeId = "{354DC0DD-DF99-4EFE-8EEE-E5FFA32FFA29}";

    // Module derived classes TypeIds
    inline constexpr const char* O3DEGemPlaygroundCHModuleInterfaceTypeId = "{6CEEB3F8-0D74-4B39-9253-F6FB365648D2}";
    inline constexpr const char* O3DEGemPlaygroundCHModuleTypeId = "{2053116B-39C5-4E37-BD3F-899423811C03}";
    // The Editor Module by default is mutually exclusive with the Client Module
    // so they use the Same TypeId
    inline constexpr const char* O3DEGemPlaygroundCHEditorModuleTypeId = O3DEGemPlaygroundCHModuleTypeId;

    // Interface TypeIds
    inline constexpr const char* O3DEGemPlaygroundCHRequestsTypeId = "{0EFCC396-7F3D-4C33-8CA3-E1BFF8C2DE56}";
} // namespace O3DEGemPlaygroundCH
