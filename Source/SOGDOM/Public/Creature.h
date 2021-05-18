// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Creature.generated.h"

//	This class defines what a creature is. A creature is a being that is considered "alive": Spirits, ghosts, animals, insects etc
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SOGDOM_API UCreature : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCreature();

	//	This is the unique name of the creature internally.
	UPROPERTY(Category = "Creature", EditDefaultsOnly)
	FString InternalName = FString("<Unnamed creature>");

	//	The age of the creature in days. -1 is undefined/ageless
	UPROPERTY(Category = "Creature", VisibleAnywhere)
	int32 Age = 0;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
};
