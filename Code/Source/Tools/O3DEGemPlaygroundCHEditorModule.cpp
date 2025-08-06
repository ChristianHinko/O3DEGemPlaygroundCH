
#include <O3DEGemPlaygroundCH/O3DEGemPlaygroundCHTypeIds.h>
#include <O3DEGemPlaygroundCHModuleInterface.h>
#include "O3DEGemPlaygroundCHEditorSystemComponent.h"

namespace O3DEGemPlaygroundCH
{
    class O3DEGemPlaygroundCHEditorModule
        : public O3DEGemPlaygroundCHModuleInterface
    {
    public:
        AZ_RTTI(O3DEGemPlaygroundCHEditorModule, O3DEGemPlaygroundCHEditorModuleTypeId, O3DEGemPlaygroundCHModuleInterface);
        AZ_CLASS_ALLOCATOR(O3DEGemPlaygroundCHEditorModule, AZ::SystemAllocator);

        O3DEGemPlaygroundCHEditorModule()
        {
            // Push results of [MyComponent]::CreateDescriptor() into m_descriptors here.
            // Add ALL components descriptors associated with this gem to m_descriptors.
            // This will associate the AzTypeInfo information for the components with the the SerializeContext, BehaviorContext and EditContext.
            // This happens through the [MyComponent]::Reflect() function.
            m_descriptors.insert(m_descriptors.end(), {
                O3DEGemPlaygroundCHEditorSystemComponent::CreateDescriptor(),
            });
        }

        /**
         * Add required SystemComponents to the SystemEntity.
         * Non-SystemComponents should not be added here
         */
        AZ::ComponentTypeList GetRequiredSystemComponents() const override
        {
            return AZ::ComponentTypeList {
                azrtti_typeid<O3DEGemPlaygroundCHEditorSystemComponent>(),
            };
        }
    };
}// namespace O3DEGemPlaygroundCH

#if defined(O3DE_GEM_NAME)
AZ_DECLARE_MODULE_CLASS(AZ_JOIN(Gem_, O3DE_GEM_NAME, _Editor), O3DEGemPlaygroundCH::O3DEGemPlaygroundCHEditorModule)
#else
AZ_DECLARE_MODULE_CLASS(Gem_O3DEGemPlaygroundCH_Editor, O3DEGemPlaygroundCH::O3DEGemPlaygroundCHEditorModule)
#endif
