
#include "O3DEGemPlaygroundCHModuleInterface.h"
#include <AzCore/Memory/Memory.h>

#include <O3DEGemPlaygroundCH/O3DEGemPlaygroundCHTypeIds.h>

#include <Clients/O3DEGemPlaygroundCHSystemComponent.h>

namespace O3DEGemPlaygroundCH
{
    AZ_TYPE_INFO_WITH_NAME_IMPL(O3DEGemPlaygroundCHModuleInterface,
        "O3DEGemPlaygroundCHModuleInterface", O3DEGemPlaygroundCHModuleInterfaceTypeId);
    AZ_RTTI_NO_TYPE_INFO_IMPL(O3DEGemPlaygroundCHModuleInterface, AZ::Module);
    AZ_CLASS_ALLOCATOR_IMPL(O3DEGemPlaygroundCHModuleInterface, AZ::SystemAllocator);

    O3DEGemPlaygroundCHModuleInterface::O3DEGemPlaygroundCHModuleInterface()
    {
        // Push results of [MyComponent]::CreateDescriptor() into m_descriptors here.
        // Add ALL components descriptors associated with this gem to m_descriptors.
        // This will associate the AzTypeInfo information for the components with the the SerializeContext, BehaviorContext and EditContext.
        // This happens through the [MyComponent]::Reflect() function.
        m_descriptors.insert(m_descriptors.end(), {
            O3DEGemPlaygroundCHSystemComponent::CreateDescriptor(),
            });
    }

    AZ::ComponentTypeList O3DEGemPlaygroundCHModuleInterface::GetRequiredSystemComponents() const
    {
        return AZ::ComponentTypeList{
            azrtti_typeid<O3DEGemPlaygroundCHSystemComponent>(),
        };
    }
} // namespace O3DEGemPlaygroundCH
