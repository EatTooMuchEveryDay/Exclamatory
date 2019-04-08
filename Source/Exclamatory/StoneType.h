// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
//#include "StoneType.generated.h"

UENUM(BlueprintType)
enum class StoneType :uint8
{
	None UMETA(DisplayName="None"),
	Saber UMETA(DisplayName="Saber"),
	Archer UMETA(DisplayName="Archer"),
	Caster UMETA(DisplayName="Caster")
};
