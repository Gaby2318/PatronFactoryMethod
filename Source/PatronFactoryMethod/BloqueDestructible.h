// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloques.h"
#include "BloqueDestructible.generated.h"

/**
 * 
 */
UCLASS()
class PATRONFACTORYMETHOD_API ABloqueDestructible : public ABloques
{
	GENERATED_BODY()

public:
	ABloqueDestructible();
	virtual void BlockComportamiento() override;

	UFUNCTION()
	void OnDestruirBloque(AActor* ActorDestruye);
};
