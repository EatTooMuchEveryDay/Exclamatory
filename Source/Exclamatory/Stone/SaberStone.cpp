// Fill out your copyright notice in the Description page of Project Settings.

#include "SaberStone.h"

ASaberStone::ASaberStone() :AStone() {

}

// Update the location of stone, called by stoneSystem
void ASaberStone::UpdateLocation(FVector center, FVector forward, float time) {

}

void ASaberStone::generateMesh() {

	StoneMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SaberStoneMesh"));
}
