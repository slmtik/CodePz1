// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CodePz1GameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class CODEPZ1_API ACodePz1GameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	 virtual void BeginPlay() override;
};
