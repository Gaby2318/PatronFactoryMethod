// Fill out your copyright notice in the Description page of Project Settings.


#include "FabricaBloques.h"
#include "Bloques.h"
#include "BloqueDestructible.h"

// Sets default values
AFabricaBloques::AFabricaBloques()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFabricaBloques::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFabricaBloques::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
/*
ABloques* AFabricaBloques::CrearBloque(ETipoBloque TipoBloque, int32 ID)
{
	ABloques* NuevoBloque = nullptr;
	switch (TipoBloque)
	{
	case ETipoBloque::Normal:
		NuevoBloque = GetWorld()->SpawnActor<ABloques>();
		break;
	case ETipoBloque::Destructible:
		NuevoBloque = GetWorld()->SpawnActor<ABloqueDestructible>();
		break;
	case ETipoBloque::Indestructible:
		// Implementar lógica para bloques indestructibles
		break;
	case ETipoBloque::PowerUp:
		// Implementar lógica para bloques de PowerUp
		break;
	default:
		break;
	}
	if (NuevoBloque)
	{
		NuevoBloque->InicializarBlock(ID, UEnum::GetValueAsString(TipoBloque));
	}
	return NuevoBloque;
}*/
