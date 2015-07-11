// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "WormSpawner.generated.h"

UCLASS()
class MINIJAMJULY2015_API AWormSpawner : public AActor
{
	GENERATED_BODY()
	
public:	



	// Sets default values for this actor's properties
	AWormSpawner();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	
	
};
