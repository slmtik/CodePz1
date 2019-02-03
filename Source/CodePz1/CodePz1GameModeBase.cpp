// Fill out your copyright notice in the Description page of Project Settings.

#include "CodePz1GameModeBase.h"
#include <OutputDeviceNull.h>
#include <UnrealType.h>

void ACodePz1GameModeBase::BeginPlay()
{
	Super::BeginPlay();

	FOutputDeviceNull ar;
	this->CallFunctionByNameWithArguments(TEXT("DisplayChanged"), ar, this, true);

	UBoolProperty* ptrChanged = FindField<UBoolProperty>(this->GetClass(), TEXT("bChanged"));
	if (ptrChanged != nullptr)
	{
		bool bChanged = ptrChanged->GetPropertyValue_InContainer(this);
		ptrChanged->SetPropertyValue_InContainer(this, !bChanged);
	}

	this->CallFunctionByNameWithArguments(TEXT("DisplayChanged"), ar, this, true);
}
