
#include <O3DEGemPlaygroundCH/O3DEGemPlaygroundCHTypeIds.h>
#include <O3DEGemPlaygroundCHModuleInterface.h>
#include "O3DEGemPlaygroundCHSystemComponent.h"

namespace O3DEGemPlaygroundCH
{
    class O3DEGemPlaygroundCHModule
        : public O3DEGemPlaygroundCHModuleInterface
    {
    public:
        AZ_RTTI(O3DEGemPlaygroundCHModule, O3DEGemPlaygroundCHModuleTypeId, O3DEGemPlaygroundCHModuleInterface);
        AZ_CLASS_ALLOCATOR(O3DEGemPlaygroundCHModule, AZ::SystemAllocator);
    };
}// namespace O3DEGemPlaygroundCH

#if defined(O3DE_GEM_NAME)
AZ_DECLARE_MODULE_CLASS(AZ_JOIN(Gem_, O3DE_GEM_NAME), O3DEGemPlaygroundCH::O3DEGemPlaygroundCHModule)
#else
AZ_DECLARE_MODULE_CLASS(Gem_O3DEGemPlaygroundCH, O3DEGemPlaygroundCH::O3DEGemPlaygroundCHModule)
#endif
