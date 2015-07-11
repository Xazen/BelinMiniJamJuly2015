// Fill out your copyright notice in the Description page of Project Settings.

#include "MiniJamJuly2015.h"
#include "WormSpawner.h"


// Sets default values
AWormSpawner::AWormSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWormSpawner::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWormSpawner::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

