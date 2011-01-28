#pragma once

#include "Foundation/Container/Set.h"
#include "Foundation/Reflect/Registry.h"
#include "Foundation/Reflect/Data/SimpleData.h"
#include "Foundation/Reflect/Data/ContainerData.h"

namespace Helium
{
    namespace Reflect
    {
        class FOUNDATION_API ObjectSetData : public ContainerData
        {
        public:
            typedef Helium::Set< ObjectPtr > DataType;
            DataPointer< DataType > m_Data;

            REFLECT_DECLARE_OBJECT( ObjectSetData, ContainerData )

            ObjectSetData();
            virtual ~ObjectSetData();

            virtual void ConnectData( void* data ) HELIUM_OVERRIDE;

            virtual size_t GetSize() const HELIUM_OVERRIDE;
            virtual void Clear() HELIUM_OVERRIDE;

            virtual bool Set( Data* src, uint32_t flags = 0 ) HELIUM_OVERRIDE;
            virtual bool Equals( Object* object ) HELIUM_OVERRIDE;

            virtual void Serialize( Archive& archive ) HELIUM_OVERRIDE;
            virtual void Deserialize( Archive& archive ) HELIUM_OVERRIDE;

            virtual void Accept( Visitor& visitor ) HELIUM_OVERRIDE;
        };
    }
}