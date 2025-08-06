
#pragma once

#include <AzToolsFramework/API/ToolsApplicationAPI.h>

#include <Clients/O3DEGemPlaygroundCHSystemComponent.h>

namespace O3DEGemPlaygroundCH
{
    /// System component for O3DEGemPlaygroundCH editor
    class O3DEGemPlaygroundCHEditorSystemComponent
        : public O3DEGemPlaygroundCHSystemComponent
        , protected AzToolsFramework::EditorEvents::Bus::Handler
    {
        using BaseSystemComponent = O3DEGemPlaygroundCHSystemComponent;
    public:
        AZ_COMPONENT_DECL(O3DEGemPlaygroundCHEditorSystemComponent);

        static void Reflect(AZ::ReflectContext* context);

        O3DEGemPlaygroundCHEditorSystemComponent();
        ~O3DEGemPlaygroundCHEditorSystemComponent();

    private:
        static void GetProvidedServices(AZ::ComponentDescriptor::DependencyArrayType& provided);
        static void GetIncompatibleServices(AZ::ComponentDescriptor::DependencyArrayType& incompatible);
        static void GetRequiredServices(AZ::ComponentDescriptor::DependencyArrayType& required);
        static void GetDependentServices(AZ::ComponentDescriptor::DependencyArrayType& dependent);

        // AZ::Component
        void Activate() override;
        void Deactivate() override;
    };
} // namespace O3DEGemPlaygroundCH
