// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Stone.h"
#include "StoneType.h"
#include "ArcherStone.generated.h"

/**
 * 
 */
UCLASS()
class EXCLAMATORY_API AArcherStone : public AStone
{
	GENERATED_BODY()

	AArcherStone();
	
	// Update the location of stone, called by stoneSystem
	virtual void UpdateLocation(FVector center, FVector forward, float time);

	virtual void generateMesh();
};
