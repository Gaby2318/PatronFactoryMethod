#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FabricaBloques.generated.h"

UENUM(BlueprintType)
enum class ETipoBloque : uint8
{
	Normal         UMETA(DisplayName = "Normal"),
	Destructible   UMETA(DisplayName = "Destructible"),
	Indestructible UMETA(DisplayName = "Indestructible"),
	PowerUp        UMETA(DisplayName = "PowerUp")
};

UENUM(BlueprintType)
enum class ETipoPowerUp : uint8
{
	Basico        UMETA(DisplayName = "Básico"),
	Velocidad     UMETA(DisplayName = "Velocidad"),
	Explosion     UMETA(DisplayName = "Explosion"),
	Bomba 	      UMETA(DisplayName = "Bomba")
};
