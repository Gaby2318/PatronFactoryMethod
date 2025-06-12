// Fill out your copyright notice in the Description page of Project Settings.


#include "Bloques.h"
#include "FabricaBloques.h"
#include "BloqueDestructible.h"
//#include "TipoBloques.h"

// Sets default values
ABloques::ABloques()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
}


// Called when the game starts or when spawned
void ABloques::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABloques::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABloques::InicializarBlock(int32 ID, const FString& Type)
{
	

/* BlockID = ID;
    BlockType = Type;
    BlockBehavior();*/
}

void ABloques::BlockComportamiento()
{
}

