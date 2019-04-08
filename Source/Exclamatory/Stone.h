// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StoneType.h"
#include "StoneSettings.h"
#include "Stone.generated.h"

UCLASS()
class EXCLAMATORY_API AStone : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AStone();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	float rotateSpeed = 1;
	float radius = 1;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Update the location of stone, called by stoneSystem
	void UpdateLocation(FVector );

	// change type
	void ChangeType(StoneType targetType);

	// change the shape of stone
	UFUNCTION(BlueprintImplementableEvent)
		void ChangeStoneShape(StoneType targetType);
};
