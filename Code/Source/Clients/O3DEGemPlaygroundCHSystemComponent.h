
#pragma once

#include <AzCore/Component/Component.h>
#include <AzCore/Component/TickBus.h>
#include <O3DEGemPlaygroundCH/O3DEGemPlaygroundCHBus.h>

namespace O3DEGemPlaygroundCH
{
    class O3DEGemPlaygroundCHSystemComponent
        : public AZ::Component
        , protected O3DEGemPlaygroundCHRequestBus::Handler
        , public AZ::TickBus::Handler
    {
    public:
        AZ_COMPONENT_DECL(O3DEGemPlaygroundCHSystemComponent);

        static void Reflect(AZ::ReflectContext* context);

        static void GetProvidedServices(AZ::ComponentDescriptor::DependencyArrayType& provided);
        static void GetIncompatibleServices(AZ::ComponentDescriptor::DependencyArrayType& incompatible);
        static void GetRequiredServices(AZ::ComponentDescriptor::DependencyArrayType& required);
        static void GetDependentServices(AZ::ComponentDescriptor::DependencyArrayType& dependent);

        O3DEGemPlaygroundCHSystemComponent();
        ~O3DEGemPlaygroundCHSystemComponent();

    protected:
        ////////////////////////////////////////////////////////////////////////
        // O3DEGemPlaygroundCHRequestBus interface implementation

        ////////////////////////////////////////////////////////////////////////

        ////////////////////////////////////////////////////////////////////////
        // AZ::Component interface implementation
        void Init() override;
        void Activate() override;
        void Deactivate() override;
        ////////////////////////////////////////////////////////////////////////

        ////////////////////////////////////////////////////////////////////////
        // AZTickBus interface implementation
        void OnTick(float deltaTime, AZ::ScriptTimePoint time) override;
        ////////////////////////////////////////////////////////////////////////
    };

} // namespace O3DEGemPlaygroundCH
