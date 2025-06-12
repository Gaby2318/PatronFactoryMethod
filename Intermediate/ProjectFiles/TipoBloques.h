#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FabricaBloques.generated.h"
// Enumeraci�n para los tipos de bloques en el juego
UENUM(BlueprintType)
enum class ETipoBloque : uint8
{
	Normal         UMETA(DisplayName = "Normal"),
	Destructible   UMETA(DisplayName = "Destructible"),
	Indestructible UMETA(DisplayName = "Indestructible"),
	PowerUp        UMETA(DisplayName = "PowerUp")
};
// Enumeraci�n para los tipos de enemigos
UENUM(BlueprintType)
enum class ETipoPowerUp : uint8
{
	Basico        UMETA(DisplayName = "B�sico"),
	Velocidad     UMETA(DisplayName = "Velocidad"),
	Explosion     UMETA(DisplayName = "Explosion"),
	Bomba 	      UMETA(DisplayName = "Bomba")
};
