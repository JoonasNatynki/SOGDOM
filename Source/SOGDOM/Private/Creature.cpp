// Fill out your copyright notice in the Description page of Project Settings.

#include "Creature.h"

// Sets default values for this component's properties
UCreature::UCreature()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}

// Called when the game starts
void UCreature::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void UCreature::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

