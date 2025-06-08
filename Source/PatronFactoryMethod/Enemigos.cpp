// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemigos.h"


// Sets default values
AEnemigos::AEnemigos()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemigos::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemigos::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	ComportamientoEnemigo();

}

void AEnemigos::InicializarEnemigo(int32 ID, const FString& Type)
{
	/*
	TipoEnemigos = Type;

	// Configuración basada en el tipo
	switch (TipoEnemigos)
	{
	case ETipoEnemigos::Basico:
		// Configuración para enemigo básico
		break;
	case ETipoEnemigos::Rápido:
		// Configuración para enemigo rápido
		break;
	case ETipoEnemigos::Explosivo:
		// Configuración para enemigo explosivo
		break;
	case ETipoEnemigos::Inteligente:
		// Configuración para enemigo inteligente
		break;
	}
	*/

}

void AEnemigos::ComportamientoEnemigo()
{
	//Implementa IA simple (puedes usar Behavior Trees o tu propia lógica)
/*
	switch (TipoEnemigos)
	{
	case ETipoEnemigos::Basico:
		// Movimiento aleatorio básico
		if (FMath::RandRange(0, 100) < 2)
		{
			FVector NuevaPosicion = GetActorLocation() + FMath::VRand() * 100.0f; // Movimiento aleatorio
			SetActorLocation(NuevaPosicion);
		}
		// Comportamiento para enemigo básico
		break;
	case ETipoEnemigos::Rápido:
		// Movimiento rápido
		if (FMath::RandRange(0, 100) < 5)
		{
			FVector NuevaPosicion = GetActorLocation() + FMath::VRand() * 200.0f; // Movimiento más rápido
			SetActorLocation(NuevaPosicion);
		}
		// Comportamiento para enemigo rápido
		break;
	}*/
}

