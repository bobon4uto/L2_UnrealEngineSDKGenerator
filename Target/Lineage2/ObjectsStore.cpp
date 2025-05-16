#include <windows.h>

#include "PatternFinder.hpp"
#include "ObjectsStore.hpp"

#include "EngineClasses.hpp"

TArray<UObject*>* GlobalObjects = nullptr;

bool ObjectsStore::Initialize()
{
	auto address = FindPattern(GetModuleHandleW(L"core.dll"), reinterpret_cast<const unsigned char*>("\x8B\x0D\x78\x8B\x22\x10\x8B\x04\x81"), "xxxxxxxxx");
	if (address == -1)
	{
		return false;
	}

	GlobalObjects = reinterpret_cast<decltype(GlobalObjects)>(*reinterpret_cast<uint32_t*>(address + 2));

	return true;
}

void* ObjectsStore::GetAddress()
{
	return GlobalObjects;
}

size_t ObjectsStore::GetObjectsNum() const
{
	return GlobalObjects->Num();
}

UEObject ObjectsStore::GetById(size_t id) const
{
	return (*GlobalObjects)[id];
}
