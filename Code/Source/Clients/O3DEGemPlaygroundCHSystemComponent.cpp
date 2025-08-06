
#include "O3DEGemPlaygroundCHSystemComponent.h"

#include <O3DEGemPlaygroundCH/O3DEGemPlaygroundCHTypeIds.h>

#include <AzCore/Serialization/SerializeContext.h>

namespace O3DEGemPlaygroundCH
{
    AZ_COMPONENT_IMPL(O3DEGemPlaygroundCHSystemComponent, "O3DEGemPlaygroundCHSystemComponent",
        O3DEGemPlaygroundCHSystemComponentTypeId);

    void O3DEGemPlaygroundCHSystemComponent::Reflect(AZ::ReflectContext* context)
    {
        if (auto serializeContext = azrtti_cast<AZ::SerializeContext*>(context))
        {
            serializeContext->Class<O3DEGemPlaygroundCHSystemComponent, AZ::Component>()
                ->Version(0)
                ;
        }
    }

    void O3DEGemPlaygroundCHSystemComponent::GetProvidedServices(AZ::ComponentDescriptor::DependencyArrayType& provided)
    {
        provided.push_back(AZ_CRC_CE("O3DEGemPlaygroundCHService"));
    }

    void O3DEGemPlaygroundCHSystemComponent::GetIncompatibleServices(AZ::ComponentDescriptor::DependencyArrayType& incompatible)
    {
        incompatible.push_back(AZ_CRC_CE("O3DEGemPlaygroundCHService"));
    }

    void O3DEGemPlaygroundCHSystemComponent::GetRequiredServices([[maybe_unused]] AZ::ComponentDescriptor::DependencyArrayType& required)
    {
    }

    void O3DEGemPlaygroundCHSystemComponent::GetDependentServices([[maybe_unused]] AZ::ComponentDescriptor::DependencyArrayType& dependent)
    {
    }

    O3DEGemPlaygroundCHSystemComponent::O3DEGemPlaygroundCHSystemComponent()
    {
        if (O3DEGemPlaygroundCHInterface::Get() == nullptr)
        {
            O3DEGemPlaygroundCHInterface::Register(this);
        }
    }

    O3DEGemPlaygroundCHSystemComponent::~O3DEGemPlaygroundCHSystemComponent()
    {
        if (O3DEGemPlaygroundCHInterface::Get() == this)
        {
            O3DEGemPlaygroundCHInterface::Unregister(this);
        }
    }

    void O3DEGemPlaygroundCHSystemComponent::Init()
    {
    }

    void O3DEGemPlaygroundCHSystemComponent::Activate()
    {
        O3DEGemPlaygroundCHRequestBus::Handler::BusConnect();
        AZ::TickBus::Handler::BusConnect();
    }

    void O3DEGemPlaygroundCHSystemComponent::Deactivate()
    {
        AZ::TickBus::Handler::BusDisconnect();
        O3DEGemPlaygroundCHRequestBus::Handler::BusDisconnect();
    }

    void O3DEGemPlaygroundCHSystemComponent::OnTick([[maybe_unused]] float deltaTime, [[maybe_unused]] AZ::ScriptTimePoint time)
    {
    }

} // namespace O3DEGemPlaygroundCH
