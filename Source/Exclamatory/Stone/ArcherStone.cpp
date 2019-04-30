// Fill out your copyright notice in the Description page of Project Settings.

#include "ArcherStone.h"

AArcherStone::AArcherStone():AStone() {

}

// Update the location of stone, called by stoneSystem
void AArcherStone::UpdateLocation(FVector center, FVector forward, float time) {

}

void AArcherStone::generateMesh() {

	StoneMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ArcherStoneMesh"));
}