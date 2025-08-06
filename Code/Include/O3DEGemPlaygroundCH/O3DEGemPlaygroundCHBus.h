
#pragma once

#include <O3DEGemPlaygroundCH/O3DEGemPlaygroundCHTypeIds.h>

#include <AzCore/EBus/EBus.h>
#include <AzCore/Interface/Interface.h>

namespace O3DEGemPlaygroundCH
{
    class O3DEGemPlaygroundCHRequests
    {
    public:
        AZ_RTTI(O3DEGemPlaygroundCHRequests, O3DEGemPlaygroundCHRequestsTypeId);
        virtual ~O3DEGemPlaygroundCHRequests() = default;
        // Put your public methods here
    };

    class O3DEGemPlaygroundCHBusTraits
        : public AZ::EBusTraits
    {
    public:
        //////////////////////////////////////////////////////////////////////////
        // EBusTraits overrides
        static constexpr AZ::EBusHandlerPolicy HandlerPolicy = AZ::EBusHandlerPolicy::Single;
        static constexpr AZ::EBusAddressPolicy AddressPolicy = AZ::EBusAddressPolicy::Single;
        //////////////////////////////////////////////////////////////////////////
    };

    using O3DEGemPlaygroundCHRequestBus = AZ::EBus<O3DEGemPlaygroundCHRequests, O3DEGemPlaygroundCHBusTraits>;
    using O3DEGemPlaygroundCHInterface = AZ::Interface<O3DEGemPlaygroundCHRequests>;

} // namespace O3DEGemPlaygroundCH
