
#include <AzCore/Serialization/SerializeContext.h>
#include "O3DEGemPlaygroundCHEditorSystemComponent.h"

#include <O3DEGemPlaygroundCH/O3DEGemPlaygroundCHTypeIds.h>

namespace O3DEGemPlaygroundCH
{
    AZ_COMPONENT_IMPL(O3DEGemPlaygroundCHEditorSystemComponent, "O3DEGemPlaygroundCHEditorSystemComponent",
        O3DEGemPlaygroundCHEditorSystemComponentTypeId, BaseSystemComponent);

    void O3DEGemPlaygroundCHEditorSystemComponent::Reflect(AZ::ReflectContext* context)
    {
        if (auto serializeContext = azrtti_cast<AZ::SerializeContext*>(context))
        {
            serializeContext->Class<O3DEGemPlaygroundCHEditorSystemComponent, O3DEGemPlaygroundCHSystemComponent>()
                ->Version(0);
        }
    }

    O3DEGemPlaygroundCHEditorSystemComponent::O3DEGemPlaygroundCHEditorSystemComponent() = default;

    O3DEGemPlaygroundCHEditorSystemComponent::~O3DEGemPlaygroundCHEditorSystemComponent() = default;

    void O3DEGemPlaygroundCHEditorSystemComponent::GetProvidedServices(AZ::ComponentDescriptor::DependencyArrayType& provided)
    {
        BaseSystemComponent::GetProvidedServices(provided);
        provided.push_back(AZ_CRC_CE("O3DEGemPlaygroundCHEditorService"));
    }

    void O3DEGemPlaygroundCHEditorSystemComponent::GetIncompatibleServices(AZ::ComponentDescriptor::DependencyArrayType& incompatible)
    {
        BaseSystemComponent::GetIncompatibleServices(incompatible);
        incompatible.push_back(AZ_CRC_CE("O3DEGemPlaygroundCHEditorService"));
    }

    void O3DEGemPlaygroundCHEditorSystemComponent::GetRequiredServices([[maybe_unused]] AZ::ComponentDescriptor::DependencyArrayType& required)
    {
        BaseSystemComponent::GetRequiredServices(required);
    }

    void O3DEGemPlaygroundCHEditorSystemComponent::GetDependentServices([[maybe_unused]] AZ::ComponentDescriptor::DependencyArrayType& dependent)
    {
        BaseSystemComponent::GetDependentServices(dependent);
    }

    void O3DEGemPlaygroundCHEditorSystemComponent::Activate()
    {
        O3DEGemPlaygroundCHSystemComponent::Activate();
        AzToolsFramework::EditorEvents::Bus::Handler::BusConnect();
    }

    void O3DEGemPlaygroundCHEditorSystemComponent::Deactivate()
    {
        AzToolsFramework::EditorEvents::Bus::Handler::BusDisconnect();
        O3DEGemPlaygroundCHSystemComponent::Deactivate();
    }

} // namespace O3DEGemPlaygroundCH
