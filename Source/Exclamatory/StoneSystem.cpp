// Fill out your copyright notice in the Description page of Project Settings.

#include "StoneSystem.h"
#include "Engine.h"

// Sets default values
AStoneSystem::AStoneSystem()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpawnStones();
}

// Called when the game starts or when spawned
void AStoneSystem::BeginPlay()
{
	Super::BeginPlay();

	//UWorld* const world = GetWorld();

	//if (world) {
	//	for (int i = 0; i < stoneNum; i++)
	//		stones.Add(world->SpawnActor<AStone>());
	//}
	//else if (GEngine) {
	//	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("World not exist while spawning stone")));
	//}

}

// Called every frame
void AStoneSystem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);



	UpdateStonePosition();

}

// Manage the position of every stone per tick
void AStoneSystem::UpdateStonePosition() {

}

// Change stone type
void AStoneSystem::ChangeStoneType(StoneType targetType) {
	stoneType = targetType;

	// Should set different stone num for stone types?
	//switch (stoneType) {
	//case StoneType::Saber:
	//	stoneNum = 20;
	//case StoneType::Archer:
	//	stoneNum = 16;
	//case StoneType::Caster:
	//	stoneNum = 20;
	//}

	DestroyStones();
	SpawnStones();
}

// Destroy currnet stones
void AStoneSystem::DestroyStones() {
	for (AStone* stone : stones)
		stone->Destroy();

	stones.Empty();
}

// Spawn stones
void AStoneSystem::SpawnStones() {
	for (int i = 0; i < stoneNum; i++) {
		AStone* p = SpawnStone(stoneType);
		if (p != nullptr)
			stones.Add(p);
	}
}

// Spawn a stone according to current stone type
AStone* AStoneSystem::SpawnStone(StoneType targetType) {
	AStone* pStone = nullptr;

	switch (targetType) {
	case StoneType::Archer:
		pStone = new AArcherStone();
		break;
	case StoneType::Saber:
		pStone = new ASaberStone();
		break;
	default:
		pStone = nullptr;
	}

	if (pStone = nullptr) {
		if (GEngine) {
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Stone type error!")));
		}
	}

}