// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Stone.h"
#include "StoneType.h"
#include "StoneSystem.generated.h"


UCLASS()
class EXCLAMATORY_API AStoneSystem : public AActor
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	AStoneSystem();

private:
	// current stone type
	StoneType stoneType=StoneType::None;
	// stone num of current stone type
	int stoneNum = 20;
	
	// remaining time of stone-type-change-anim
	float changeAnimTime = -1;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AStone> StoneBlueprint;
	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	TArray<AStone*> stones;
	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* ArcherSpringArm;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Manage the position of every stone per tick
	void UpdateStonePosition();

	// Change stone type
	void ChangeStoneType(StoneType targetType=StoneType::Saber);

private:
	// Destroy current stones
	void DestroyStones();

	// Spawn stones
	void SpawnStones();
};
